#pragma once
#include "SADXModLoader.h"

NJS_MATERIAL matlist_001763C0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 74, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 74, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 75, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001763FC[] = {
	6, 6, 2, 1, 3, 0, 14,
	3, 1, 7, 6,
	0x8000u | 7, 14, 15, 3, 10, 2, 11, 6
};

Sint16 poly_00176422[] = {
	3, 6, 7, 16,
	3, 17, 14, 15
};

Sint16 poly_00176432[] = {
	0x8000u | 7, 9, 8, 11, 5, 6, 4, 16,
	0x8000u | 7, 11, 10, 9, 15, 12, 17, 13
};

NJS_TEX uv_00176454[] = {
	{ 51, -280 },
	{ 382, -280 },
	{ 382, 255 },
	{ 1147, -280 },
	{ 1147, 254 },
	{ 1530, 254 },
	{ 382, 255 },
	{ 0, 255 },
	{ 51, -280 },
	{ 1530, 254 },
	{ 1477, -280 },
	{ 1147, -280 },
	{ 1147, -510 },
	{ 382, -280 },
	{ 382, -508 },
	{ 51, -280 }
};

NJS_TEX uv_00176494[] = {
	{ 247, 28 },
	{ 0, -255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 247, 28 }
};

NJS_TEX uv_001764AC[] = {
	{ 2057, 255 },
	{ 1000, 255 },
	{ 1001, 7 },
	{ 496, 255 },
	{ 496, 7 },
	{ 0, 255 },
	{ 0, 7 },
	{ 1001, 7 },
	{ 2056, 7 },
	{ 2057, 255 },
	{ 2562, 7 },
	{ 2562, 255 },
	{ 3060, 7 },
	{ 3060, 255 }
};

NJS_MESHSET_SADX meshlist_001764E4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_001763FC, NULL, NULL, NULL, uv_00176454, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00176422, NULL, NULL, NULL, uv_00176494, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00176432, NULL, NULL, NULL, uv_001764AC, NULL }
};

NJS_VECTOR vertex_0017652C[] = {
	{ 0, 0, -15.5f },
	{ 0, 0, 14.5f },
	{ 14, -5, 14.5f },
	{ 14, -5, -15.5f },
	{ 0, -9, 29.5f },
	{ 14, -9, 27.5f },
	{ 14, -5, 27.5f },
	{ 0, 0, 29.5f },
	{ 20, -9, 14.5f },
	{ 20, -9, -15.5f },
	{ 20, -6, -15.5f },
	{ 20, -6, 14.5f },
	{ 14, -9, -28.5f },
	{ 0, -9, -30.5f },
	{ 0, 0, -30.5f },
	{ 14, -5, -28.5f },
	{ 0, -5, 29.5f },
	{ 0, -5, -30.5f }
};

NJS_VECTOR normal_00176604[] = {
	{ 0.336336f, 0.9417419f, 0 },
	{ 0.336336f, 0.9417419f, 0 },
	{ 0.251361f, 0.9678929f, 0 },
	{ 0.251361f, 0.9678929f, 0 },
	{ 0.141421f, 0, 0.989949f },
	{ 0.5973099f, 0, 0.80201f },
	{ 0.575139f, 0.514191f, 0.636257f },
	{ 0.33955f, 0.698985f, 0.629385f },
	{ 0.976719f, 0, 0.214523f },
	{ 0.976719f, 0, -0.214523f },
	{ 0.786262f, 0.598337f, -0.154225f },
	{ 0.786262f, 0.598337f, 0.154225f },
	{ 0.5973099f, 0, -0.80201f },
	{ 0.141421f, 0, -0.989949f },
	{ 0.33955f, 0.698985f, -0.629385f },
	{ 0.575139f, 0.514191f, -0.636257f },
	{ 0.141421f, 0, 0.989949f },
	{ 0.141421f, 0, -0.989949f }
};

NJS_MODEL_SADX attach_001766DC = { vertex_0017652C, normal_00176604, LengthOfArray<Sint32>(vertex_0017652C), meshlist_001764E4, matlist_001763C0, LengthOfArray<Uint16>(meshlist_001764E4), LengthOfArray<Uint16>(matlist_001763C0),{ 10, -4.5f, -0.5f }, 31.62277f, NULL };

NJS_OBJECT object_00176704 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001766DC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL }; //Awning

NJS_MATERIAL matlist_0012CD40[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_ONE }
};

Sint16 poly_0012CD54[] = {
	4, 2, 3, 8, 5,
	0x8000u | 5, 6, 2, 7, 3, 5,
	7, 7, 6, 0, 1, 8, 4, 2,
	3, 7, 0, 5,
	3, 8, 5, 0
};

NJS_TEX uv_0012CD8C[] = {
	{ 0, 254 },
	{ 0, 4 },
	{ 250, 4 },
	{ 129, 32 },
	{ 0, 254 },
	{ 250, 254 },
	{ 0, 4 },
	{ 250, 4 },
	{ 129, 32 },
	{ 250, 4 },
	{ 250, 254 },
	{ 0, 4 },
	{ 0, 254 },
	{ 250, 4 },
	{ 250, 254 },
	{ 0, 254 },
	{ 250, 4 },
	{ 0, 4 },
	{ 129, 32 },
	{ 0, 4 },
	{ 129, 32 },
	{ 250, 4 }
};

NJS_MESHSET_SADX meshlist_0012CDE4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0012CD54, NULL, NULL, NULL, uv_0012CD8C, NULL }
};

NJS_VECTOR vertex_0012CDFC[] = {
	{ -21.56675f, 0.000128f, 21.56675f },
	{ -54.5285f, -237.9999f, 54.5285f },
	{ 54.5285f, -237.9999f, -54.5285f },
	{ 21.56675f, 0.000128f, -21.56675f },
	{ 54.5285f, -237.9999f, 54.5285f },
	{ 0, 21.3001f, 0 },
	{ -54.5285f, -237.9999f, -54.5285f },
	{ -21.56675f, 0.000128f, -21.56675f },
	{ 21.56675f, 0.000128f, 21.56675f }
};

NJS_VECTOR normal_0012CE68[] = {
	{ -0.620533f, 0.479456f, 0.620533f },
	{ -0.693922f, 0.192209f, 0.693922f },
	{ 0.693922f, 0.192209f, -0.693922f },
	{ 0.620533f, 0.479456f, -0.620533f },
	{ 0.693922f, 0.192209f, 0.693922f },
	{ 0, 1, 0 },
	{ -0.693922f, 0.192209f, -0.693922f },
	{ -0.620533f, 0.479456f, -0.620533f },
	{ 0.620533f, 0.479456f, 0.620533f }
};

NJS_MODEL_SADX attach_0012CED4 = { vertex_0012CDFC, normal_0012CE68, LengthOfArray<Sint32>(vertex_0012CDFC), meshlist_0012CDE4, matlist_0012CD40, LengthOfArray<Uint16>(meshlist_0012CDE4), LengthOfArray<Uint16>(matlist_0012CD40),{ 0, -108.3499f, 0 }, 98.45513f, NULL };
//Lost World fog Light

