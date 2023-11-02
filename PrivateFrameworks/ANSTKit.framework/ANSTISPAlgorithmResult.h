
@interface ANSTISPAlgorithmResult : ANSTResult {
    struct { struct { unsigned char x_1_1_1; BOOL x_1_1_2[20]; BOOL x_1_1_3[4][20]; BOOL x_1_1_4[4][20]; unsigned char x_1_1_5[32]; } x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1; unsigned int x_4_1_2; int x_4_1_3; struct { float x_4_2_1; float x_4_2_2; float x_4_2_3; float x_4_2_4; } x_4_1_4; unsigned int x_4_1_5; int x_4_1_6; int x_4_1_7; int x_4_1_8; int x_4_1_9; int x_4_1_10; int x_4_1_11; int x_4_1_12; int x_4_1_13; struct { float x_14_2_1; float x_14_2_2; float x_14_2_3; float x_14_2_4; } x_4_1_14; struct { float x_15_2_1; float x_15_2_2; float x_15_2_3; float x_15_2_4; } x_4_1_15; unsigned char x_4_1_16; unsigned char x_4_1_17; unsigned char x_4_1_18; unsigned char x_4_1_19; unsigned char x_4_1_20; unsigned int x_4_1_21; struct { float x_22_2_1; float x_22_2_2; float x_22_2_3; float x_22_2_4; } x_4_1_22; unsigned char x_4_1_23; unsigned int x_4_1_24; float x_4_1_25[64]; unsigned char x_4_1_26; unsigned int x_4_1_27; int x_4_1_28; int x_4_1_29; int x_4_1_30; int x_4_1_31; int x_4_1_32; int x_4_1_33; int x_4_1_34; int x_4_1_35; int x_4_1_36; int x_4_1_37; int x_4_1_38; unsigned char x_4_1_39; struct { float x_40_2_1; float x_40_2_2; float x_40_2_3; } x_4_1_40[98]; } x4[10]; } * _acResult;
    struct __CVBuffer { } * _hairMask;
    struct __CVBuffer { } * _personMask;
    struct __CVBuffer { } * _saliencyMask;
    struct __CVBuffer { } * _salientPersonMask;
    struct __CVBuffer { } * _skinMask;
    struct __CVBuffer { } * _skyMask;
}

@property (nonatomic, readonly) int smudgeConfidence;

+ (id)new;

- (id)_init;
- (id)_objectsOfCategory:(int)arg1 fromAcResult:(struct { struct { unsigned char x_1_1_1; BOOL x_1_1_2[20]; BOOL x_1_1_3[4][20]; BOOL x_1_1_4[4][20]; unsigned char x_1_1_5[32]; } x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1; unsigned int x_4_1_2; int x_4_1_3; struct { float x_4_2_1; float x_4_2_2; float x_4_2_3; float x_4_2_4; } x_4_1_4; unsigned int x_4_1_5; int x_4_1_6; int x_4_1_7; int x_4_1_8; int x_4_1_9; int x_4_1_10; int x_4_1_11; int x_4_1_12; int x_4_1_13; struct { float x_14_2_1; float x_14_2_2; float x_14_2_3; float x_14_2_4; } x_4_1_14; struct { float x_15_2_1; float x_15_2_2; float x_15_2_3; float x_15_2_4; } x_4_1_15; unsigned char x_4_1_16; unsigned char x_4_1_17; unsigned char x_4_1_18; unsigned char x_4_1_19; unsigned char x_4_1_20; unsigned int x_4_1_21; struct { float x_22_2_1; float x_22_2_2; float x_22_2_3; float x_22_2_4; } x_4_1_22; unsigned char x_4_1_23; unsigned int x_4_1_24; float x_4_1_25[64]; unsigned char x_4_1_26; unsigned int x_4_1_27; int x_4_1_28; int x_4_1_29; int x_4_1_30; int x_4_1_31; int x_4_1_32; int x_4_1_33; int x_4_1_34; int x_4_1_35; int x_4_1_36; int x_4_1_37; int x_4_1_38; unsigned char x_4_1_39; struct { float x_40_2_1; float x_40_2_2; float x_40_2_3; } x_4_1_40[98]; } x4[10]; }*)arg2;
- (void)dealloc;
- (id)detectedObjectsForCategory:(id)arg1;
- (id)init;
- (id)initWithAcResult:(struct { struct { unsigned char x_1_1_1; BOOL x_1_1_2[20]; BOOL x_1_1_3[4][20]; BOOL x_1_1_4[4][20]; unsigned char x_1_1_5[32]; } x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1; unsigned int x_4_1_2; int x_4_1_3; struct { float x_4_2_1; float x_4_2_2; float x_4_2_3; float x_4_2_4; } x_4_1_4; unsigned int x_4_1_5; int x_4_1_6; int x_4_1_7; int x_4_1_8; int x_4_1_9; int x_4_1_10; int x_4_1_11; int x_4_1_12; int x_4_1_13; struct { float x_14_2_1; float x_14_2_2; float x_14_2_3; float x_14_2_4; } x_4_1_14; struct { float x_15_2_1; float x_15_2_2; float x_15_2_3; float x_15_2_4; } x_4_1_15; unsigned char x_4_1_16; unsigned char x_4_1_17; unsigned char x_4_1_18; unsigned char x_4_1_19; unsigned char x_4_1_20; unsigned int x_4_1_21; struct { float x_22_2_1; float x_22_2_2; float x_22_2_3; float x_22_2_4; } x_4_1_22; unsigned char x_4_1_23; unsigned int x_4_1_24; float x_4_1_25[64]; unsigned char x_4_1_26; unsigned int x_4_1_27; int x_4_1_28; int x_4_1_29; int x_4_1_30; int x_4_1_31; int x_4_1_32; int x_4_1_33; int x_4_1_34; int x_4_1_35; int x_4_1_36; int x_4_1_37; int x_4_1_38; unsigned char x_4_1_39; struct { float x_40_2_1; float x_40_2_2; float x_40_2_3; } x_4_1_40[98]; } x4[10]; }*)arg1 personMask:(struct __CVBuffer { }*)arg2 salientPersonMask:(struct __CVBuffer { }*)arg3 skinMask:(struct __CVBuffer { }*)arg4 hairMask:(struct __CVBuffer { }*)arg5 skyMask:(struct __CVBuffer { }*)arg6 saliencyMask:(struct __CVBuffer { }*)arg7;
- (struct __CVBuffer { }*)maskForSemanticCategory:(id)arg1;
- (int)smudgeConfidence;

@end
