// FixingVariousObjects : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <cmath>



//Objects
#include "ObjModels\Objects.h"


//Misc
#include "IniFile.hpp"

//Replacement Functions


//Config Variables

static bool AnimTestThingie = true;
static bool JackleCard = true;
static bool DTargetRing = true;
static bool NightopianEggFix = true;
static bool NightRankCrystal = true;
static bool AokiSwitch = true;
static bool LostLight = true;
static bool AwningColor = true;
static bool WindyValleyLeaves = true;
static bool WindyValleyTornado = true;
static bool CutsceneFixes = true;
static bool BigBetaHotel = true;
static bool SkyDeckDrawDist = true;
static bool LevelClearPlus = true;


//Structs
struct ObjectThing
{
	ObjectFuncPtr func;
	int16_t list;
	int16_t field_A;
	Rotation3 Rotation;
	NJS_VECTOR Position;
	NJS_OBJECT* object;
};

//Additional SADX Variables
DataArray(CollisionData, stru_C67750, 0xC67750, 1);
DataArray(CollisionData, stru_C673B8, 0xC673B8, 7);



FunctionPointer(void, SetStatus, (ObjectMaster *a1), 0x0049CD60);
FunctionPointer(void, DynCol_LoadObject, (ObjectMaster *a1), 0x0049E170);
FunctionPointer(void, sub_446AF0, (ObjectMaster *a1, int a2), 0x446AF0);



DataPointer(int, DroppedFrames, 0x03B1117C);

//Additional SADX Functions
FunctionPointer(NJS_OBJECT *, DynamicCollision, (NJS_OBJECT *a1, ObjectMaster *a2, ColFlags surfaceFlags), 0x49D6C0);
FunctionPointer(int, rand1, (), 0x6443BF);
DataPointer(int, FramerateSetting, 0x0389D7DC);
DataPointer(float, CasinoCards, 0x07E5240);
FunctionPointer(void, sub_409E70, (NJS_MODEL_SADX *a1, int a2, float a3), 0x409E70);
//3406088
FunctionPointer(void, sub_4B79A0, (int a1), 0x4B79A0);

//FunctionPointer(int, rand, (), 0x6443BF);
FunctionPointer(void, sub_4DDC10, (ObjectMaster *a1), 0x4DDC10);

FunctionPointer(long double, sub_49CC70, (float a1, float a2, float a3), 0x49CC70);

FunctionPointer(void, sub_4B85C0, (ObjectMaster *a1), 0x4B85C0);


bool loadedPillar = false;
SETObjData MountainPillar = {};


FunctionPointer(void, j_DisableControl, (), 0x42F620);