NJS_MATERIAL matlistSTG07_00151660[] = {
{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
		{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 46, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
		{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
		{ { 0xB2B2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_075 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_ONE | NJD_SA_ONE | 0x40 },
		{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polySTG07_001516C4[] = {
	4, 3, 2, 1, 0,
	4, 7, 3, 5, 1,
	4, 6, 7, 4, 5,
	4, 2, 6, 0, 4
};

Sint16 polySTG07_001516EC[] = {
	0x8000u | 16, 25, 26, 28, 29, 31, 32, 10, 11, 13, 14, 16, 17, 19, 20, 22, 23,
	0x8000u | 16, 24, 25, 27, 28, 30, 31, 9, 10, 12, 13, 15, 16, 18, 19, 21, 22,
	6, 26, 23, 25, 22, 24, 21
};

Sint16 polySTG07_0015173E[] = {
	8, 48, 45, 46, 42, 43, 41, 44, 47
};

Sint16 polySTG07_00151750[] = {
	5, 37, 38, 33, 39, 40,
	4, 35, 36, 33, 37,
	0x8000u | 5, 35, 34, 33, 8, 40
};

Sint16 polySTG07_00151772[] = {
	0x8000u | 16, 11, 48, 14, 45, 17, 42, 20, 41, 23, 47, 26, 44, 29, 43, 32, 46,
	4, 48, 46, 11, 32
};

NJS_TEX uvSTG07_001517A0[] = {
	{ 247, 7 },
{ 0, 7 },
{ 247, 255 },
{ 0, 255 },
{ 247, 7 },
{ 0, 7 },
{ 247, 255 },
{ 0, 255 },
{ 247, 7 },
{ 0, 7 },
{ 247, 255 },
{ 0, 255 },
{ 247, 7 },
{ 0, 7 },
{ 247, 255 },
{ 0, 255 }
};

NJS_TEX uvSTG07_001517E0[] = {
	{ 1785, 132 },
{ 1785, 3 },
{ 1530, 131 },
{ 1530, 3 },
{ 1275, 132 },
{ 1276, 3 },
{ 1020, 132 },
{ 1020, 3 },
{ 765, 132 },
{ 764, 3 },
{ 510, 131 },
{ 510, 3 },
{ 255, 132 },
{ 255, 3 },
{ 0, 132 },
{ 0, 3 },
{ 1785, 255 },
{ 1785, 132 },
{ 1530, 255 },
{ 1530, 131 },
{ 1275, 255 },
{ 1275, 132 },
{ 1020, 255 },
{ 1020, 132 },
{ 765, 255 },
{ 765, 132 },
{ 510, 255 },
{ 510, 131 },
{ 255, 255 },
{ 255, 132 },
{ 0, 255 },
{ 0, 132 },
{ 1530, 3 },
{ 1785, 3 },
{ 1530, 131 },
{ 1785, 132 },
{ 1530, 255 },
{ 1785, 255 }
};

NJS_TEX uvSTG07_00151878[] = {
	{ 474, 0 },
{ 410, 155 },
{ 410, -155 },
{ 254, 219 },
{ 255, -219 },
{ 99, 155 },
{ 99, -155 },
{ 35, 0 }
};

NJS_TEX uvSTG07_00151898[] = {
	{ 44, 210 },
{ 12, 131 },
{ 123, 131 },
{ 44, 52 },
{ 123, 20 },
{ 202, 210 },
{ 123, 242 },
{ 123, 131 },
{ 44, 210 },
{ 202, 210 },
{ 234, 131 },
{ 123, 131 },
{ 202, 52 },
{ 123, 20 }
};

NJS_TEX uvSTG07_001518D0[] = {
	{ 0, -1530 },
{ 247, -1530 },
{ 0, -1274 },
{ 247, -1274 },
{ 0, -1019 },
{ 247, -1019 },
{ 0, -765 },
{ 247, -765 },
{ 0, -509 },
{ 247, -509 },
{ 0, -253 },
{ 247, -253 },
{ 0 },
{ 247, 0 },
{ 0, 255 },
{ 247, 255 },
{ 247, 255 },
{ 247, 0 },
{ 0, 255 },
{ 0 }
};

NJS_MESHSET_SADX meshlistSTG07_00151920[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, polySTG07_001516C4, NULL, NULL, NULL, uvSTG07_001517A0, NULL },
{ NJD_MESHSET_TRIMESH | 1, 3, polySTG07_001516EC, NULL, NULL, NULL, uvSTG07_001517E0, NULL },
{ NJD_MESHSET_TRIMESH | 2, 1, polySTG07_0015173E, NULL, NULL, NULL, uvSTG07_00151878, NULL },
{ NJD_MESHSET_TRIMESH | 3, 3, polySTG07_00151750, NULL, NULL, NULL, uvSTG07_00151898, NULL },
{ NJD_MESHSET_TRIMESH | 4, 2, polySTG07_00151772, NULL, NULL, NULL, uvSTG07_001518D0, NULL }
};

NJS_VECTOR vertexSTG07_00151998[] = {
	{ -0.8073f, 0.3f, -0.8073f },
{ -0.8073f, 0.3f, 0.8073f },
{ -0.8073f, 1.6f, -0.8073f },
{ -0.8073f, 1.6f, 0.8073f },
{ 0.8073f, 0.3f, -0.8073f },
{ 0.8073f, 0.3f, 0.8073f },
{ 0.8073f, 1.6f, -0.8073f },
{ 0.8073f, 1.6f, 0.8073f },
{ 3.024275f, 3.310485f, 3.044988f },
{ 6.041788f, 1.518754f, 0 },
{ 5.412877f, 2.61436f, 0 },
{ 4.276935f, 3.310499f, 0 },
{ 4.272185f, 1.518754f, -4.272185f },
{ 3.827488f, 2.61436f, -3.827488f },
{ 3.02427f, 3.310499f, -3.044991f },
{ 0, 1.518754f, -6.041788f },
{ 0, 2.61436f, -5.412877f },
{ 0, 3.310499f, -4.306256f },
{ -4.272185f, 1.518754f, -4.272185f },
{ -3.827488f, 2.61436f, -3.827488f },
{ -3.02427f, 3.310499f, -3.044991f },
{ -6.041788f, 1.518754f, 0 },
{ -5.412878f, 2.61436f, 0 },
{ -4.276935f, 3.310499f, 0 },
{ -4.272185f, 1.518754f, 4.272185f },
{ -3.827488f, 2.61436f, 3.827488f },
{ -3.02427f, 3.310499f, 3.044991f },
{ 0, 1.518754f, 6.041788f },
{ 0, 2.61436f, 5.412877f },
{ 0, 3.310499f, 4.306256f },
{ 4.272185f, 1.518754f, 4.272185f },
{ 3.827488f, 2.61436f, 3.827488f },
{ 3.02427f, 3.310499f, 3.044991f },
{ 0, 4.019815f, 0 },
{ 4.276966f, 3.310485f, 0 },
{ 3.024275f, 3.310485f, -3.044988f },
{ 0, 3.310485f, -4.306261f },
{ -3.024275f, 3.310485f, -3.044988f },
{ -4.276965f, 3.310485f, 0 },
{ -3.024275f, 3.310485f, 3.044988f },
{ 0, 3.310485f, 4.306261f },
{ -2.366793f, 2.6105f, -2.38301f },
{ 0, 2.6105f, -3.370076f },
{ 0, 2.6105f, 3.370076f },
{ -2.366793f, 2.6105f, 2.38301f },
{ 2.366793f, 2.6105f, -2.38301f },
{ 2.366793f, 2.6105f, 2.38301f },
{ -3.34713f, 2.6105f, 0 },
{ 3.34713f, 2.6105f, 0 }
};

NJS_VECTOR normalSTG07_00151BE4[] = {
	{ -0.7071069f, 0, -0.7071069f },
{ -0.7071069f, 0, 0.7071069f },
{ -0.7071069f, 0, -0.7071069f },
{ -0.7071069f, 0, 0.7071069f },
{ 0.7071069f, 0, -0.7071069f },
{ 0.7071069f, 0, 0.7071069f },
{ 0.7071069f, 0, -0.7071069f },
{ 0.7071069f, 0, 0.7071069f },
{ 0.115467f, 0.986614f, 0.11515f },
{ 0.867272f, 0.497835f, -0.00001f },
{ 0.744913f, 0.667161f, -0.000277f },
{ 0.092182f, 0.995742f, -0.000459f },
{ 0.613254f, 0.497835f, -0.613253f },
{ 0.528186f, 0.66539f, -0.527518f },
{ 0.06744599f, 0.995267f, -0.06996f },
{ -0.00001f, 0.497835f, -0.867272f },
{ 0.000283f, 0.664813f, -0.74701f },
{ 0.000472f, 0.995015f, -0.099727f },
{ -0.613253f, 0.497835f, -0.613254f },
{ -0.527416f, 0.666608f, -0.526751f },
{ -0.065771f, 0.995497f, -0.068266f },
{ -0.867272f, 0.497835f, 0.000001f },
{ -0.744913f, 0.667161f, 0.000277f },
{ -0.092182f, 0.995742f, 0.000459f },
{ -0.613254f, 0.497835f, 0.613253f },
{ -0.528186f, 0.66539f, 0.527518f },
{ -0.06744599f, 0.995267f, 0.06996f },
{ 0.000001f, 0.497835f, 0.867272f },
{ -0.000283f, 0.664813f, 0.74701f },
{ -0.000472f, 0.995015f, 0.099727f },
{ 0.613253f, 0.497835f, 0.613254f },
{ 0.527416f, 0.666608f, 0.526751f },
{ 0.065771f, 0.995497f, 0.068266f },
{ 0, 1, 0 },
{ 0.163614f, 0.986524f, 0 },
{ 0.115467f, 0.986614f, -0.11515f },
{ 0, 0.986704f, -0.16253f },
{ -0.115467f, 0.986614f, -0.11515f },
{ -0.163614f, 0.986524f, 0 },
{ -0.115467f, 0.986614f, 0.11515f },
{ 0, 0.986704f, 0.16253f },
{ 0.272312f, 0.923512f, 0.270133f },
{ 0, 0.923722f, 0.383064f },
{ 0, 0.923722f, -0.383064f },
{ 0.272311f, 0.923512f, -0.270133f },
{ -0.272311f, 0.923512f, 0.270133f },
{ -0.272312f, 0.923512f, -0.270133f },
{ 0.384068f, 0.923305f, 0 },
{ -0.384068f, 0.923305f, 0 }
};

NJS_MODEL_SADX attachSTG07_00151E30 = { vertexSTG07_00151998, normalSTG07_00151BE4, LengthOfArray<Sint32>(vertexSTG07_00151998), meshlistSTG07_00151920, matlistSTG07_00151660, LengthOfArray<Uint16>(meshlistSTG07_00151920), LengthOfArray<Uint16>(matlistSTG07_00151660),{ 0, 2.159907f, 0 }, 8.544377f, NULL };
//aoki switch (Lost world)

NJS_MATERIAL matlist_019CF0D0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 124, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 123, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 117, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 69, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 119, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 114, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_019CF148[] = {
	3, 7, 4, 0,
	3, 9, 1, 2
};

Sint16 poly_019CF158[] = {
	4, 7, 2, 4, 1
};

Sint16 poly_019CF164[] = {
	3, 4, 6, 0,
	3, 9, 8, 1
};

Sint16 poly_019CF174[] = {
	3, 0, 6, 3,
	3, 5, 8, 9
};

Sint16 poly_019CF184[] = {
	4, 5, 3, 8, 6
};

Sint16 poly_019CF190[] = {
	4, 4, 1, 6, 8
};

NJS_TEX uv_019CF19C[] = {
	{ 255, 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_TEX uv_019CF1B4[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_TEX uv_019CF1C4[] = {
	{ 255, 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_TEX uv_019CF1DC[] = {
	{ 255, 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_TEX uv_019CF1F4[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_TEX uv_019CF204[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_019CF218[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_019CF148, NULL, NULL, NULL, uv_019CF19C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_019CF158, NULL, NULL, NULL, uv_019CF1B4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_019CF164, NULL, NULL, NULL, uv_019CF1C4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_019CF174, NULL, NULL, NULL, uv_019CF1DC, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_019CF184, NULL, NULL, NULL, uv_019CF1F4, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_019CF190, NULL, NULL, NULL, uv_019CF204, NULL }
};

NJS_VECTOR vertex_019CF2C0[] = {
	{ 14, 0, 0 },
	{ -5.466669f, 0, -5.333333f },
	{ -5.466669f, 0, -10 },
	{ 5.466669f, 0, 10 },
	{ 5.466669f, 0, -5.333333f },
	{ -5.466669f, 0, 10 },
	{ 5.466669f, 0, 5.333333f },
	{ 5.466669f, 0, -10 },
	{ -5.466669f, 0, 5.333333f },
	{ -14, 0, 0 }
};

NJS_VECTOR normal_019CF338[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_019CF3B0 = { vertex_019CF2C0, normal_019CF338, LengthOfArray<Sint32>(vertex_019CF2C0), meshlist_019CF218, matlist_019CF0D0, LengthOfArray<Uint16>(meshlist_019CF218), LengthOfArray<Uint16>(matlist_019CF0D0),{ 0 }, 17.20465f, NULL }; //Rank Crystal

NJS_MATERIAL matlist_0198E218[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0198E22C[] = {
	0, 1, 2,
	0, 2, 3,
	3, 2, 4,
	3, 4, 5,
	5, 4, 6,
	5, 6, 7,
	7, 6, 8,
	7, 8, 9,
	9, 8, 10,
	9, 10, 11,
	11, 10, 12,
	11, 12, 13,
	13, 12, 14,
	13, 14, 15,
	15, 14, 1,
	15, 1, 0
};

NJS_TEX uv_0198E258[] = {
	{ -2548, 0 },
	{ -2550, 253 },
	{ -2618, 255 },
	{ -2548, 0 },
	{ -2618, 255 },
	{ -2679, 0 },
	{ -2679, 0 },
	{ -2618, 255 },
	{ -2652, 255 },
	{ -2679, 0 },
	{ -2652, 255 },
	{ -2830, 0 },
	{ -2830, 0 },
	{ -2652, 255 },
	{ -5065, 255 },
	{ -2830, 0 },
	{ -5065, 255 },
	{ -4970, 0 },
	{ -4970, 0 },
	{ -5065, 255 },
	{ 0, 255 },
	{ -4970, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ -68, 253 },
	{ 0 },
	{ -68, 253 },
	{ -122, 0 },
	{ -122, 0 },
	{ -68, 253 },
	{ -103, 255 },
	{ -122, 0 },
	{ -103, 255 },
	{ -248, 0 },
	{ -248, 0 },
	{ -103, 255 },
	{ -2515, 255 },
	{ -248, 0 },
	{ -2515, 255 },
	{ -2420, 0 },
	{ -2420, 0 },
	{ -2515, 255 },
	{ -2550, 253 },
	{ -2420, 0 },
	{ -2550, 253 },
	{ -2548, 0 }
};

NJS_MESHSET_SADX meshlist_0198E2A0[] = {
	{ NJD_MESHSET_3 | 0, 16, poly_0198E22C, NULL, NULL, NULL, uv_0198E258, NULL }
};

NJS_VECTOR vertex_0198E2C0[] = {
	{ -20.30439f, 0.5f, 1.067062f },
	{ -17.77453f, 0.5f, 0.5128174f },
	{ -17.74709f, 0.5f, -0.5175934f },
	{ -20.27586f, 0.5f, -1.221832f },
	{ -17.3639f, 0.5f, -0.8795929f },
	{ -18.3601f, 0.5f, -2.94265f },
	{ 17.94971f, 0.5f, -1.329948f },
	{ 18.58712f, 0.5f, -2.855568f },
	{ 18.17098f, 0.5f, -0.8953552f },
	{ 20.24552f, 0.5f, -1.355667f },
	{ 18.14353f, 0.5f, 0.1350632f },
	{ 20.16009f, 0.5f, 0.7511444f },
	{ 17.71643f, 0.5f, 0.6877365f },
	{ 18.69073f, 0.5f, 2.363564f },
	{ -17.60597f, 0.5f, 1.041573f },
	{ -18.81476f, 0.5f, 2.723152f }
};

NJS_VECTOR normal_0198E380[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0198E440 = { vertex_0198E2C0, normal_0198E380, LengthOfArray<Sint32>(vertex_0198E2C0), meshlist_0198E2A0, matlist_0198E218, LengthOfArray<Uint16>(meshlist_0198E2A0), LengthOfArray<Uint16>(matlist_0198E218),{ 95.29581f, 0.5f, -6.758543f }, 21.1915f, NULL };

NJS_MATERIAL matlist_0198E4A0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0198E4B4[] = {
	0, 1, 2,
	0, 2, 3,
	3, 2, 4,
	3, 4, 5,
	5, 4, 6,
	5, 6, 7,
	7, 6, 8,
	7, 8, 9,
	9, 8, 10,
	9, 10, 11,
	11, 10, 12,
	11, 12, 13,
	13, 12, 14,
	13, 14, 15,
	15, 14, 1,
	15, 1, 0
};

NJS_TEX uv_0198E4E0[] = {
	{ -2548, 0 },
	{ -2550, 253 },
	{ -2618, 255 },
	{ -2548, 0 },
	{ -2618, 255 },
	{ -2679, 0 },
	{ -2679, 0 },
	{ -2618, 255 },
	{ -2652, 255 },
	{ -2679, 0 },
	{ -2652, 255 },
	{ -2830, 0 },
	{ -2830, 0 },
	{ -2652, 255 },
	{ -5065, 255 },
	{ -2830, 0 },
	{ -5065, 255 },
	{ -4970, 0 },
	{ -4970, 0 },
	{ -5065, 255 },
	{ 0, 255 },
	{ -4970, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ -68, 253 },
	{ 0 },
	{ -68, 253 },
	{ -122, 0 },
	{ -122, 0 },
	{ -68, 253 },
	{ -103, 255 },
	{ -122, 0 },
	{ -103, 255 },
	{ -248, 0 },
	{ -248, 0 },
	{ -103, 255 },
	{ -2515, 255 },
	{ -248, 0 },
	{ -2515, 255 },
	{ -2420, 0 },
	{ -2420, 0 },
	{ -2515, 255 },
	{ -2550, 253 },
	{ -2420, 0 },
	{ -2550, 253 },
	{ -2548, 0 }
};

NJS_MESHSET_SADX meshlist_0198E528[] = {
	{ NJD_MESHSET_3 | 0, 16, poly_0198E4B4, NULL, NULL, NULL, uv_0198E4E0, NULL }
};

NJS_VECTOR vertex_0198E548[] = {
	{ -20.30439f, 0.5f, 1.067062f },
	{ -17.77453f, 0.5f, 0.5128174f },
	{ -17.74709f, 0.5f, -0.5175934f },
	{ -20.27586f, 0.5f, -1.221832f },
	{ -17.3639f, 0.5f, -0.8795929f },
	{ -18.3601f, 0.5f, -2.94265f },
	{ 17.94971f, 0.5f, -1.329948f },
	{ 18.58712f, 0.5f, -2.855568f },
	{ 18.17098f, 0.5f, -0.8953552f },
	{ 20.24552f, 0.5f, -1.355667f },
	{ 18.14353f, 0.5f, 0.1350632f },
	{ 20.16009f, 0.5f, 0.7511444f },
	{ 17.71643f, 0.5f, 0.6877365f },
	{ 18.69073f, 0.5f, 2.363564f },
	{ -17.60597f, 0.5f, 1.041573f },
	{ -18.81476f, 0.5f, 2.723152f }
};

NJS_VECTOR normal_0198E608[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0198E6C8 = { vertex_0198E548, normal_0198E608, LengthOfArray<Sint32>(vertex_0198E548), meshlist_0198E528, matlist_0198E4A0, LengthOfArray<Uint16>(meshlist_0198E528), LengthOfArray<Uint16>(matlist_0198E4A0),{ 95.29581f, 0.5f, -6.758543f }, 21.1915f, NULL };

NJS_OBJECT object_0198E6F4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0198E6C8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
//dtarget rings (fixed)

NJS_MATERIAL matlist_00014484[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_ONE | NJD_SA_SRC }
};

Sint16 poly_00014498[] = {
	0x8000u | 10, 9, 4, 8, 3, 7, 2, 6, 1, 5, 0,
	0x8000u | 10, 19, 14, 18, 13, 17, 12, 16, 11, 15, 10,
	0x8000u | 10, 29, 24, 28, 23, 27, 22, 26, 21, 25, 20,
	0x8000u | 10, 39, 34, 38, 33, 37, 32, 36, 31, 35, 30
};

NJS_TEX uv_000144F0[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 145 },
	{ 255, 145 },
	{ 0, 83 },
	{ 255, 83 },
	{ 0, 42 },
	{ 255, 42 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 145 },
	{ 255, 145 },
	{ 0, 83 },
	{ 255, 83 },
	{ 0, 42 },
	{ 255, 42 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 145 },
	{ 255, 145 },
	{ 0, 83 },
	{ 255, 83 },
	{ 0, 42 },
	{ 255, 42 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 145 },
	{ 255, 145 },
	{ 0, 83 },
	{ 255, 83 },
	{ 0, 42 },
	{ 255, 42 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00014590[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00014498, NULL, NULL, NULL, uv_000144F0, NULL }
};

NJS_VECTOR vertex_000145A8[] = {
	{ 1, 0, -1 },
	{ 2, 2.5f, -3 },
	{ 3, 3, -6 },
	{ 4, 0.5f, -10 },
	{ 5, -7.5f, -13 },
	{ -1, 0, -1 },
	{ -2, 2.5f, -3 },
	{ -3, 3, -5.999992f },
	{ -4, 0.5f, -10 },
	{ -5, -7.5f, -13 },
	{ -1, 0, -1 },
	{ -3, 2.5f, -2 },
	{ -6, 3, -3 },
	{ -10, 0.5f, -4 },
	{ -13, -7.5f, -5 },
	{ -1, 0, 1 },
	{ -3, 2.5f, 2 },
	{ -6, 3, 3 },
	{ -10, 0.5f, 4 },
	{ -13, -7.5f, 5 },
	{ 1, 0, 1 },
	{ 3, 2.5f, 2 },
	{ 6, 3, 3 },
	{ 10, 0.5f, 4 },
	{ 13, -7.5f, 5 },
	{ 1, 0, -1 },
	{ 3, 2.5f, -2 },
	{ 6, 3, -3 },
	{ 10, 0.5f, -4 },
	{ 13, -7.5f, -5 },
	{ -1, 0, 1 },
	{ -2, 2.5f, 3 },
	{ -3, 3, 6 },
	{ -4, 0.5f, 10 },
	{ -5, -7.5f, 13 },
	{ 1, 0, 1 },
	{ 2, 2.5f, 3 },
	{ 3, 3, 6 },
	{ 4, 0.5f, 10 },
	{ 5, -7.5f, 13 }
};

NJS_VECTOR normal_00014788[] = {
	{ 0, 0.6246949f, 0.7808689f },
	{ 0, 0.898026f, 0.439943f },
	{ 0, 0.965782f, -0.259355f },
	{ 0, 0.6046579f, -0.7964849f },
	{ 0, 0.351123f, -0.9363289f },
	{ 0, 0.6246949f, 0.7808689f },
	{ 0, 0.898026f, 0.439943f },
	{ 0, 0.965782f, -0.259355f },
	{ 0, 0.6046579f, -0.7964849f },
	{ 0, 0.351123f, -0.9363289f },
	{ 0.7808689f, 0.6246949f, 0 },
	{ 0.439943f, 0.898026f, 0 },
	{ -0.259356f, 0.965782f, 0 },
	{ -0.7964849f, 0.6046579f, 0 },
	{ -0.9363289f, 0.351123f, 0 },
	{ 0.7808689f, 0.6246949f, 0 },
	{ 0.439943f, 0.898026f, 0 },
	{ -0.259356f, 0.965782f, 0 },
	{ -0.7964849f, 0.6046579f, 0 },
	{ -0.9363289f, 0.351123f, 0 },
	{ -0.7808689f, 0.6246949f, 0 },
	{ -0.439943f, 0.898026f, 0 },
	{ 0.259356f, 0.965782f, 0 },
	{ 0.7964849f, 0.6046579f, 0 },
	{ 0.9363289f, 0.351123f, 0 },
	{ -0.7808689f, 0.6246949f, 0 },
	{ -0.439943f, 0.898026f, 0 },
	{ 0.259356f, 0.965782f, 0 },
	{ 0.7964849f, 0.6046579f, 0 },
	{ 0.9363289f, 0.351123f, 0 },
	{ 0, 0.6246949f, -0.7808689f },
	{ 0, 0.898026f, -0.439943f },
	{ 0, 0.965782f, 0.259356f },
	{ 0, 0.6046579f, 0.7964849f },
	{ 0, 0.351123f, 0.9363289f },
	{ 0, 0.6246949f, -0.7808689f },
	{ 0, 0.898026f, -0.439943f },
	{ 0, 0.965782f, 0.259356f },
	{ 0, 0.6046579f, 0.7964849f },
	{ 0, 0.351123f, 0.9363289f }
};

NJS_MODEL_SADX attach_00014968 = { vertex_000145A8, normal_00014788, LengthOfArray<Sint32>(vertex_000145A8), meshlist_00014590, matlist_00014484, LengthOfArray<Uint16>(meshlist_00014590), LengthOfArray<Uint16>(matlist_00014484),{ 0, -2.25f, 0 }, 18.38478f, NULL };

NJS_OBJECT Object_Fountain = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00014968, 0, 9, 0, 0, 0, 0, 1, 1, 1, NULL, NULL }; //Unused Chao Garden Fountain

NJS_MATERIAL matlist_02FAC3C8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02FAC3F0[] = {
	4, 3, 2, 1, 0,
	4, 7, 3, 5, 1,
	6, 5, 4, 7, 6, 3, 2,
	4, 2, 6, 0, 4
};

NJS_TEX uv_02FAC420[] = {
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 253, 0 },
	{ 0, 1 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 1 },
	{ 253, 0 },
	{ 0, 255 },
	{ 255, 255 }
};

NJS_MESHSET_SADX meshlist_02FAC468[] = {
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_02FAC3F0, NULL, NULL, NULL, uv_02FAC420, NULL }
};

NJS_VECTOR vertex_02FAC488[] = {
	{ -4.999988f, -0.040001f, -4.838194f },
	{ -4.999988f, -0.040001f, 4.838194f },
	{ -3.049988f, 9.960005f, -4.838194f },
	{ -3.049988f, 9.960005f, 4.838194f },
	{ 5.000012f, -0.040001f, -4.838194f },
	{ 5.000012f, -0.040001f, 4.838194f },
	{ 3.050013f, 9.960005f, -4.838194f },
	{ 3.050013f, 9.960005f, 4.838194f }
};

NJS_VECTOR normal_02FAC4E8[] = {
	{ -0.737787f, 0.143868f, -0.659525f },
	{ -0.737787f, 0.143868f, 0.659525f },
	{ -0.514239f, 0.624201f, -0.588159f },
	{ -0.514239f, 0.624201f, 0.588159f },
	{ 0.737787f, 0.143868f, -0.659525f },
	{ 0.737787f, 0.143868f, 0.659525f },
	{ 0.514239f, 0.624201f, -0.588159f },
	{ 0.514239f, 0.624201f, 0.588159f }
};

NJS_MODEL_SADX attach_02FAC548 = { vertex_02FAC488, normal_02FAC4E8, LengthOfArray<Sint32>(vertex_02FAC488), meshlist_02FAC468, matlist_02FAC3C8, LengthOfArray<Uint16>(meshlist_02FAC468), LengthOfArray<Uint16>(matlist_02FAC3C8),{ 0.000012f, 4.960002f, 0 }, 6.957597f, NULL };

NJS_OBJECT Object_SmallScreen = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02FAC548, 0, 0.036183f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL }; //Unused Chao Race SmallScreen

NJS_MATERIAL matlist_001542C0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 130, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC }
};

Sint16 poly_001542D4[] = {
	4, 1, 4, 3, 2,
	3, 4, 0, 2
};

NJS_TEX uv_001542E8[] = {
	{ 3, 51 },
	{ 3, 3 },
	{ 51, 51 },
	{ 51, 3 },
	{ 51, 3 },
	{ 51, 51 },
	{ 3, 51 }
};

NJS_MESHSET_SADX meshlist_00154304[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_001542D4, NULL, NULL, NULL, uv_001542E8, NULL }
};

NJS_VECTOR vertex_0015431C[] = {
	{ 4.615001f, 4.040002f, -2.669f },
	{ 2.237001f, 0.007001f, -1.316002f },
	{ 1.259f, 2.334002f, -0.963001f },
	{ -0.08699799f, 0.007001f, 0.044998f },
	{ 4.176001f, 2.023501f, -2.442501f }
};

NJS_VECTOR normal_00154358[] = {
	{ 0.452482f, 0.001659f, 0.891772f },
	{ 0.504906f, 0.041825f, 0.862161f },
	{ 0.494673f, 0.033841f, 0.8684199f },
	{ 0.504906f, 0.041825f, 0.862161f },
	{ 0.469822f, 0.014746f, 0.882638f }
};

NJS_MODEL_SADX attach_00154394 = { vertex_0015431C, normal_00154358, LengthOfArray<Sint32>(vertex_0015431C), meshlist_00154304, matlist_001542C0, LengthOfArray<Uint16>(meshlist_00154304), LengthOfArray<Uint16>(matlist_001542C0),{ 2.264001f, 2.023501f, -1.312001f }, 2.714524f, NULL };

NJS_OBJECT object_001543BC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00154394, 0.4f, 0.7f, -1.2f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001543F0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 132, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 130, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00154418[] = {
	3, 4, 1, 0,
	3, 3, 5, 1,
	3, 0, 5, 2,
	3, 2, 4, 0,
	3, 0, 1, 5,
	3, 2, 3, 4,
	3, 1, 4, 3
};

Sint16 poly_00154450[] = {
	4, 11, 10, 6, 8,
	3, 11, 6, 7,
	4, 8, 9, 6, 7,
	4, 9, 10, 7, 11
};

NJS_TEX uv_00154478[] = {
	{ 3, 3 },
	{ 67, 3 },
	{ 35, 59 },
	{ 3, 3 },
	{ 67, 3 },
	{ 35, 59 },
	{ 3, 3 },
	{ 67, 3 },
	{ 35, 59 },
	{ 3, 3 },
	{ 67, 3 },
	{ 35, 59 },
	{ 3, 3 },
	{ 67, 3 },
	{ 35, 59 },
	{ 3, 3 },
	{ 67, 3 },
	{ 35, 59 },
	{ 3, 3 },
	{ 67, 3 },
	{ 35, 59 }
};

NJS_TEX uv_001544CC[] = {
	{ 3, 251 },
	{ 3, 203 },
	{ 51, 251 },
	{ 51, 203 },
	{ 51, 203 },
	{ 51, 251 },
	{ 3, 251 },
	{ 3, 251 },
	{ 3, 203 },
	{ 51, 251 },
	{ 51, 203 },
	{ 3, 251 },
	{ 3, 203 },
	{ 51, 251 },
	{ 51, 203 }
};

NJS_MESHSET_SADX meshlist_00154508[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_00154418, NULL, NULL, NULL, uv_00154478, NULL },
{ NJD_MESHSET_TRIMESH | 1, 4, poly_00154450, NULL, NULL, NULL, uv_001544CC, NULL }
};

NJS_VECTOR vertex_00154538[] = {
	{ 1.902799f, -2.156959f, -0.508f },
	{ 1.902799f, -2.156959f, 0.492f },
	{ 1.702799f, -1.242745f, -0.208f },
	{ 1.702799f, -1.242745f, 0.192f },
	{ 2.109906f, -1.549852f, -0.007999999f },
	{ 0.995692f, -1.249852f, -0.007999999f },
	{ 1.042951f, -1.349746f, -0.776f },
	{ 2.28289f, -1.349521f, 0 },
	{ -0.048775f, 0.046641f, -0.466f },
	{ -0.08289f, 0.356958f, -0.0009999999f },
	{ -0.047378f, 0.046862f, 0.465f },
	{ 1.042142f, -1.349158f, 0.776f }
};

NJS_VECTOR normal_001545C8[] = {
	{ 0.18933f, -0.642756f, -0.742306f },
	{ 0.18933f, -0.642756f, 0.742306f },
	{ 0.269034f, 0.571305f, -0.775391f },
	{ 0.269033f, 0.571305f, 0.775391f },
	{ 0.9406739f, 0.339312f, 0 },
	{ -0.987128f, -0.159929f, 0 },
	{ -0.032748f, -0.505184f, -0.86239f },
	{ 0.9831589f, -0.178995f, -0.036876f },
	{ -0.141302f, 0.108573f, -0.983995f },
	{ 0.636416f, 0.770945f, -0.024878f },
	{ -0.236928f, 0.247522f, 0.939467f },
	{ -0.125548f, -0.425843f, 0.896044f }
};

NJS_MODEL_SADX attach_00154658 = { vertex_00154538, normal_001545C8, LengthOfArray<Sint32>(vertex_00154538), meshlist_00154508, matlist_001543F0, LengthOfArray<Uint16>(meshlist_00154508), LengthOfArray<Uint16>(matlist_001543F0),{ 1.1f, -0.9f, 0 }, 1.843693f, NULL };

NJS_OBJECT object_00154680 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00154658, 1.297201f, 0.349852f, 0.508f, 0xFFFFD556, 0xFFFFE38F, 0, 1, 1, 1, NULL, &object_001543BC };

NJS_MATERIAL matlist_001546B4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 130, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001546C8[] = {
	4, 4, 8, 2, 6,
	4, 2, 6, 5, 7,
	3, 1, 0, 3,
	4, 5, 7, 4, 8,
	4, 0, 7, 3, 6,
	4, 3, 6, 1, 8,
	4, 1, 8, 0, 7
};

NJS_TEX uv_0015470C[] = {
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 51, 75 },
	{ 51, 115 },
	{ 3, 115 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 }
};

NJS_MESHSET_SADX meshlist_00154778[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_001546C8, NULL, NULL, NULL, uv_0015470C, NULL }
};

NJS_VECTOR vertex_00154790[] = {
	{ 1.049373f, -1.718921f, -0.9119059f },
	{ -0.348952f, -1.820226f, -0.910056f },
	{ -0.08111899f, 0.178705f, -0.302122f },
	{ 0.6021f, -2.367542f, 0.7848639f },
	{ -0.260757f, -0.051628f, -0.612418f },
	{ 0.338685f, 0.108692f, -0.612446f },
	{ 0.26049f, -1.394418f, 0.241371f },
	{ 0.944029f, -1.305114f, -0.6121759f },
	{ -0.304855f, -1.385926f, -0.611237f }
};

NJS_VECTOR normal_001547FC[] = {
	{ 0.700452f, 0.020189f, -0.713414f },
	{ -0.7365f, -0.233276f, -0.634941f },
	{ -0.172202f, 0.258624f, 0.950505f },
	{ 0.280746f, -0.732658f, 0.619995f },
	{ -0.9211839f, 0.004487f, -0.389102f },
	{ 0.867786f, 0.468855f, -0.16469f },
	{ -0.155059f, 0.248486f, 0.956144f },
	{ 0.744009f, 0.621421f, -0.245531f },
	{ -0.924244f, 0.214683f, -0.315729f }
};

NJS_MODEL_SADX attach_00154868 = { vertex_00154790, normal_001547FC, LengthOfArray<Sint32>(vertex_00154790), meshlist_00154778, matlist_001546B4, LengthOfArray<Uint16>(meshlist_00154778), LengthOfArray<Uint16>(matlist_001546B4),{ 0.350211f, -1.094419f, -0.063521f }, 1.649018f, NULL };

NJS_OBJECT object_00154890 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00154868, 0.7f, -1.8f, 0.5f, 0x1C71, 0, 0, 1, 1, 1, NULL, &object_00154680 };

NJS_MATERIAL matlist_001548C4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 132, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 130, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001548EC[] = {
	3, 0, 1, 4,
	3, 1, 5, 3,
	3, 2, 5, 0,
	3, 0, 4, 2,
	3, 5, 1, 0,
	3, 4, 3, 2,
	3, 3, 4, 1
};

Sint16 poly_00154924[] = {
	4, 6, 8, 11, 10,
	3, 7, 6, 11,
	4, 6, 7, 8, 9,
	4, 7, 11, 9, 10
};

NJS_TEX uv_0015494C[] = {
	{ 67, 3 },
	{ 3, 3 },
	{ 35, 83 },
	{ 67, 3 },
	{ 3, 3 },
	{ 35, 83 },
	{ 67, 3 },
	{ 3, 3 },
	{ 35, 83 },
	{ 67, 3 },
	{ 3, 3 },
	{ 35, 83 },
	{ 67, 3 },
	{ 3, 3 },
	{ 35, 83 },
	{ 67, 3 },
	{ 3, 3 },
	{ 35, 83 },
	{ 67, 3 },
	{ 3, 3 },
	{ 35, 83 }
};

NJS_TEX uv_001549A0[] = {
	{ 3, 251 },
	{ 3, 203 },
	{ 51, 251 },
	{ 51, 203 },
	{ 51, 203 },
	{ 51, 251 },
	{ 3, 251 },
	{ 3, 251 },
	{ 3, 203 },
	{ 51, 251 },
	{ 51, 203 },
	{ 3, 251 },
	{ 3, 203 },
	{ 51, 251 },
	{ 51, 203 }
};

NJS_MESHSET_SADX meshlist_001549DC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_001548EC, NULL, NULL, NULL, uv_0015494C, NULL },
{ NJD_MESHSET_TRIMESH | 1, 4, poly_00154924, NULL, NULL, NULL, uv_001549A0, NULL }
};

NJS_VECTOR vertex_00154A0C[] = {
	{ -1.902799f, -2.156959f, -0.508f },
	{ -1.902799f, -2.156959f, 0.492f },
	{ -1.702799f, -1.242745f, -0.208f },
	{ -1.702799f, -1.242745f, 0.192f },
	{ -2.109906f, -1.549852f, -0.007999999f },
	{ -0.995692f, -1.249852f, -0.007999999f },
	{ -1.042951f, -1.349746f, -0.776f },
	{ -2.28289f, -1.349521f, 0 },
	{ 0.048775f, 0.046641f, -0.466f },
	{ 0.08289f, 0.356958f, -0.0009999999f },
	{ 0.047378f, 0.046862f, 0.465f },
	{ -1.042142f, -1.349158f, 0.776f }
};

NJS_VECTOR normal_00154A9C[] = {
	{ -0.18933f, -0.642756f, -0.742306f },
	{ -0.18933f, -0.642756f, 0.742306f },
	{ -0.269034f, 0.571305f, -0.775391f },
	{ -0.269034f, 0.571305f, 0.775391f },
	{ -0.9406739f, 0.339312f, 0 },
	{ 0.987128f, -0.159929f, 0 },
	{ 0.032748f, -0.505184f, -0.86239f },
	{ -0.9831589f, -0.178994f, -0.036876f },
	{ 0.141302f, 0.108573f, -0.983995f },
	{ -0.636416f, 0.770945f, -0.024878f },
	{ 0.236928f, 0.247522f, 0.939467f },
	{ 0.125548f, -0.425843f, 0.896044f }
};

NJS_MODEL_SADX attach_00154B2C = { vertex_00154A0C, normal_00154A9C, LengthOfArray<Sint32>(vertex_00154A0C), meshlist_001549DC, matlist_001548C4, LengthOfArray<Uint16>(meshlist_001549DC), LengthOfArray<Uint16>(matlist_001548C4),{ -1.1f, -0.9f, 0 }, 1.843693f, NULL };

NJS_OBJECT object_00154B54 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00154B2C, -1.297201f, 0.349852f, 0.508f, 0xFFFFD556, 0x1C71, 0, 1, 1, 1, NULL, &object_00154890 };

NJS_MATERIAL matlist_00154B88[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 130, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00154B9C[] = {
	4, 2, 6, 4, 8,
	4, 5, 7, 2, 6,
	3, 3, 0, 1,
	4, 4, 8, 5, 7,
	4, 3, 6, 0, 7,
	4, 1, 8, 3, 6,
	4, 0, 7, 1, 8
};

NJS_TEX uv_00154BE0[] = {
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 51, 75 },
	{ 51, 115 },
	{ 3, 115 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 }
};

NJS_MESHSET_SADX meshlist_00154C4C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_00154B9C, NULL, NULL, NULL, uv_00154BE0, NULL }
};

