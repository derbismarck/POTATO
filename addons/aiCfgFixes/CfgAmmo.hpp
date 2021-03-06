class CfgAmmo {
    class Default;
    class ShellCore: Default {
        audibleFire = 16;
    };
    class BulletCore: Default {
        audibleFire = 16;
    };
    class SubmunitionCore: Default {
        audibleFire = 16;
    };
    class RocketCore: Default {
        audibleFire = 32;
    };
    class MissileCore: Default {
        audibleFire = 32;
    };
    class Grenade: Default {
        audibleFire = 0.25;
    };
    class GrenadeCore: Default {
        audibleFire = 0.25;
    };
    class LaserCore: Default {
        audibleFire = 32;
    };
    class TimeBombCore: Default {
        audibleFire = 0;
    };
    class ShotDeployCore: Default {
        audibleFire = 16;
    };
    class ShotgunCore: Default {
        audibleFire = 16;
    };
    class ShellBase: ShellCore {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class ACE_HuntIR_Propell: ShellBase {
        audibleFire = 1;
    };
    class R_230mm_fly: ShellBase {
        audibleFire = 64;
    };
    class BulletBase: BulletCore {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class FakeAmmo: BulletCore {
        audibleFire = 16;
    };
    class RHS_LWIRCM_Ammo_MELB: BulletBase {
        audibleFire = 0;
    };
    class B_556x45_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class B_762x51_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class ammo_Gun35mmAABase: BulletBase {
        audibleFire = 200;
    };
    class ammo_Gun30mmAABase: BulletBase {
        audibleFire = 200;
    };
    class ammo_Gun20mmAABase: BulletBase {
        audibleFire = 200;
    };
    class rhs_ammo_9x19_JHP: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_ammo_9x19_FMJ: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_ammo_45ACP_MHP: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_1;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_1";
    };
    class rhs_ammo_762x51_M80_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_ammo_75x55_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_ammo_792x57_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_ammo_762x25_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class B_9x21_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class B_35mm_AA: BulletBase {
        audibleFire = 200;
    };
    class B_30mm_AP: BulletBase {
        audibleFire = 200;
    };
    class RHS_Ammo_DIRCM_Vitebsk: BulletBase {
        audibleFire = 0;
    };
    class B_127x54_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_1;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_1";
    };
    class B_338_NM_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class B_338_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class CUP_B_25mm_APFSDS_White_Tracer: BulletBase {
        audibleFire = 32;
    };
    class CUP_B_25mm_HE_White_Tracer: BulletBase {
        audibleFire = 32;
    };
    class CUP_B_30mm_CAS_Red_Tracer: BulletBase {
        audibleFire = 32;
    };
    class CUP_B_30x113mm_M789_HEDP_Red_Tracer: BulletBase {
        audibleFire = 28;
    };
    class CUP_B_23mm_APHE_Green_Tracer: BulletBase {
        audibleFire = 32;
    };
    class CUP_B_23mm_APHE_No_Tracer: BulletBase {
        audibleFire = 32;
    };
    class CUP_B_23mm_AA: BulletBase {
        audibleFire = 32;
    };
    class CUP_B_23mm_APHE_Tracer_Green: BulletBase {
        audibleFire = 32;
    };
    class CUP_B_20mm_AA: BulletBase {
        audibleFire = 32;
    };
    class CUP_B_20mm_API_Tracer_Red: BulletBase {
        audibleFire = 32;
    };
    class CUP_B_20mm_APHE_Tracer_Red: BulletBase {
        audibleFire = 32;
    };
    class CUP_B_20mm_AP_Tracer_Red: BulletBase {
        audibleFire = 28;
    };
    class CUP_B_19mm_HE: BulletBase {
        audibleFire = 18;
    };
    class CUP_B_12Gauge_Pellets: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class CUP_B_12Gauge_74Slug: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class CUP_B_145x115_AP_Green_Tracer: BulletBase {
        audibleFire = 25;
    };
    class CUP_B_127x108_Ball_Green_Tracer: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class B_127x107_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class CUP_B_765x17_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class CUP_B_9x19_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class CUP_B_9x18_Ball: BulletBase {
    };
    class CUP_B_86x70_Ball_noTracer: BulletBase {
        audibleFire = 22;
    };
    class CUP_B_9x39_SP5: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_1;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_1";
    };
    class CUP_B_762x54_Ball_White_Tracer: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class CUP_B_303_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class CUP_B_762x39_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class B_93x64_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class B_20mm: BulletBase {
        audibleFire = 200;
    };
    class Gatling_30mm_HE_Plane_CAS_01_F: BulletBase {
        audibleFire = 250;
    };
    class B_45ACP_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_1;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_1";
    };
    class B_coil_5g_spike: BulletBase {
        audibleFire = 0.01;
    };
    class B_25mm: BulletBase {
        audibleFire = 200;
    };
    class B_19mm_HE: BulletBase {
        audibleFire = 150;
    };
    class B_127x108_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class B_127x99_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class B_127x33_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class B_408_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class B_56x15_dual: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_1;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_1";
    };
    class HLC_9x19_Ball: B_556x45_Ball {
    };
    class FH_545x39_Ball: B_556x45_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class HLC_3006_FMJ: B_556x45_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class HLC_68x43_FMJ: B_556x45_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class HLC_300WM_BTSP: B_556x45_Ball {
    };
    class HLC_300WM_Tracer: B_556x45_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class HLC_300WM_FMJ: B_556x45_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class HLC_303Brit_B: B_556x45_Ball {
    };
    class HLC_300Blackout_Ball: B_556x45_Ball {
    };
    class HLC_556NATO_SPR: B_556x45_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class HLC_556NATO_SOST: B_556x45_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class HLC_556NATO_EPR: B_556x45_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_ammo_556x45_M855A1_Ball: B_556x45_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_ammo_556x45_blank: B_556x45_Ball {
        audibleFire = 0;
    };
    class rhs_ammo_556x45_Mk262_Ball: B_556x45_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_ammo_556x45_Mk318_Ball: B_556x45_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_ammo_556x45_M855_Ball: B_556x45_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_B_545x39_Ball: B_556x45_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class B_556x45_dual: B_556x45_Ball {
        audibleFire = AI_AUDIBLE_FIRE_1;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_1";
    };
    class HLC_9x19_Subsonic: HLC_9x19_Ball {
        audibleFire = AI_AUDIBLE_FIRE_1;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_1";
    };
    class FH_545x39_EP: FH_545x39_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class FH_545x39_7u1: FH_545x39_Ball {
        audibleFire = AI_AUDIBLE_FIRE_1;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_1";
    };
    class HLC_GP11_FMJ: B_762x51_Ball {
    };
    class rhs_B_762x39_Ball: B_762x51_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_B_762x54_Ball: B_762x51_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class CUP_B_762x51_noTracer: B_762x51_Ball {
    };
    class HLC_GP11_tracer: HLC_GP11_FMJ {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class hlc_68x43_Sub: HLC_68x43_FMJ {
        audibleFire = AI_AUDIBLE_FIRE_1;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_1";
    };
    class hlc_68x43_OTM: HLC_68x43_FMJ {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class HLC_300WM_S_BT: HLC_300WM_BTSP {
        audibleFire = AI_AUDIBLE_FIRE_1;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_1";
    };
    class HLC_300WM_BTHP: HLC_300WM_BTSP {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class HLC_300WM_AP: HLC_300WM_BTSP {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class HLC_792x57_Ball: HLC_303Brit_B {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class HLC_792x57_AP: HLC_792x57_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class HLC_792x57_Tracer: HLC_792x57_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class HLC_300Blackout_RNBT: HLC_300Blackout_Ball {
        audibleFire = AI_AUDIBLE_FIRE_1;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_1";
    };
    class HLC_300Blackout_SMK: HLC_300Blackout_Ball {
        audibleFire = AI_AUDIBLE_FIRE_1;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_1";
    };
    class SubmunitionBase: SubmunitionCore {
    };
    class VOG25P_SubMunition: SubmunitionBase {
        audibleFire = 6;
    };
    class rhs_ammo_mixed_23x115mm: SubmunitionBase {
        audibleFire = 32;
    };
    class rhs_ammo_gsh30_mixed: SubmunitionBase {
        audibleFire = 32;
    };
    class rhs_ammo_30x173mm_GAU8_mixed: SubmunitionBase {
        audibleFire = 250;
    };
    class SubmunitionBullet: SubmunitionBase {
    };
    class RocketBase: RocketCore {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_ammo_maaws_ILLUM: RocketBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_ammo_maaws_SMOKE: RocketBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_ammo_maaws_HE: RocketBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_ammo_maaws_HEDP: RocketBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_ammo_maaws_HEAT: RocketBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_ammo_smaw_SR: RocketBase {
        audibleFire = 3;
    };
    class rhs_ammo_smaw_HEDP: RocketBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_ammo_smaw_HEAA: RocketBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_ammo_M136_rocket: RocketBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class R_PG32V_F: RocketBase {
    };
    class CUP_R_SMAW_HEDP_N: RocketBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class CUP_R_RPG18_AT: RocketBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class CUP_R_MEEWS_HEDP: RocketBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class CUP_R_M136_AT: RocketBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class CUP_R_SMAW_HEDP: RocketBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class CUP_R_70mm_Hydra_HE: RocketBase {
    };
    class CUP_R_OG7_AT: RocketBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class CUP_R_TBG7V_AT: RocketBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class CUP_R_PG7VR_AT: RocketBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class CUP_R_PG7VL_AT: RocketBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class CUP_R_PG7VM_AT: RocketBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class CUP_R_PG7V_AT: RocketBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class MissileBase: MissileCore {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_ammo_M_fgm148_AT: MissileBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class M_Titan_AA: MissileBase {
    };
    class rhs_ammo_fim92_missile: M_Titan_AA {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_ammo_46x30_FMJ: rhs_ammo_556x45_M855A1_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_ammo_9x17: B_9x21_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_B_9x18_57N181S: B_9x21_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_B_9x19_7N21: B_9x21_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_rpg26_rocket: R_PG32V_F {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_rpg7v2_pg7vl: rhs_rpg26_rocket {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_B_9x39_SP5: rhs_B_762x39_Ball {
        audibleFire = AI_AUDIBLE_FIRE_1;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_1";
    };
    class rhs_B_762x39_U_Ball: rhs_B_762x39_Ball {
        audibleFire = AI_AUDIBLE_FIRE_1;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_1";
    };
    class rhs_B_545x39_7U1_Ball: rhs_B_545x39_Ball {
        audibleFire = AI_AUDIBLE_FIRE_1;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_1";
    };
    class rhs_B_545x39_7N24_Ball: rhs_B_545x39_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_B_545x39_7N22_Ball: rhs_B_545x39_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_B_545x39_7N10_Ball: rhs_B_545x39_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_B_545x39_7N6_Ball: rhs_B_545x39_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class RHS_ammo_23mm_AA: B_35mm_AA {
        audibleFire = 32;
    };
    class rhs_ammo_30x165mm_base: B_30mm_AP {
        audibleFire = 32;
    };
    class rhs_m21OF_fly: R_230mm_fly {
        audibleFire = 64;
    };
    class rhs_ammo_3d17_shell: Grenade {
        audibleFire = 0.05;
    };
    class GrenadeHand: Grenade {
        audibleFire = 0.05;
    };
    class GrenadeBase: GrenadeCore {
    };
    class FlareCore: GrenadeCore {
    };
    class SmokeShellCore: GrenadeCore {
        audibleFire = 0.25;
    };
    class G_40mm_HE: GrenadeBase {
        audibleFire = 30;
    };
    class CUP_G_40mm_HE: G_40mm_HE {
    };
    class CUP_G_30mm_HE: CUP_G_40mm_HE {
        audibleFire = 18;
    };
    class CUP_R_CRV7_C18_HE: CUP_R_70mm_Hydra_HE {
        audibleFire = 32;
    };
    class CUP_B_9x18_SD: CUP_B_9x18_Ball {
        audibleFire = AI_AUDIBLE_FIRE_1;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_1";
    };
    class CUP_B_762x51_White_Tracer_3RndBurst: CUP_B_762x51_noTracer {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class CUP_B_762x51_Red_Tracer_3RndBurst: CUP_B_762x51_noTracer {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class CUP_B_762x39_Ball_Tracer_Green: CUP_B_762x39_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class B_20mm_Tracer_Red: B_20mm {
    };
    class rhs_ammo_20mm_AP: B_20mm {
        audibleFire = 28;
    };
    class rhsusf_M61A2: B_20mm_Tracer_Red {
        audibleFire = 28;
    };
    class FlareBase: FlareCore {
    };
    class F_40mm_White: FlareBase {
        audibleFire = 20;
    };
    class B_30mm_HE: B_19mm_HE {
        audibleFire = 200;
    };
    class B_762x51_Minigun_Tracer_Red: SubmunitionBullet {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class B_65x39_Minigun_Caseless: SubmunitionBullet {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
};