FunctionPointer(void, sub_4303E0, (), 0x4303E0);
FunctionPointer(void, sub_42F630, (), 0x42F630);
FunctionPointer(void, sub_4314D0, (int a1), 0x4314D0);
FunctionPointer(void, sub_431780, (unsigned int index), 0x431780);
FunctionPointer(void, sub_42FC70, (ObjectMaster *a1, float a2, float a3, float a4), 0x42FC70);
FunctionPointer(void, sub_42FCD0, (ObjectMaster *a1, int a2, int a3, int a4), 0x42FCD0);
FunctionPointer(void, sub_42FE40, (ObjectMaster *a1), 0x42FE40);
FunctionPointer(void, sub_42FE00, (ObjectMaster *a1, NJS_ACTION *a2, NJS_TEXLIST *a3, float a4, char a5, char a6), 0x42FE00);
FunctionPointer(void, sub_430D00, (char a1, int a2, float a3, float a4, float a5), 0x430D00); //Camera positionig subroutine for cutscenes.
FunctionPointer(void, sub_430C90, (char a1, int a2, int a3, int a4, int a5), 0x430C90);
FunctionPointer(void, sub_42FFD0, (int a1, int a2, int a3, int a4, int a5), 0x42FFD0);
FunctionPointer(void, sub_431670, (ObjectMaster **a1, float a2, float a3, float a4, int a5, int a6, int a7), 0x431670);
FunctionPointer(void, sub_42FD20, (ObjectMaster *a1, char a2), 0x42FD20);
FunctionPointer(void, sub_6ECA20, (int a1, int a2, int a3, int a4, int a5, int a6), 0x6ECA20);
FunctionPointer(void, sub_6F6380, (float a1, float a2, float a3, int a4, int a5, int a6, int a7), 0x6F6380);
FunctionPointer(void, sub_6F62D0, (float a1, float a2, float a3), 0x6F62D0);
FunctionPointer(void, sub_6F6320, (int a1, int a2, int a3), 0x6F6320);
FunctionPointer(void, sub_6F6290, (), 0x6F6290);
FunctionPointer(void, sub_6F6120, (int a1, int a2, int a3, int a4, int a5, int a6, signed int a7), 0x6F6120);
FunctionPointer(void, sub_6F5C80, (), 0x6F5C80);
FunctionPointer(void, sub_6F5C40, (int a1), 0x6F5C40);
FunctionPointer(void, sub_4310F0, (ObjectMaster *a1), 0x4310F0);
FunctionPointer(void, sub_4310D0, (ObjectMaster *a1, void *a2), 0x4310D0);
FunctionPointer(void, sub_431930, (int a1), 0x431930);
FunctionPointer(void, _ioterm_7, (), 0x6EBB00);
FunctionPointer(void, sub_6EC580, (int a1, float a2, float a3, float a4, float a5, float a6, float a7, int a8, int a9, int a10, int a11, int a12, int a13, signed int a14), 0x6EC580);
FunctionPointer(int, sub_431900, (), 0x431900);
FunctionPointer(int, sub_431810, (int a1), 0x431810);
FunctionPointer(EntityData1 *, sub_6F5C60, (int a1, int a2, int a3), 0x6F5C60);
FunctionPointer(EntityData1 *, sub_6F5C20, (), 0x6F5C20);
FunctionPointer(int, sub_430000, (int a1, int a2, int a3, int a4), 0x430000);
FunctionPointer(void, sub_42FBB0, (), 0x42FBB0);
FunctionPointer(void, sub_424240, (EntityData1 *a1), 0x424240);
FunctionPointer(void, sub_430E50, (), 0x430E50);
FunctionPointer(int, sub_430EE0, (char a1, int a2, ObjectMaster *a3, int a4, int a5, int a6, int a7), 0x430EE0);
FunctionPointer(void, sub_6EC2B0, (ObjectMaster *a1, float a2, float a3, float a4, float a5, float a6, float a7, signed int a8), 0x6EC2B0);
FunctionPointer(EntityData1 *, sub_6F5C00, (), 0x6F5C00);
FunctionPointer(Loop *, sub_6EDA20, (int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9), 0x6EDA20);
FunctionPointer(ObjectMaster *, sub_6EF480, (float a1, float a2, float a3, float a4, float a5), 0x6EF480);
FunctionPointer(void, sub_6ED9A0, (), 0x6ED9A0);
FunctionPointer(void, sub_6EF4C0, (ObjectMaster *a1, float a2), 0x6EF4C0);
FunctionPointer(void, sub_42FC50, (int *a1), 0x42FC50);
FunctionPointer(void, sub_6F5BE0, (), 0x6F5BE0);
FunctionPointer(int, sub_6F62A0, (), 0x6F62A0);
FunctionPointer(void, sub_6F62C0, (int a1), 0x6F62C0);
FunctionPointer(int, sub_6F62B0, (int a1), 0x6F62B0);
FunctionPointer(Sint32, sub_424FC0, (int a1, EntityData1 *a2, int a3, int a4, float x, float y, float z), 0x424FC0);
FunctionPointer(char, sub_4304B0, (), 0x4304B0);
FunctionPointer(void, sub_42FDE0, (unsigned __int8 a1), 0x42FDE0);
FunctionPointer(void, sub_6F6210, (), 0x6F6210);
FunctionPointer(signed int, sub_441A40, (unsigned __int8 playerNum, char a2, NJS_VECTOR *a3, NJS_VECTOR *a4), 0x441A40);
FunctionPointer(void, sub_43C550, (EntityData2 *a1, CharObj2 *a2), 0x43C550);

DataPointer(ObjectMaster *, dword_3C84044, 0x03C84044);
DataPointer(ObjectMaster *, dword_3C84048, 0x03C84048);
DataPointer(NJS_ACTION, dword_3C851B0, 0x03C851B0);
DataPointer(NJS_ACTION, off_2D0ADBC, 0x02D0ADBC);
DataPointer(NJS_ACTION, dword_3C851A8, 0x03C851A8);
DataPointer(NJS_ACTION, dword_3C85198, 0x03C85198);
DataPointer(void *, off_2BE0008, 0x02BE0008);
DataPointer(NJS_ACTION, dword_3C848F0, 0x03C848F0);
DataPointer(NJS_ACTION, off_2D06F6C, 0x02D06F6C);
DataPointer(NJS_ACTION, off_2D08DF4, 0x02D08DF4);
DataPointer(NJS_ACTION, off_8AC3F4, 0x08AC3F4);
DataPointer(NJS_ACTION, off_2D0AC0C, 0x02D0AC0C);
DataPointer(NJS_ACTION, off_2D23464, 0x02D23464);
DataPointer(NJS_ACTION, off_2D2356C, 0x02D2356C);
DataPointer(NJS_ACTION, stru_89E254, 0x089E254);
DataPointer(NJS_ACTION, dword_3C84F34, 0x03C84F34);
DataPointer(NJS_ACTION, dword_3C84898, 0x03C84898);