NJS_VECTOR vertex_00154C64[] = {
	{ -1.049373f, -1.718921f, -0.9119059f },
	{ 0.348952f, -1.820226f, -0.910056f },
	{ 0.08111899f, 0.178705f, -0.302122f },
	{ -0.6021f, -2.367542f, 0.7848639f },
	{ 0.260758f, -0.051628f, -0.612418f },
	{ -0.338685f, 0.108692f, -0.612446f },
	{ -0.26049f, -1.394418f, 0.241371f },
	{ -0.944029f, -1.305114f, -0.6121759f },
	{ 0.304855f, -1.385926f, -0.611237f }
};

NJS_VECTOR normal_00154CD0[] = {
	{ -0.700452f, 0.020188f, -0.713414f },
	{ 0.7365f, -0.233276f, -0.634941f },
	{ 0.172202f, 0.258624f, 0.950505f },
	{ -0.280746f, -0.732658f, 0.619995f },
	{ 0.9211839f, 0.004487f, -0.389102f },
	{ -0.867786f, 0.468855f, -0.16469f },
	{ 0.155059f, 0.248486f, 0.956144f },
	{ -0.744009f, 0.621421f, -0.245531f },
	{ 0.924244f, 0.214683f, -0.315729f }
};

NJS_MODEL_SADX attach_00154D3C = { vertex_00154C64, normal_00154CD0, LengthOfArray<Sint32>(vertex_00154C64), meshlist_00154C4C, matlist_00154B88, LengthOfArray<Uint16>(meshlist_00154C4C), LengthOfArray<Uint16>(matlist_00154B88),{ -0.350211f, -1.094419f, -0.063521f }, 1.631158f, NULL };

