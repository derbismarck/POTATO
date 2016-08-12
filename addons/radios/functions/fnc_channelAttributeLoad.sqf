/*
 *
 */

#include "script_component.hpp"
TRACE_1("params",_this);

params ["_ctrlGroup",["_channelArray", [0,0,0], [[],true]]];

if (_ctrlGroup getVariable [QGVAR(channelsInvalid), false]) exitWith { LOG("Multiple sides selected, exiting early"); };

if (_params isEqualType true && {_params}) exitWith { LOG("channels not set, or in strange state, exiting early"); };

private _ctrlSet = _ctrlGroup controlsGroupCtrl RADIO_SET_IDC;
private _ctrlRadio = _ctrlGroup controlsGroupCtrl RADIO_CHOOSE_IDC;
private _ctrlChannels = _ctrlGroup controlsGroupCtrl RADIO_CHANNEL_IDC;

_ctrlGroup setVariable [QGVAR(selectedChannels), _channelArray];

_ctrlSet lbSetCurSel 1;
[_ctrlSet,1] call FUNC(channelControlSetChange);
_ctrlChannels lnbSetCurSelRow (_channelArray select (lbCurSel _ctrlRadio));