DataPointer(int, dword_3D0DB90, 0x03D0DB90);
DataPointer(int, dword_3D0DC00, 0x03D0DC00);
DataArray(_DWORD, dword_38E2020, 0x038E2020, 16);
DataPointer(int, dword_3D0DB94, 0x03D0DB94);
DataPointer(int, dword_3D0DB88, 0x03D0DB88);
DataArray(char, byte_3D0DBC0, 0x03D0DBC0, 0);
DataPointer(NJS_SPRITE, stru_3D0DB9C, 0x03D0DB9C);
DataPointer(D3DCOLORVALUE, stru_38E200C, 0x038E200C);

DataArray(ObjectListEntry, SkyDeckObjectList, 0x02230F20, 137);


DataPointer(NJS_TEXLIST, CARDDISPSPRITEB_TEXLIST, 0x01D8B394, 10);

DataPointer(NJS_ACTION, UnusedEggNightopianACTION, 0x01DE18A4);

DataPointer(NJS_OBJECT, FinalEggDoorD, 0x01A033DC);
DataPointer(NJS_OBJECT, FinalEggDoorD2, 0x01A03A9C);
DataPointer(NJS_OBJECT, FinalEggDoorE, 0x01A04194);
DataPointer(NJS_OBJECT, FinalEggDoorE2, 0x01A04854);
DataPointer(NJS_OBJECT, FinalEggDoorF, 0x01A04F4C);
DataPointer(NJS_OBJECT, FinalEggDoorF2, 0x01A0560D);



int LevelClearTimer = 0;
int ActionSwitchClearTimer = 0;
bool RestoredRedMountainAction = false;
int previousaction;
int currentaction = 0;
int currentactionmode = 0;
bool ActionAnimTestingActive = false;
bool AngelIslandFlagHolder = false;




//Null Code (Used for debugging purposes)
void __cdecl NullFunction(ObjectMaster *a1)
{
	return;
}

//Standard Display
void __cdecl Basic_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	Angle v2; // eax@2
	Angle v3; // eax@4
	Angle v4; // eax@6

	v1 = a2->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.z;
		if (v2)
		{
			njRotateZ(0, (unsigned __int16)v2);
		}
		v3 = v1->Rotation.x;
		if (v3)
		{
			njRotateX(0, (unsigned __int16)v3);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		ProcessModelNode_AB_Wrapper(v1->Object, 1.0);
		njPopMatrix(1u);
	}
}

//Standard Main
void __cdecl Basic_Main(ObjectMaster *a1)
{
	EntityData1 *v1; // edi@1

	v1 = a1->Data1;
	if (!ClipSetObject_Min(a1))
	{
		if (!ObjectSelectedDebug(a1))
		{
			AddToCollisionList(v1);
		}
		Basic_Display(a1);
	}
}

//Standard Delete Dynamic
void deleteSub_Global(ObjectMaster *a1) {
	if (a1->Data1->Object)
	{
		DynamicCOL_Remove(a1, a1->Data1->Object);
		ObjectArray_Remove(a1->Data1->Object);
	}
	DeleteObject_(a1);
}