NJS_OBJECT object_00154D64 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00154D3C, -0.7f, -1.8f, 0.5f, 0x25B0, 0, 0, 1, 1, 1, NULL, &object_00154B54 };

NJS_MATERIAL matlist_00154D98[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 130, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC }
};

Sint16 poly_00154DAC[] = {
	4, 3, 2, 1, 4,
	3, 2, 0, 4
};

NJS_TEX uv_00154DC0[] = {
	{ 51, 51 },
	{ 51, 3 },
	{ 3, 51 },
	{ 3, 3 },
	{ 3, 3 },
	{ 3, 51 },
	{ 51, 51 }
};

NJS_MESHSET_SADX meshlist_00154DDC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00154DAC, NULL, NULL, NULL, uv_00154DC0, NULL }
};

NJS_VECTOR vertex_00154DF4[] = {
	{ -4.615f, 4.040002f, -2.669001f },
	{ -2.237001f, 0.007001f, -1.316002f },
	{ -1.259f, 2.334002f, -0.963001f },
	{ 0.08699799f, 0.007001f, 0.044998f },
	{ -4.176f, 2.023501f, -2.442501f }
};

NJS_VECTOR normal_00154E30[] = {
	{ -0.452482f, 0.001659f, 0.891772f },
	{ -0.504906f, 0.041825f, 0.862161f },
	{ -0.494673f, 0.033841f, 0.8684199f },
	{ -0.504906f, 0.041825f, 0.862161f },
	{ -0.469822f, 0.014746f, 0.882638f }
};

