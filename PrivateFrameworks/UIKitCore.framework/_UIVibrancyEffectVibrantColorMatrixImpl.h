
@interface _UIVibrancyEffectVibrantColorMatrixImpl : _UIVibrancyEffectImpl {
    double  _alpha;
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
    }  _darkVibrantColorMatrix;
    bool  _hasDarkVariant;
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
    }  _lightVibrantColorMatrix;
    UIColor * _reducedTransperancyColor;
    long long  _systemName;
}

- (void).cxx_destruct;
- (bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (void)appendDescriptionTo:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)implementationReplacingTintColor:(id)arg1;
- (id)initWithCAColorMatrix:(struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })arg1 alpha:(double)arg2;
- (id)initWithLightCAColorMatrix:(struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })arg1 darkCAColorMatrix:(struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })arg2 alpha:(double)arg3;
- (id)initWithSystemName:(long long)arg1;
- (bool)isEqual:(id)arg1;

@end