void AddToCollision(ObjectMaster *a1, uint8_t col) {
	/*  0 is static
	1 is moving (refresh the colision every frame)
	2 is static, scalable
	3 is moving, scalable   */

	EntityData1 * original = a1->Data1;
	NJS_OBJECT *colobject;

	colobject = ObjectArray_GetFreeObject(); //The collision is a separate object, we add it to the list of object

	//if scalable
	if (col == 2 || col == 3) {
		colobject->evalflags = NJD_EVAL_BREAK | NJD_EVAL_SKIP | NJD_EVAL_HIDE;
		colobject->scl[0] = original->Scale.x;
		colobject->scl[1] = original->Scale.y;
		colobject->scl[2] = original->Scale.z;
	}
	else if (col == 4) {
		colobject->evalflags = NJD_EVAL_BREAK | NJD_EVAL_SKIP | NJD_EVAL_HIDE;
		colobject->scl[0] = 1.0f + original->Scale.x;
		colobject->scl[1] = 1.0f + original->Scale.x;
		colobject->scl[2] = 1.0f + original->Scale.x;
	}
	else if (col == 5) {
		colobject->evalflags = NJD_EVAL_BREAK | NJD_EVAL_SKIP | NJD_EVAL_HIDE;
		colobject->scl[0] = 1.0f + original->Scale.z;
		colobject->scl[1] = 1.0f + original->Scale.z;
		colobject->scl[2] = 1.0f + original->Scale.z;
	}
	else {
		colobject->evalflags = NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK | NJD_EVAL_SKIP | NJD_EVAL_HIDE; //ignore scale
		colobject->scl[0] = 1.0;
		colobject->scl[1] = 1.0;
		colobject->scl[2] = 1.0;
	}

	//add the rest
	if (col == 4 || col == 1 || col == 5)
	{
		colobject->ang[0] = 0;
		colobject->ang[1] = original->Rotation.y;
		colobject->ang[2] = 0;
	}
	else {
		colobject->ang[0] = original->Rotation.x;
		colobject->ang[1] = original->Rotation.y;
		colobject->ang[2] = original->Rotation.z;
	}
	colobject->pos[0] = original->Position.x;
	colobject->pos[1] = original->Position.y;
	colobject->pos[2] = original->Position.z;

	colobject->basicdxmodel = a1->Data1->Object->basicdxmodel; //object it will use as a collision
	a1->Data1->Object = colobject; //pointer to the collision object into our original object

	if (col == 0 || col == 2) DynamicCOL_Add((ColFlags)1, a1, colobject); //Solid
	else if (col == 1 || col == 3 || col == 4 || col == 5) DynamicCOL_Add((ColFlags)0x8000000, a1, colobject); //Dynamic, solid
}

//Basic drawing call
void DrawObjModel(ObjectMaster *a1, NJS_MODEL_SADX *m, bool scalable) {
	if (!MissedFrames) {
		njSetTexture((NJS_TEXLIST*)&BEACH01_TEXLIST); //Current heroes level texlist is always onto Emerald Coast
		njPushMatrix(0);
		njTranslateV(0, &a1->Data1->Position);
		njRotateXYZ(nullptr, a1->Data1->Rotation.x, a1->Data1->Rotation.y, a1->Data1->Rotation.z);
		if (scalable) njScale(nullptr, a1->Data1->Scale.x, a1->Data1->Scale.y, a1->Data1->Scale.z);
		else njScale(nullptr, 1, 1, 1);
		DrawQueueDepthBias = -6000.0f;
		DrawModel(m);
		DrawQueueDepthBias = 0;
		njPopMatrix(1u);
	}
}


int __cdecl LeafFix(void)
{
	return 0;
}

const char *const KeyBlockENG[] = {
		"\aWhat's this?",
		NULL,
};

const char *const KeyBlockFRE[] = {
		"\aQu'est-ce que c'est ? ",
		NULL,
};

const char *const KeyBlockSPN[] = {
		"\a¿Qué es esto?",
		NULL,
};

const char *const KeyBlockGER[] = {
		"\aWas ist das?",
		NULL,
};

void __cdecl KeyBlockLanguageAdds()
{
	switch (TextLanguage)
	{
	case 0:
		sub_4B79A0((int)0x2BBF1D8);
		break;
	case 1:
		DisplayHintText(KeyBlockENG, 240);
		break;
	case 2:
		DisplayHintText(KeyBlockFRE, 240);
		break;
	case 3:
		DisplayHintText(KeyBlockSPN, 240);
		break;
	case 4:
		DisplayHintText(KeyBlockGER, 240);
		break;
	default:
		sub_4B79A0((int)0x2BBF1D8);
		break;
	}
	//StopVoices();
	PlayVoice(1765);
}

const char *const ChaoCardENG[] = {
		"\aChao Card -\n Proof of Chao Stadium membership",
		NULL,
};

const char *const ChaoCardFRE[] = {
		"\aCarte Chao -\n Preuve d'adhésion au Stade Chao",
		NULL,
};

const char *const ChaoCardSPN[] = {
		"\a Tarjeta Chao -\n Prueba de membresía del estadio Chao",
		NULL,
};

const char *const ChaoCardGER[] = {
		"\a Chao Card -\n Nachweis der Mitgliedschaft im Chao-Stad", //missing 'ion' at the end because it doesn't fit!
		NULL,
};