NJS_MODEL_SADX attach_00154E6C = { vertex_00154DF4, normal_00154E30, LengthOfArray<Sint32>(vertex_00154DF4), meshlist_00154DDC, matlist_00154D98, LengthOfArray<Uint16>(meshlist_00154DDC), LengthOfArray<Uint16>(matlist_00154D98),{ -2.264001f, 2.023501f, -1.312001f }, 2.714524f, NULL };

NJS_OBJECT object_00154E94 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00154E6C, -0.4f, 0.7f, -1.2f, 0, 0, 0, 1, 1, 1, NULL, &object_00154D64 };

NJS_MATERIAL matlist_00154EC8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 130, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 132, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 129, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00154F04[] = {
	4, 1, 0, 2, 3,
	4, 51, 52, 50, 49
};

Sint16 poly_00154F18[] = {
	4, 22, 46, 14, 47,
	4, 23, 27, 16, 33,
	0x8000u | 10, 24, 13, 42, 43, 21, 15, 36, 37, 22, 14,
	3, 6, 30, 40,
	3, 6, 31, 39,
	4, 11, 48, 16, 47,
	4, 10, 38, 14, 37,
	4, 30, 34, 7, 35,
	4, 29, 44, 5, 45,
	4, 12, 25, 13, 33,
	4, 9, 28, 15, 43,
	0x8000u | 10, 22, 5, 36, 35, 21, 7, 42, 41, 24, 4,
	4, 24, 27, 4, 26,
	4, 23, 46, 8, 45,
	4, 31, 40, 4, 41,
	4, 32, 39, 8, 26,
	3, 6, 32, 44,
	3, 6, 29, 34,
	3, 34, 30, 6,
	4, 5, 35, 29, 34,
	4, 15, 37, 9, 38,
	3, 40, 31, 6,
	4, 7, 41, 30, 40,
	4, 13, 43, 12, 28,
	3, 39, 32, 6,
	4, 4, 26, 31, 39,
	4, 8, 26, 23, 27,
	4, 13, 33, 24, 27,
	4, 16, 33, 11, 25,
	3, 44, 29, 6,
	4, 8, 45, 32, 44,
	4, 5, 45, 22, 46,
	4, 16, 47, 23, 46,
	4, 14, 47, 10, 48
};

Sint16 poly_00155074[] = {
	4, 20, 19, 18, 17
};

NJS_TEX uv_00155080[] = {
	{ 107, 251 },
	{ 251, 251 },
	{ 107, 3 },
	{ 251, 3 },
	{ 107, 3 },
	{ 251, 3 },
	{ 107, 251 },
	{ 251, 251 }
};

