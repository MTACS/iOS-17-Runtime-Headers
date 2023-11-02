
@interface MTTintingFilteringMaterialSettings : MTTintingMaterialSettings <MTMaterialFilteringInternal, MTUserInfoProviding> {
    bool  _averageColorEnabled;
    double  _backdropScale;
    bool  _blurAtEnd;
    NSString * _blurInputQuality;
    double  _blurRadius;
    double  _brightness;
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
    }  _colorMatrix;
    NSDictionary * _curvesValues;
    double  _luminanceAmount;
    NSArray * _luminanceValues;
    double  _saturation;
    NSDictionary * _userInfo;
    struct CGImage { } * _variableBlurInputMask;
    NSString * _variableBlurInputMaskName;
    double  _zoom;
}

@property (getter=isAverageColorEnabled, nonatomic, readonly) bool averageColorEnabled;
@property (nonatomic, readonly) double backdropScale;
@property (getter=isBlurAtEnd, nonatomic, readonly) bool blurAtEnd;
@property (nonatomic, readonly, copy) NSString *blurInputQuality;
@property (nonatomic, readonly) double blurRadius;
@property (nonatomic, readonly) double brightness;
@property (nonatomic, readonly) struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; } colorMatrix;
@property (nonatomic, readonly, copy) NSDictionary *curvesValues;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double luminanceAmount;
@property (nonatomic, readonly, copy) NSArray *luminanceValues;
@property (nonatomic, readonly) double saturation;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;
@property (nonatomic, readonly, copy) NSString *variableBlurInputMaskName;
@property (nonatomic, readonly) double zoom;

- (void).cxx_destruct;
- (void)_processMaterialFilteringDescription:(id)arg1 defaultingToIdentity:(bool)arg2 bundle:(id)arg3;
- (void)_processUserInfoDescription:(id)arg1;
- (double)backdropScale;
- (id)blurInputQuality;
- (double)blurRadius;
- (double)brightness;
- (struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })colorMatrix;
- (id)curvesValues;
- (void)dealloc;
- (id)initWithMaterialDescription:(id)arg1 andDescendantDescriptions:(id)arg2 bundle:(id)arg3;
- (bool)isAverageColorEnabled;
- (bool)isBlurAtEnd;
- (double)luminanceAmount;
- (id)luminanceValues;
- (double)saturation;
- (id)userInfo;
- (struct CGImage { }*)variableBlurInputMask;
- (id)variableBlurInputMaskName;
- (double)zoom;

@end
