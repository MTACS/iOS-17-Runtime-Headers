
@interface MDLPhysicallyPlausibleLight : MDLLight {
    float  _attenuationEndDistance;
    float  _attenuationFalloffExponent;
    float  _attenuationStartDistance;
    float  _innerConeAngle;
    float  _lumens;
    float  _outerConeAngle;
}

@property (nonatomic) float attenuationEndDistance;
@property (nonatomic) float attenuationFalloffExponent;
@property (nonatomic) float attenuationStartDistance;
@property (nonatomic) struct CGColor { }*color;
@property (nonatomic) float innerConeAngle;
@property (nonatomic) float lumens;
@property (nonatomic) float outerConeAngle;

- (float)attenuationEndDistance;
- (float)attenuationFalloffExponent;
- (float)attenuationStartDistance;
- (struct CGColor { }*)color;
- (id)init;
- (float)innerConeAngle;
- (float)lumens;
- (float)outerConeAngle;
- (void)setAttenuationEndDistance:(float)arg1;
- (void)setAttenuationFalloffExponent:(float)arg1;
- (void)setAttenuationStartDistance:(float)arg1;
- (void)setColor:(struct CGColor { }*)arg1;
- (void)setColorByTemperature:(float)arg1;
- (void)setInnerConeAngle:(float)arg1;
- (void)setLumens:(float)arg1;
- (void)setOuterConeAngle:(float)arg1;

@end