NJS_TEX uv_001550A0[] = {
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 147 },
	{ 3, 251 },
	{ 139, 155 },
	{ 139, 251 },
	{ 251, 147 },
	{ 251, 251 },
	{ 139, 155 },
	{ 139, 251 },
	{ 3, 147 },
	{ 3, 251 },
	{ 59, 3 },
	{ 3, 3 },
	{ 3, 83 },
	{ 59, 3 },
	{ 3, 3 },
	{ 3, 83 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 147 },
	{ 3, 3 },
	{ 139, 155 },
	{ 139, 3 },
	{ 251, 147 },
	{ 251, 3 },
	{ 139, 155 },
	{ 139, 3 },
	{ 3, 147 },
	{ 3, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 59, 3 },
	{ 3, 3 },
	{ 3, 83 },
	{ 59, 3 },
	{ 3, 3 },
	{ 3, 83 },
	{ 59, 3 },
	{ 3, 3 },
	{ 3, 83 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 59, 3 },
	{ 3, 3 },
	{ 3, 83 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 59, 3 },
	{ 3, 3 },
	{ 3, 83 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 59, 3 },
	{ 3, 3 },
	{ 3, 83 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 },
	{ 3, 83 },
	{ 59, 83 },
	{ 3, 3 },
	{ 59, 3 }
};

NJS_TEX uv_001552D0[] = {
	{ 0, 255 },
	{ 0, -255 },
	{ 510, 255 },
	{ 510, -254 }
};

NJS_MESHSET_SADX meshlist_001552E0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00154F04, NULL, NULL, NULL, uv_00155080, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 34, poly_00154F18, NULL, NULL, NULL, uv_001550A0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00155074, NULL, NULL, NULL, uv_001552D0, NULL }
};

NJS_VECTOR vertex_00155328[] = {
	{ 2.619f, 0.193708f, -0.719501f },
	{ 1.619f, 0.193708f, -0.019501f },
	{ 1.619f, 1.593709f, -0.019501f },
	{ 2.619f, 1.593709f, -0.719501f },
	{ 1.747f, 1.708709f, 0.0055f },
	{ -1.734f, 1.708709f, 0.0055f },
	{ 0.005f, 4.275708f, -1.496499f },
	{ 0.007f, 2.057708f, 1.3405f },
	{ 0.007f, 1.601709f, -1.9445f },
	{ 0.005f, -0.404292f, 0.739499f },
	{ -0.6149999f, -0.388291f, 0.267499f },
	{ 0.003f, 0.043709f, -0.964501f },
	{ 0.626f, -0.388291f, 0.267499f },
	{ 1.851f, 0.159708f, 0.132499f },
	{ -1.838f, 0.159708f, 0.132499f },
	{ 0.007f, 0.07170799f, 1.457499f },
	{ 0.007f, 0.345709f, -1.6215f },
	{ 4.137999f, 2.120708f, 0.0005f },
	{ 0, 1.37071f, -4.0285f },
	{ 0, 2.870707f, 4.0285f },
	{ -4.137999f, 2.120708f, 0.0005f },
	{ 0.0088f, 0.964708f, 1.226224f },
	{ -1.61525f, 0.934209f, 0.055724f },
	{ 0.007f, 0.873709f, -1.883f },
	{ 1.632f, 0.934209f, 0.055725f },
	{ 0.340504f, -0.072501f, -0.695052f },
	{ 1.209653f, 1.642217f, -1.284405f },
	{ 1.270038f, 0.898459f, -1.127813f },
	{ 0.3155f, -0.446291f, 0.503499f },
	{ -1.510169f, 2.650458f, -0.426079f },
	{ 0.0045f, 3.012208f, 0.78337f },
	{ 1.518299f, 2.650458f, -0.426079f },
	{ 0.0045f, 2.420208f, -1.848579f },
	{ 1.209079f, 0.389899f, -1.025899f },
	{ -0.852834f, 2.831333f, 0.478645f },
	{ -0.9635f, 1.883209f, 0.973f },
	{ -0.9032249f, 0.8994589f, 0.890974f },
	{ -1.0155f, 0.115708f, 1.094999f },
	{ -0.305f, -0.446291f, 0.503499f },
	{ 1.02673f, 2.390993f, -1.453297f },
	{ 0.8613999f, 2.831333f, 0.378645f },
	{ 0.977f, 1.883209f, 0.873f },
	{ 0.9204f, 0.8994589f, 0.790974f },
	{ 1.029f, 0.115708f, 0.994999f },
	{ -1.020755f, 2.390993f, -1.453297f },
	{ -1.197628f, 1.642217f, -1.284405f },
	{ -1.155449f, 0.898459f, -1.327813f },
	{ -1.197735f, 0.389899f, -1.025899f },
	{ -0.334599f, -0.072501f, -0.695052f },
	{ -2.581f, 0.193708f, -0.719501f },
	{ -1.581f, 0.193708f, -0.019502f },
	{ -1.581f, 1.593709f, -0.019502f },
	{ -2.581f, 1.593709f, -0.719501f }
};

NJS_VECTOR normal_001555A4[] = {
	{ 0.5734619f, 0, 0.819232f },
	{ 0.5734619f, 0, 0.819232f },
	{ 0.5734619f, 0, 0.819232f },
	{ 0.5734619f, 0, 0.819232f },
	{ 0.977945f, 0.075559f, 0.194718f },
	{ -0.98361f, 0.067291f, 0.16728f },
	{ 0.002276f, 0.9066319f, -0.421917f },
	{ 0.04037f, 0.223865f, 0.973784f },
	{ 0.012387f, 0.015241f, -0.9998069f },
	{ 0.018764f, -0.833354f, 0.552421f },
	{ -0.413552f, -0.908622f, 0.058143f },
	{ -0.000836f, -0.908604f, -0.417659f },
	{ 0.41414f, -0.907028f, 0.076075f },
	{ 0.9257219f, -0.36011f, 0.115587f },
	{ -0.928284f, -0.36052f, 0.09118f },
	{ 0.032847f, -0.331553f, 0.942865f },
	{ 0.0139f, -0.678171f, -0.734773f },
	{ -0.00011f, 0.98311f, -0.183017f },
	{ -0.00011f, 0.98311f, -0.183017f },
	{ -0.00011f, 0.98311f, -0.183017f },
	{ -0.00011f, 0.98311f, -0.183017f },
	{ 0.047333f, 0.07076599f, 0.9963689f },
	{ -0.982004f, 0.077241f, 0.17234f },
	{ 0.020842f, -0.25783f, -0.965966f },
	{ 0.975069f, 0.07964499f, 0.207118f },
	{ 0.264434f, -0.880778f, -0.392817f },
	{ 0.749468f, -0.025677f, -0.661543f },
	{ 0.7661f, -0.120541f, -0.631317f },
	{ 0.336487f, -0.822167f, 0.459149f },
	{ -0.898664f, 0.438415f, -0.013946f },
	{ 0.031517f, 0.700146f, 0.713304f },
	{ 0.8958549f, 0.444338f, 0.002646f },
	{ -0.00025f, 0.151408f, -0.988471f },
	{ 0.633136f, -0.492484f, -0.597159f },
	{ -0.551789f, 0.620603f, 0.557119f },
	{ -0.590481f, 0.178112f, 0.787152f },
	{ -0.568891f, 0.09563f, 0.816834f },
	{ -0.554337f, -0.330268f, 0.763959f },
	{ -0.320778f, -0.834669f, 0.447694f },
	{ 0.670132f, 0.193112f, -0.71668f },
	{ 0.564061f, 0.616314f, 0.549539f },
	{ 0.607193f, 0.181775f, 0.773482f },
	{ 0.5821379f, 0.092386f, 0.807825f },
	{ 0.5653329f, -0.335714f, 0.753456f },
	{ -0.67094f, 0.191903f, -0.716249f },
	{ -0.761501f, -0.034034f, -0.64727f },
	{ -0.694627f, -0.158385f, -0.701718f },
	{ -0.669812f, -0.454861f, -0.586902f },
	{ -0.265353f, -0.880265f, -0.393346f },
	{ -0.5734619f, 0, 0.819232f },
	{ -0.5734619f, 0, 0.819232f },
	{ -0.5734619f, 0, 0.819232f },
	{ -0.5734619f, 0, 0.819232f }
};

NJS_MODEL_SADX attach_00155820 = { vertex_00155328, normal_001555A4, LengthOfArray<Sint32>(vertex_00155328), meshlist_001552E0, matlist_00154EC8, LengthOfArray<Uint16>(meshlist_001552E0), LengthOfArray<Uint16>(matlist_00154EC8),{ 0, 1.914708f, 0 }, 5.775105f, NULL };

NJS_OBJECT object_00155848 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00155820, -0.019f, 1.377709f, 0.519502f, 0, 0, 0, 1, 1, 1, NULL, &object_00154E94 };

NJS_MATERIAL matlist_0015587C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 130, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00155890[] = {
	3, 21, 20, 0,
	4, 15, 14, 4, 2,
	3, 13, 3, 1,
	4, 5, 3, 15, 14,
	3, 3, 5, 1,
	3, 22, 21, 0,
	4, 16, 15, 6, 4,
	4, 3, 13, 14, 19,
	4, 7, 5, 16, 15,
	3, 5, 7, 1,
	3, 23, 22, 0,
	4, 17, 16, 8, 6,
	4, 14, 19, 2, 12,
	4, 9, 7, 17, 16,
	3, 7, 9, 1,
	3, 24, 23, 0,
	4, 18, 17, 10, 8,
	3, 20, 25, 0,
	4, 11, 9, 18, 17,
	3, 9, 11, 1,
	3, 25, 24, 0,
	4, 19, 18, 12, 10,
	3, 11, 13, 1,
	4, 13, 11, 19, 18,
	4, 20, 21, 2, 4,
	4, 21, 22, 4, 6,
	4, 22, 23, 6, 8,
	4, 25, 20, 12, 2,
	4, 23, 24, 8, 10,
	4, 24, 25, 10, 12
};

NJS_TEX uv_001559A4[] = {
	{ 51, 139 },
	{ 51, 179 },
	{ 3, 179 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 51, 75 },
	{ 51, 115 },
	{ 3, 115 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 51, 75 },
	{ 51, 115 },
	{ 3, 115 },
	{ 51, 139 },
	{ 51, 179 },
	{ 3, 179 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 51, 75 },
	{ 51, 115 },
	{ 3, 115 },
	{ 51, 139 },
	{ 51, 179 },
	{ 3, 179 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 51, 75 },
	{ 51, 115 },
	{ 3, 115 },
	{ 51, 139 },
	{ 51, 179 },
	{ 3, 179 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 51, 139 },
	{ 51, 179 },
	{ 3, 179 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 51, 75 },
	{ 51, 115 },
	{ 3, 115 },
	{ 51, 139 },
	{ 51, 179 },
	{ 3, 179 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 51, 75 },
	{ 51, 115 },
	{ 3, 115 },
	{ 3, 115 },
	{ 3, 75 },
	{ 51, 115 },
	{ 51, 75 },
	{ 3, 179 },
	{ 3, 139 },
	{ 51, 179 },
	{ 51, 139 },
	{ 3, 179 },
	{ 3, 139 },
	{ 51, 179 },
	{ 51, 139 },
	{ 3, 179 },
	{ 3, 139 },
	{ 51, 179 },
	{ 51, 139 },
	{ 3, 179 },
	{ 3, 139 },
	{ 51, 179 },
	{ 51, 139 },
	{ 3, 179 },
	{ 3, 139 },
	{ 51, 179 },
	{ 51, 139 },
	{ 3, 179 },
	{ 3, 139 },
	{ 51, 179 },
	{ 51, 139 }
};

