
@interface CUIStyleEffectConfiguration : NSObject <NSCopying> {
    NSString * _appearanceName;
    double  _brightnessMultiplier;
    unsigned long long  _colorTemperature;
    unsigned long long  _dimension1;
    double  _effectScale;
    bool  _foregroundColorShouldTintEffects;
    long long  _presentationState;
    long long  _state;
    bool  _useSimplifiedEffect;
    long long  _value;
}

@property (nonatomic, copy) NSString *appearanceName;
@property (nonatomic) double brightnessMultiplier;
@property (nonatomic) unsigned long long colorTemperature;
@property (nonatomic) unsigned long long dimension1;
@property (nonatomic) double effectScale;
@property (nonatomic) bool foregroundColorShouldTintEffects;
@property (nonatomic) long long presentationState;
@property (nonatomic) long long state;
@property (nonatomic) bool useSimplifiedEffect;
@property (nonatomic) long long value;

- (id)appearanceName;
- (double)brightnessMultiplier;
- (unsigned long long)colorTemperature;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)dimension1;
- (double)effectScale;
- (bool)foregroundColorShouldTintEffects;
- (id)init;
- (long long)presentationState;
- (void)setAppearanceName:(id)arg1;
- (void)setBrightnessMultiplier:(double)arg1;
- (void)setColorTemperature:(unsigned long long)arg1;
- (void)setDimension1:(unsigned long long)arg1;
- (void)setEffectScale:(double)arg1;
- (void)setForegroundColorShouldTintEffects:(bool)arg1;
- (void)setPresentationState:(long long)arg1;
- (void)setState:(long long)arg1;
- (void)setUseSimplifiedEffect:(bool)arg1;
- (void)setValue:(long long)arg1;
- (bool)shouldIgnoreForegroundColor;
- (bool)shouldRespectOutputBlending;
- (long long)state;
- (bool)useSimplifiedEffect;
- (long long)value;

@end