void __cdecl ChaoCardLanguageAdds()
{
	switch (TextLanguage)
	{
	case 0:
		sub_4B79A0((int)0x2BBF080);
		break;
	case 1:
		DisplayHintText(ChaoCardENG, 240);
		break;
	case 2:
		DisplayHintText(ChaoCardFRE, 240);
		break;
	case 3:
		DisplayHintText(ChaoCardSPN, 240);
		break;
	case 4:
		DisplayHintText(ChaoCardGER, 240);
		break;
	default:
		sub_4B79A0((int)0x2BBF080);
		break;
	}
}

void __cdecl SonicLevelClearPlus()
{
	auto SonicPlayer = EntityData1Ptrs[0];
	if (CurrentLevel != 0 && (CurrentCharacter == 0 || CurrentCharacter == 9)) //Metal Sonic is seen as character 9?
	{
		if (SonicPlayer && GetCharObj2(0))
		{
			if (GetCharObj2(0)->Upgrades & Upgrades_SuperSonic)
			{
				if ((SonicPlayer->Action == 20 || SonicPlayer->Action == 19) && GetCharObj2(0)->AnimationThing.Index == 143)
				{
					if (LevelClearTimer < 380)
					{
						LevelClearTimer++;
						if (FramerateSetting <= 2)
						{
							LevelClearTimer++;
						}
					}

					else if (GetCharObj2(0)->AnimationThing.Index != 144)
					{
						GetCharObj2(0)->AnimationThing.Index = 144; //Level Clear -> Idle Pose
					}
				}

				if (LevelClearTimer >= 380 && CurrentLevel == 5 && ActionSwitchClearTimer < 200)
				{
					ActionSwitchClearTimer++;
					if (FramerateSetting <= 2)
					{
						ActionSwitchClearTimer++;
					}
				}

				else if (ActionSwitchClearTimer >= 200 && RestoredRedMountainAction == false)
				{
					SonicPlayer->Action = 75; //Restoring Control in Red Mountain to fix cutscene
					RestoredRedMountainAction = true;
				}
			}

			else
			{
				if ((SonicPlayer->Action == 20 || SonicPlayer->Action == 19) && GetCharObj2(0)->AnimationThing.Index == 75)
				{
					if (LevelClearTimer < 380)
					{
						LevelClearTimer++;
						if (FramerateSetting <= 2)
						{
							LevelClearTimer++;
						}
					}

					else if (GetCharObj2(0)->AnimationThing.Index != 76)
					{
						GetCharObj2(0)->AnimationThing.Index = 76; //Level Clear -> Idle Pose
					}
				}

				if (LevelClearTimer >= 380 && CurrentLevel == 5 && ActionSwitchClearTimer < 200)
				{
					ActionSwitchClearTimer++;
					if (FramerateSetting <= 2)
					{
						ActionSwitchClearTimer++;
					}
				}

				else if (ActionSwitchClearTimer >= 200 && RestoredRedMountainAction == false)
				{
					SonicPlayer->Action = 1; //Restoring Control in Red Mountain to fix cutscene
					RestoredRedMountainAction = true;
				}
			}
		}

		else if (LevelClearTimer != 0 || ActionSwitchClearTimer != 0)
		{
			LevelClearTimer = 0;
			ActionSwitchClearTimer = 0;
			RestoredRedMountainAction = false;
		}
	}
}

void __cdecl TailsLevelClearPlus()
{
	auto TailsPlayer = EntityData1Ptrs[0];
	if (CurrentLevel != 0 && CurrentCharacter == 2)
	{
		if (TailsPlayer)
		{
			if ((TailsPlayer->Action == 18 || TailsPlayer->Action == 62) && GetCharObj2(0)->AnimationThing.Index == 54)
			{
				if (LevelClearTimer < 380)
				{
					LevelClearTimer++;
					if (FramerateSetting <= 2)
					{
						LevelClearTimer++;
					}
				}

				else if (GetCharObj2(0)->AnimationThing.Index != 55)
				{
					GetCharObj2(0)->AnimationThing.Index = 55; //Level Clear -> Idle Pose
				}
			}
		}

		else if (LevelClearTimer != 0 || ActionSwitchClearTimer != 0)
		{
			LevelClearTimer = 0;
			ActionSwitchClearTimer = 0;
		}
	}
}