NJS_MESHSET_SADX meshlist_00155B54[] = {
	{ NJD_MESHSET_TRIMESH | 0, 30, poly_00155890, NULL, NULL, NULL, uv_001559A4, NULL }
};

NJS_VECTOR vertex_00155B6C[] = {
	{ 0, -2.210901f, -0.633966f },
	{ 0, 0.8824379f, 0.248074f },
	{ 1.558846f, 0.536452f, -0.7824439f },
	{ 1.948556f, 1.73411f, -0.72309f },
	{ 0, 0.5845259f, -1.247579f },
	{ 0, 1.87887f, -1.404509f },
	{ -1.558846f, 0.536452f, -0.7824439f },
	{ -1.948556f, 1.590927f, -0.72309f },
	{ -1.558846f, 0.040305f, 0.947827f },
	{ -1.948556f, 1.178757f, 1.439748f },
	{ 0, -0.207769f, 1.812962f },
	{ 0.000001f, 0.7897159f, 2.521167f },
	{ 1.558846f, 0.040305f, 0.947826f },
	{ 1.948557f, 1.284845f, 1.439748f },
	{ 2.75448f, 1.399608f, -1.253057f },
	{ 0, 1.637954f, -2.381752f },
	{ -2.754481f, 1.399608f, -1.253056f },
	{ -2.75448f, 0.522916f, 1.804332f },
	{ 0.000001f, 0.084569f, 3.333026f },
	{ 2.754481f, 0.522916f, 1.804331f },
	{ 2.455181f, -1.339555f, -1.858735f },
	{ 0, -1.148839f, -2.821323f },
	{ -2.455181f, -1.339555f, -1.858734f },
	{ -2.455181f, -2.120986f, 0.866441f },
	{ 0.000001f, -2.511702f, 2.229028f },
	{ 2.455181f, -2.120986f, 0.86644f }
};

NJS_VECTOR normal_00155CA4[] = {
	{ 0, -0.961426f, -0.275062f },
	{ -0.028654f, 0.9661199f, 0.256497f },
	{ 0.719871f, -0.307224f, -0.622414f },
	{ 0.163896f, 0.981174f, 0.102154f },
	{ -0.00093f, -0.077378f, -0.997001f },
	{ -0.008866f, 0.994471f, 0.104637f },
	{ -0.730132f, -0.270176f, -0.627625f },
	{ -0.204905f, 0.96886f, 0.13901f },
	{ -0.788837f, -0.522241f, 0.324039f },
	{ -0.202789f, 0.918625f, 0.339123f },
	{ 0, -0.6477759f, 0.761831f },
	{ 0.009536999f, 0.8610139f, 0.508492f },
	{ 0.788837f, -0.522241f, 0.324039f },
	{ 0.173906f, 0.909697f, 0.377105f },
	{ 0.843215f, 0.159149f, -0.513479f },
	{ -0.00116f, 0.285947f, -0.958245f },
	{ -0.866248f, 0.131269f, -0.48206f },
	{ -0.877256f, -0.132794f, 0.461289f },
	{ 0.027142f, -0.299688f, 0.953651f },
	{ 0.843251f, -0.151037f, 0.515865f },
	{ 0.7672769f, -0.210418f, -0.605814f },
	{ 0.005911f, -0.151424f, -0.9884509f },
	{ -0.781477f, -0.181857f, -0.5968429f },
	{ -0.8033929f, -0.486767f, 0.342954f },
	{ 0, -0.614619f, 0.788824f },
	{ 0.8033929f, -0.486767f, 0.342953f }
};

NJS_MODEL_SADX attach_00155DDC = { vertex_00155B6C, normal_00155CA4, LengthOfArray<Sint32>(vertex_00155B6C), meshlist_00155B54, matlist_0015587C, LengthOfArray<Uint16>(meshlist_00155B54), LengthOfArray<Uint16>(matlist_0015587C),{ 0, -0.316416f, 0.255852f }, 4.129911f, NULL };

NJS_OBJECT object_00155E04 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_00155DDC, 0, 0, -0.5f, 0, 0, 0, 1, 1, 1, &object_00155848, NULL }; //Egg Nightopian

NJS_MATERIAL matlist_00153C00[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 133, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00153C14[] = {
	0x8000u | 13, 1, 16, 17, 14, 15, 12, 0, 9, 6, 8, 5, 7, 4,
	0x8000u | 7, 1, 17, 2, 18, 3, 0, 6,
	6, 6, 3, 5, 2, 4, 1,
	4, 17, 18, 15, 0,
	3, 13, 16, 14,
	0x8000u | 5, 12, 14, 11, 13, 10,
	6, 12, 9, 11, 8, 10, 7
};

NJS_TEX uv_00153C7C[] = {
	{ 1275, -416 },
	{ 1061, -416 },
	{ 1061, -752 },
	{ 849, -752 },
	{ 849, -929 },
	{ 637, -929 },
	{ 0, -1020 },
	{ 424, -929 },
	{ 212, -929 },
	{ 424, -752 },
	{ 212, -752 },
	{ 424, -416 },
	{ 212, -416 },
	{ 1275, -416 },
	{ 1061, -752 },
	{ 1275, -752 },
	{ 1061, -929 },
	{ 1275, -929 },
	{ 1275, -1020 },
	{ 1487, -929 },
	{ 1487, -929 },
	{ 1275, -929 },
	{ 1487, -752 },
	{ 1275, -752 },
	{ 1487, -416 },
	{ 1275, -416 },
	{ 1061, -752 },
	{ 1061, -929 },
	{ 849, -929 },
	{ 1275, -1020 },
	{ 849, -416 },
	{ 1061, -416 },
	{ 849, -752 },
	{ 637, -929 },
	{ 849, -752 },
	{ 637, -752 },
	{ 849, -416 },
	{ 637, -416 },
	{ 637, -929 },
	{ 424, -929 },
	{ 637, -752 },
	{ 424, -752 },
	{ 637, -416 },
	{ 424, -416 }
};

NJS_MESHSET_SADX meshlist_00153D2C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_00153C14, NULL, NULL, NULL, uv_00153C7C, NULL }
};

NJS_VECTOR vertex_00153D44[] = {
	{ 0, 3.350007f, 0 },
	{ 4.45f, -2.000001f, 0 },
	{ 3.352819f, 0.974999f, 0 },
	{ 1.819605f, 2.552856f, 0 },
	{ 2.225f, -2.000001f, -3.853815f },
	{ 1.676409f, 0.974999f, -2.903625f },
	{ 0.909803f, 2.552856f, -1.575825f },
	{ -2.225001f, -2.000001f, -3.853814f },
	{ -1.67641f, 0.974999f, -2.903625f },
	{ -0.909803f, 2.552856f, -1.575825f },
	{ -4.45f, -2.000001f, 0.000001f },
	{ -3.352819f, 0.974999f, 0 },
	{ -1.819605f, 2.552856f, 0 },
	{ -2.225f, -2.000001f, 3.853815f },
	{ -1.676409f, 0.974999f, 2.903626f },
	{ -0.909803f, 2.552856f, 1.575825f },
	{ 2.225001f, -2.000001f, 3.853814f },
	{ 1.67641f, 0.974999f, 2.903625f },
	{ 0.909803f, 2.552856f, 1.575825f }
};

NJS_VECTOR normal_00153E28[] = {
	{ 0, 1, 0 },
	{ 0.938228f, 0.346019f, 0 },
	{ 0.863131f, 0.50498f, 0 },
	{ 0.6094469f, 0.792827f, 0 },
	{ 0.469114f, 0.346019f, -0.812529f },
	{ 0.431566f, 0.50498f, -0.747493f },
	{ 0.304724f, 0.792827f, -0.527797f },
	{ -0.469114f, 0.346019f, -0.812529f },
	{ -0.431566f, 0.50498f, -0.747493f },
	{ -0.304723f, 0.792827f, -0.527797f },
	{ -0.938228f, 0.346019f, 0 },
	{ -0.863131f, 0.50498f, 0 },
	{ -0.6094469f, 0.792827f, 0 },
	{ -0.469113f, 0.346019f, 0.812529f },
	{ -0.431565f, 0.50498f, 0.747493f },
	{ -0.304723f, 0.792827f, 0.527797f },
	{ 0.469114f, 0.346019f, 0.812529f },
	{ 0.431566f, 0.50498f, 0.747493f },
	{ 0.304724f, 0.792827f, 0.527797f }
};

NJS_MODEL_SADX attach_00153F0C = { vertex_00153D44, normal_00153E28, LengthOfArray<Sint32>(vertex_00153D44), meshlist_00153D2C, matlist_00153C00, LengthOfArray<Uint16>(meshlist_00153D2C), LengthOfArray<Uint16>(matlist_00153C00),{ 0, 0.675003f, 0 }, 5.886798f, NULL };

NJS_OBJECT object_00153F34 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00153F0C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL }; //Piantama Egg Top

