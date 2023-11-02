
@interface BSUIVibrancyShadowValues : BSUIVibrancyValues {
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

@property (nonatomic, readonly) struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; } vibrantColorMatrix;

+ (struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })_colorizedShadowColorMatrixForType:(long long)arg1 heroColor:(id)arg2 backgroundType:(long long)arg3;
+ (struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })_darkeningShadowMatrix;
+ (struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })_lighteningShadowMatrix;
+ (struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })_shadowColorMatrixForType:(long long)arg1 heroColor:(id)arg2 backgroundType:(long long)arg3;

- (void)calculateValuesForConfiguration:(id)arg1;
- (id)transformShadowColor:(id)arg1;
- (struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })vibrantColorMatrix;

@end