void __cdecl KnucklesLevelClearPlus()
{
	auto KnucklesPlayer = EntityData1Ptrs[0];
	if (CurrentLevel != 0 && CurrentCharacter == 3)
	{
		if (KnucklesPlayer)
		{
			if ((KnucklesPlayer->Action == 16) && GetCharObj2(0)->AnimationThing.Index == 39)
			{
				if (LevelClearTimer < 380)
				{
					LevelClearTimer++;
					if (FramerateSetting <= 2)
					{
						LevelClearTimer++;
					}
				}

				else if (GetCharObj2(0)->AnimationThing.Index != 40)
				{
					GetCharObj2(0)->AnimationThing.Index = 40; //Level Clear -> Idle Pose
				}
			}
		}

		else if (LevelClearTimer != 0 || ActionSwitchClearTimer != 0)
		{
			LevelClearTimer = 0;
			ActionSwitchClearTimer = 0;
		}
	}
}

void __cdecl GammaLevelClearPlus()
{
	auto GammaPlayer = EntityData1Ptrs[0];
	if (CurrentLevel != 0 && CurrentCharacter == 6)
	{
		if (GammaPlayer)
		{
			if ((GammaPlayer->Action == 14) && GetCharObj2(0)->AnimationThing.Index == 67)
			{
				if (LevelClearTimer < 380)
				{
					LevelClearTimer++;
					if (FramerateSetting <= 2)
					{
						LevelClearTimer++;
					}
				}

				else if (GetCharObj2(0)->AnimationThing.Index != 68)
				{
					GetCharObj2(0)->AnimationThing.Index = 68; //Level Clear -> Idle Pose
				}
			}
		}

		else if (LevelClearTimer != 0 || ActionSwitchClearTimer != 0)
		{
			LevelClearTimer = 0;
			ActionSwitchClearTimer = 0;
		}
	}
}

int __cdecl TornadoRandomGeneratorFix() //Activates unused function in the final windy valley's tornado, letting it suck up Rhino tanks! (Also happens in Beta Windy Valley if mod is being used.)
{
	int result = rand();
	int negative = rand();

	if (negative % 50 == 0)
	{
		result *= -1;
	}

	return result;
}

void __cdecl TornadoRandomLeafFix(ObjectMaster *a1) //The tornado is meant to suck up three kinds of leaves, not just one. This will randomize which of the three it picks.
{
	if (a1)
	{
		if (!MissedFrames)
		{
			int randomizer = rand();

			if (randomizer % 7 == 0)
			{
				a1->Data1->Scale.z = 0;
			}
			else if (randomizer % 5 == 0)
			{
				a1->Data1->Scale.z = 2;
			}
			else
			{
				a1->Data1->Scale.z = 3; //Changed this requirement in the replacement display function.
			}
			sub_4DDC10(a1);
		}
	}
}

void __cdecl TornadoLeafDisplay(ObjectMaster *a1) //Replacing display function for tornado leaves to fix stupid programming choice of restricting the leaves.
{
	EntityData1 *v1; // esi
	Angle v2; // eax
	Angle v3; // eax
	Angle v4; // eax
	unsigned __int64 v5; // rax

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v2 = v1->Rotation.z;
		if (v2)
		{
			njRotateZ(0, (unsigned __int16)v2);
		}
		v3 = v1->Rotation.x;
		if (v3)
		{
			njRotateX(0, (unsigned __int16)v3);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		v5 = (unsigned __int64)v1->Scale.z;
		if ((_DWORD)v5)
		{
			if ((_DWORD)v5 == 3)
			{
				DrawModel_QueueVisible(&*(NJS_MODEL_SADX*)0xC15B00, QueuedModelFlagsB_EnableZWrite, 1.0);
			}
			else if ((_DWORD)v5 == 2)
			{
				DrawModel_QueueVisible(&*(NJS_MODEL_SADX*)0xC158B4, QueuedModelFlagsB_EnableZWrite, 1.0);
			}
			else if ((_DWORD)v5 == 0)
			{
				DrawModel_QueueVisible(&*(NJS_MODEL_SADX*)0xC158B4, QueuedModelFlagsB_EnableZWrite, 1.0);
			}
			njPopMatrix(1u);
		}
		else
		{
			DrawModel_QueueVisible(&*(NJS_MODEL_SADX*)0xC159D0, QueuedModelFlagsB_EnableZWrite, 1.0);
			njPopMatrix(1u);
		}
	}
}

