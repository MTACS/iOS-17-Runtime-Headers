
@interface PRMutablePosterRenderingConfiguration : PRPosterRenderingConfiguration {
    bool  _depthEffectDisabled;
    bool  _parallaxEnabled;
}

@property (getter=isDepthEffectDisabled, nonatomic) bool depthEffectDisabled;
@property (getter=isParallaxEnabled, nonatomic) bool parallaxEnabled;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithDepthEffectDisabled:(bool)arg1 parallaxEnabled:(bool)arg2;
- (bool)isDepthEffectDisabled;
- (bool)isParallaxEnabled;
- (void)setDepthEffectDisabled:(bool)arg1;
- (void)setParallaxEnabled:(bool)arg1;

@end