NJS_MATERIAL matlist_00153F68[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 133, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00153F7C[] = {
	9, 5, 2, 4, 1, 0, 16, 13, 14, 11,
	0x8000u | 5, 2, 1, 17, 16, 14,
	4, 8, 5, 7, 4,
	0x8000u | 14, 5, 6, 8, 9, 11, 12, 14, 15, 17, 18, 2, 3, 5, 6,
	6, 11, 8, 10, 7, 0, 4,
	4, 11, 10, 13, 0
};

NJS_TEX uv_00153FDC[] = {
	{ 1485, -80 },
	{ 1275, -80 },
	{ 1487, 165 },
	{ 1275, 165 },
	{ 1275, 255 },
	{ 1061, 165 },
	{ 849, 165 },
	{ 848, -80 },
	{ 637, -80 },
	{ 1275, -80 },
	{ 1275, 165 },
	{ 1062, -80 },
	{ 1061, 165 },
	{ 848, -80 },
	{ 424, -80 },
	{ 211, -80 },
	{ 424, 165 },
	{ 212, 165 },
	{ 211, -80 },
	{ 212, -416 },
	{ 424, -80 },
	{ 424, -416 },
	{ 637, -80 },
	{ 637, -416 },
	{ 848, -80 },
	{ 849, -416 },
	{ 1062, -80 },
	{ 1061, -416 },
	{ 1275, -80 },
	{ 1275, -416 },
	{ 1485, -80 },
	{ 1487, -416 },
	{ 637, -80 },
	{ 424, -80 },
	{ 637, 165 },
	{ 424, 165 },
	{ 0, 255 },
	{ 212, 165 },
	{ 637, -80 },
	{ 637, 165 },
	{ 849, 165 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_00154084[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_00153F7C, NULL, NULL, NULL, uv_00153FDC, NULL }
};

NJS_VECTOR vertex_0015409C[] = {
	{ 0, 0.050001f, 0 },
	{ 2.8f, 0.847151f, 0 },
	{ 4.41673f, 3.025002f, 0 },
	{ 4.45f, 5.999998f, 0 },
	{ 1.4f, 0.847151f, -2.424871f },
	{ 2.208365f, 3.025002f, -3.7875f },
	{ 2.225f, 5.999998f, -3.853815f },
	{ -1.4f, 0.847151f, -2.424871f },
	{ -2.208366f, 3.025002f, -3.7875f },
	{ -2.225001f, 5.999998f, -3.853814f },
	{ -2.8f, 0.847151f, 0 },
	{ -4.416731f, 3.025002f, 0.000001f },
	{ -4.45f, 5.999998f, 0.000001f },
	{ -1.399999f, 0.847151f, 2.424871f },
	{ -2.208364f, 3.025002f, 3.787501f },
	{ -2.225f, 5.999998f, 3.853815f },
	{ 1.400001f, 0.847151f, 2.424871f },
	{ 2.208367f, 3.025002f, 3.7875f },
	{ 2.225001f, 5.999998f, 3.853814f }
};

NJS_VECTOR normal_00154180[] = {
	{ 0, -1, 0 },
	{ 0.63291f, -0.774225f, -0.000462f },
	{ 0.955997f, -0.293378f, -0.000328f },
	{ 0.99989f, -0.014852f, 0.000024f },
	{ 0.316069f, -0.771505f, -0.552161f },
	{ 0.478606f, -0.294262f, -0.827252f },
	{ 0.497242f, -0.022114f, -0.86733f },
	{ -0.315086f, -0.772473f, -0.551368f },
	{ -0.478444f, -0.293487f, -0.827621f },
	{ -0.497299f, -0.018464f, -0.8673829f },
	{ -0.63291f, -0.774225f, 0.000462f },
	{ -0.955997f, -0.293377f, 0.000328f },
	{ -0.99989f, -0.014852f, -0.00024f },
	{ -0.316069f, -0.771505f, 0.552161f },
	{ -0.478606f, -0.294262f, 0.827252f },
	{ -0.497242f, -0.022114f, 0.86733f },
	{ 0.315086f, -0.772473f, 0.551367f },
	{ 0.478444f, -0.293487f, 0.827621f },
	{ 0.497299f, -0.018464f, 0.8673829f }
};

NJS_MODEL_SADX attach_00154264 = { vertex_0015409C, normal_00154180, LengthOfArray<Sint32>(vertex_0015409C), meshlist_00154084, matlist_00153F68, LengthOfArray<Uint16>(meshlist_00154084), LengthOfArray<Uint16>(matlist_00153F68),{ 0, 3.024999f, 0 }, 5.886798f, NULL };

NJS_OBJECT object_0015428C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00154264, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL }; //Piantama Egg Bottom

NJS_MATERIAL matlist_001536BC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 133, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001536D0[] = {
	11, 11, 6, 10, 5, 9, 4, 8, 3, 7, 2, 0,
	14, 7, 0, 12, 17, 13, 18, 14, 19, 15, 20, 16, 21, 1, 26,
	0x8000u | 11, 1, 16, 11, 15, 10, 14, 9, 13, 8, 12, 7,
	0x8000u | 11, 0, 17, 22, 18, 23, 19, 24, 20, 25, 21, 26,
	14, 22, 0, 27, 2, 28, 3, 29, 4, 30, 5, 31, 6, 1, 11,
	11, 22, 27, 23, 28, 24, 29, 25, 30, 26, 31, 1
};

NJS_TEX uv_0015376C[] = {
	{ 1487, -929 },
	{ 1275, -929 },
	{ 1487, -752 },
	{ 1275, -752 },
	{ 1487, -416 },
	{ 1275, -416 },
	{ 1485, -80 },
	{ 1275, -80 },
	{ 1487, 165 },
	{ 1275, 165 },
	{ 1275, 255 },
	{ 212, 165 },
	{ 0, 255 },
	{ 424, 165 },
	{ 637, 165 },
	{ 424, -80 },
	{ 637, -80 },
	{ 424, -416 },
	{ 637, -416 },
	{ 424, -752 },
	{ 637, -752 },
	{ 424, -929 },
	{ 637, -929 },
	{ 0, -1020 },
	{ 849, -929 },
	{ 0, -1020 },
	{ 424, -929 },
	{ 212, -929 },
	{ 424, -752 },
	{ 212, -752 },
	{ 424, -416 },
	{ 212, -416 },
	{ 424, -80 },
	{ 211, -80 },
	{ 424, 165 },
	{ 212, 165 },
	{ 0, 255 },
	{ 637, 165 },
	{ 849, 165 },
	{ 637, -80 },
	{ 848, -80 },
	{ 637, -416 },
	{ 849, -416 },
	{ 637, -752 },
	{ 849, -752 },
	{ 637, -929 },
	{ 849, -929 },
	{ 849, 165 },
	{ 1275, 255 },
	{ 1061, 165 },
	{ 1275, 165 },
	{ 1062, -80 },
	{ 1275, -80 },
	{ 1061, -416 },
	{ 1275, -416 },
	{ 1061, -752 },
	{ 1275, -752 },
	{ 1061, -929 },
	{ 1275, -929 },
	{ 1275, -1020 },
	{ 1487, -929 },
	{ 849, 165 },
	{ 1061, 165 },
	{ 848, -80 },
	{ 1062, -80 },
	{ 849, -416 },
	{ 1061, -416 },
	{ 849, -752 },
	{ 1061, -752 },
	{ 849, -929 },
	{ 1061, -929 },
	{ 1275, -1020 }
};

NJS_MESHSET_SADX meshlist_0015388C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_001536D0, NULL, NULL, NULL, uv_0015376C, NULL }
};

NJS_VECTOR vertex_001538A4[] = {
	{ 0, 0.050001f, 0 },
	{ 0, 11.35f, 0 },
	{ 2.8f, 0.847151f, 0 },
	{ 4.41673f, 3.025002f, 0 },
	{ 4.45f, 5.999998f, 0 },
	{ 3.352819f, 8.974998f, 0 },
	{ 1.819605f, 10.55285f, 0 },
	{ 1.4f, 0.847151f, -2.424871f },
	{ 2.208365f, 3.025002f, -3.7875f },
	{ 2.225f, 5.999998f, -3.853815f },
	{ 1.676409f, 8.974998f, -2.903625f },
	{ 0.909803f, 10.55285f, -1.575825f },
	{ -1.4f, 0.847151f, -2.424871f },
	{ -2.208366f, 3.025002f, -3.7875f },
	{ -2.225001f, 5.999998f, -3.853814f },
	{ -1.67641f, 8.974998f, -2.903625f },
	{ -0.909803f, 10.55285f, -1.575825f },
	{ -2.8f, 0.847151f, 0 },
	{ -4.416731f, 3.025002f, 0.000001f },
	{ -4.45f, 5.999998f, 0.000001f },
	{ -3.352819f, 8.974998f, 0 },
	{ -1.819605f, 10.55285f, 0 },
	{ -1.399999f, 0.847151f, 2.424871f },
	{ -2.208364f, 3.025002f, 3.787501f },
	{ -2.225f, 5.999998f, 3.853815f },
	{ -1.676409f, 8.974998f, 2.903626f },
	{ -0.909803f, 10.55285f, 1.575825f },
	{ 1.400001f, 0.847151f, 2.424871f },
	{ 2.208367f, 3.025002f, 3.7875f },
	{ 2.225001f, 5.999998f, 3.853814f },
	{ 1.67641f, 8.974998f, 2.903625f },
	{ 0.909803f, 10.55285f, 1.575825f }
};

NJS_VECTOR normal_00153A24[] = {
	{ 0, -1, 0 },
	{ 0, 1, 0 },
	{ 0.63291f, -0.774225f, -0.000462f },
	{ 0.955997f, -0.293378f, -0.000328f },
	{ 0.9871989f, 0.159496f, 0.000013f },
	{ 0.863131f, 0.50498f, 0 },
	{ 0.6094469f, 0.792827f, 0 },
	{ 0.316069f, -0.771505f, -0.552161f },
	{ 0.478606f, -0.294262f, -0.827252f },
	{ 0.492483f, 0.155881f, -0.856249f },
	{ 0.431566f, 0.50498f, -0.747493f },
	{ 0.304724f, 0.792827f, -0.527797f },
	{ -0.315086f, -0.772473f, -0.551368f },
	{ -0.478444f, -0.293487f, -0.827621f },
	{ -0.492344f, 0.157776f, -0.8559819f },
	{ -0.431566f, 0.50498f, -0.747493f },
	{ -0.304723f, 0.792827f, -0.527797f },
	{ -0.63291f, -0.774225f, 0.000462f },
	{ -0.955997f, -0.293378f, 0.000328f },
	{ -0.9871989f, 0.159496f, -0.00012f },
	{ -0.863131f, 0.50498f, 0 },
	{ -0.6094469f, 0.792827f, 0 },
	{ -0.316069f, -0.771505f, 0.552161f },
	{ -0.478606f, -0.294262f, 0.827252f },
	{ -0.492483f, 0.155881f, 0.856249f },
	{ -0.431565f, 0.50498f, 0.747493f },
	{ -0.304723f, 0.792827f, 0.527797f },
	{ 0.315086f, -0.772473f, 0.551368f },
	{ 0.478444f, -0.293487f, 0.827621f },
	{ 0.492344f, 0.157776f, 0.8559819f },
	{ 0.431566f, 0.50498f, 0.747493f },
	{ 0.304724f, 0.792827f, 0.527797f }
};

NJS_MODEL_SADX attach_00153BA4 = { vertex_001538A4, normal_00153A24, LengthOfArray<Sint32>(vertex_001538A4), meshlist_0015388C, matlist_001536BC, LengthOfArray<Uint16>(meshlist_0015388C), LengthOfArray<Uint16>(matlist_001536BC),{ 0, 5.700003f, 0 }, 6.826108f, NULL };

NJS_OBJECT object_00153BCC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00153BA4, 0, 0, 0, 0xFFFFFCCD, 0, 0xFFFFFAAB, 1, 1, 1, NULL, NULL }; //Piantama Full Egg