void __cdecl ActionTesting()
{
	auto entity = EntityData1Ptrs[0];
	//EntityData2 entitytwo = *(EntityData2 *)PlayerPtrs[0]->Data2;

	if (entity && GetCharObj2(0))
	{
		Rings = (int)GetCharObj2(0)->AnimationThing.Index;
		Lives = entity->Action;

		if ((ControllerPointers[0]->PressedButtons & Buttons_R) && (ControllerPointers[0]->HeldButtons & Buttons_Y))
		{
			currentactionmode++;
			entity->Action = currentactionmode;
		}
		else if ((ControllerPointers[0]->PressedButtons & Buttons_L) && (ControllerPointers[0]->HeldButtons & Buttons_Y))
		{
			currentactionmode--;
			if (currentactionmode < 0)
			{
				currentactionmode = 0;
			}
			entity->Action = currentactionmode;
		}
		else if (ControllerPointers[0]->PressedButtons & Buttons_R)
		{
			currentaction++;
			if (CurrentCharacter == 0)
			{
				if (currentaction > 146)
				{
					currentaction = 146;
				}
			}
			else if (CurrentCharacter == 2)
			{
				if (currentaction > 135)
				{
					currentaction = 135;
				}
			}
			else if (CurrentCharacter == 3)
			{
				if (currentaction > 114)
				{
					currentaction = 114;
				}
			}
			else if (CurrentCharacter == 5)
			{
				if (currentaction > 101)
				{
					currentaction = 101;
				}
			}
			else if (CurrentCharacter == 6)
			{
				if (currentaction > 90)
				{
					currentaction = 90;
				}
			}
			else if (CurrentCharacter == 7)
			{
				if (currentaction > 76)
				{
					currentaction = 76;
				}
			}
			GetCharObj2(0)->AnimationThing.Index = currentaction;
		}
		else if (ControllerPointers[0]->PressedButtons & Buttons_L)
		{
			currentaction--;
			if (currentaction < 0)
			{
				currentaction = 0;
			}
			GetCharObj2(0)->AnimationThing.Index = currentaction;
		}
	}
}

void __cdecl KnucklesVSChaos2Fix(float a1, float a2, float a3)
{
	sub_6F62D0(a1, 1.0, a3);
}


void __cdecl SonicFinalBossIntroFix2(ObjectMaster *a1, NJS_ACTION *a2, NJS_TEXLIST *a3, float a4, char a5, char a6)
{
	//Just don't do the pose in midair.
	EntityData1Ptrs[0]->Position.x += 16;
	EntityData1Ptrs[0]->Position.z += 4; //Correcting Sonic's position to match the Dreamcast version
}



PointerInfo pointers[] = {

0
};


void Init(const char *path, const HelperFunctions &helperFunctions)
{
	const IniFile *config = new IniFile(std::string(path) + "\\config.ini");
	AnimTestThingie = config->getBool("Options", "AnimTestThingie", false);
	JackleCard = config->getBool("Options", "JackleCard", true);
	DTargetRing = config->getBool("Options", "DTargetRing", true);
	NightopianEggFix = config->getBool("Options", "NightopianEggFix", false);
	NightRankCrystal = config->getBool("Options", "NightRankCrystal", true);
	AokiSwitch = config->getBool("Options", "AokiSwitch", false);
	LostLight = config->getBool("Options", "LostLight", true);
	AwningColor = config->getBool("Options", "AwningColor", false);
	WindyValleyLeaves = config->getBool("Options", "WindyValleyLeaves", true);
	WindyValleyTornado = config->getBool("Options", "WindyValleyTornado", true);
	CutsceneFixes = config->getBool("Options", "CutsceneFixes", true);
	BigBetaHotel = config->getBool("Options", "BigBetaHotel", false);
	SkyDeckDrawDist = config->getBool("Options", "SkyDeckDrawDist", true);
	LevelClearPlus = config->getBool("Options", "LevelClearPlus", true);

	delete config;

	if (AwningColor)
	{
		*(NJS_OBJECT*)0x0267EF6C = object_00176704; //Speed Highway awning
	}
	if (LostLight)
	{
		*(NJS_MODEL_SADX*)0x020275AC = attach_0012CED4; //Lost World Light
	}
	if (AokiSwitch)
	{
		*(NJS_MODEL_SADX*)0x0202FF74 = attachSTG07_00151E30; //Whatever Aokiswitch. Might be fixed, but maybe it has SADX problems?
	}
	if (NightRankCrystal)
	{
		*(NJS_MODEL_SADX*)0x01DCF3B0 = attach_019CF3B0; //Casinopolis Rank Crystal (F)
	}
	if (DTargetRing)
	{
		*(NJS_MODEL_SADX*)0x01D8E440 = attach_0198E440; //Casinopolis DTarget Ring Bright Ver.
		*(NJS_MODEL_SADX*)0x01D8E6C8 = attach_0198E6C8; //Casinopolis DTarget Ring Dark Ver.
	}
	if (NightopianEggFix)
	{
		UnusedEggNightopianACTION.object = &object_00155E04; //Casinopolis Piantama
	}
	*(NJS_MODEL_SADX*)0x01DD2094 = attach_00153F0C; //Casinopolis Piantama Top
	*(NJS_MODEL_SADX*)0x01DD23FC = attach_00154264; //Casinopolis Piantama Bottom
	*(NJS_MODEL_SADX*)0x01DD1D18 = attach_00153BA4; //Casinopolis Piantama Full
}



extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer, &Init, NULL, 0, NULL, 0, NULL, 0, arrayptrandlength(pointers) };

	__declspec(dllexport) void cdecl Init()
	{
		if (WindyValleyLeaves)
		{
			WriteCall((void *)0x4E379D, LeafFix); //Removing ClipSet check for the leaves of Pu Wind.
			WriteCall((void *)0x4E354B, LeafFix);
			WriteCall((void *)0x4E52AD, LeafFix); //Doing the same for BLeaf.
		}
		if (BigBetaHotel)
		{
			WriteCall((void *)0x6368DE, KeyBlockLanguageAdds);
		}
		WriteJump((void *)0x636067, ChaoCardLanguageAdds);
		if (WindyValleyTornado)
		{
			WriteJump((void *)0x4DDC10, TornadoLeafDisplay);
			WriteCall((void *)0x4DEA9B, TornadoRandomGeneratorFix);
			WriteCall((void *)0x4DEB0A, TornadoRandomGeneratorFix);
			WriteCall((void *)0x4DDFB7, TornadoRandomLeafFix);
		}
		if (CutsceneFixes)
		{
			WriteCall((void *)0x693669, KnucklesVSChaos2Fix);
			WriteCall((void *)0x6D04E3, SonicFinalBossIntroFix2);
		}
		if (SkyDeckDrawDist)
		{
			SkyDeckObjectList[76].Distance = 3000000.0f; //Fixing the distance on the red light object and small wall light object in Sky Deck so that many of them in Act 1 can actually be seen.
			SkyDeckObjectList[77].Distance = 3000000.0f; //Above: red light, this one: small light
		}
	}

	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (JackleCard)
		{
			if (CurrentLevel == 9 && CurrentAct == 3) //Only when inside the Nights pinball table will this be set to 10. Because other things in the game use this variable! This enables the Jackle card!
			{
				if (CasinoCards == 9)
				{
					CasinoCards = 10;
				}
			}
			else
			{
				CasinoCards = 9;
			}
		}

		if (BigBetaHotel)
		{
			if (CurrentLevel == 26 && CurrentAct != 4 && CurrentCharacter == 7) //The Eventflag that checks for the beta puzzle to be solved is set after the cutscene where you watch Froggy hop towards 
			{																	//the hotel. 454 is that flag. 469 is the flag for if Big has cleared Emerald Coast. By checking this, we can enable
				if (EventFlagArray[454] == 1 && EventFlagArray[469] == 0)		//the puzzle by always deactivating the flag when outside the hotel area as Big and Emerald Coast hasn't been cleared yet!
				{																//The only issue is that if you solve the puzzle and leave without clearing Emerald Coast, you'll have to solve it again.
					EventFlagArray[454] = 0;
				}
			}
		}

		if (LevelClearPlus)
		{
			SonicLevelClearPlus();
			TailsLevelClearPlus();
			KnucklesLevelClearPlus();
			GammaLevelClearPlus();
		}

		if (AnimTestThingie)
		{
			if (ActionAnimTestingActive == true)
			{
				ActionTesting();
			}
			else if (currentaction != 0 || currentactionmode != 0)
			{
				currentaction = 0;
				currentactionmode = 0;
			}

			if (CurrentLevel != 0)
			{
				if ((ControllerPointers[0]->HeldButtons & Buttons_Y) && (ControllerPointers[0]->PressedButtons & Buttons_B) && (ControllerPointers[0]->PressedButtons & Buttons_X))
				{
					if (ActionAnimTestingActive == false)
					{
						ActionAnimTestingActive = true;
					}
					else
					{
						ActionAnimTestingActive = false;
					}
				}

				if ((GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21))
				{
					ActionAnimTestingActive = false;
				}
			}
		}
	}
}