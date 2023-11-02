
@interface BSUIVibrancyEffectValues : BSUIVibrancyValues {
    struct CAColorMatrix { 
        float m11; 
        float m12; 
        float m13; 
        float m14; 
        float m15; 
        float m21; 
        float m22; 
        float m23; 
        float m24; 
        float m25; 
        float m31; 
        float m32; 
        float m33; 
        float m34; 
        float m35; 
        float m41; 
        float m42; 
        float m43; 
        float m44; 
        float m45; 
    }  _backdropColorMatrix;
    NSString * _groupName;
    struct CAColorMatrix { 
        float m11; 
        float m12; 
        float m13; 
        float m14; 
        float m15; 
        float m21; 
        float m22; 
        float m23; 
        float m24; 
        float m25; 
        float m31; 
        float m32; 
        float m33; 
        float m34; 
        float m35; 
        float m41; 
        float m42; 
        float m43; 
        float m44; 
        float m45; 
    }  _vibrantColorMatrix;
}

@property (nonatomic, readonly) struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; } backdropColorMatrix;
@property (nonatomic, readonly) NSString *groupName;
@property (nonatomic, readonly) struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; } vibrantColorMatrix;

+ (struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })_colorizedMaterialBackdropMatrixForType:(long long)arg1 heroColor:(id)arg2 backgroundType:(long long)arg3;
+ (struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })_colorizedVibrancyMatrixForType:(long long)arg1 heroColor:(id)arg2 backgroundType:(long long)arg3;
+ (struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })_materialBackdropColorMatrixForType:(long long)arg1 heroColor:(id)arg2 backgroundType:(long long)arg3;
+ (struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })_vibrancyMatrixForType:(long long)arg1 heroColor:(id)arg2 backgroundType:(long long)arg3;

- (void).cxx_destruct;
- (struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })backdropColorMatrix;
- (void)calculateValuesForConfiguration:(id)arg1;
- (id)groupName;
- (id)transformBackdropColor:(id)arg1;
- (id)transformColor:(id)arg1 withVibrantMask:(id)arg2;
- (id)transformVibrantColor:(id)arg1;
- (struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })vibrantColorMatrix;

@end
