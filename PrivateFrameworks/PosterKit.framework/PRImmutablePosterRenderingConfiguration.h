
@interface PRImmutablePosterRenderingConfiguration : PRPosterRenderingConfiguration {
    bool  _depthEffectDisabled;
    bool  _parallaxEnabled;
}

- (id)initWithDepthEffectDisabled:(bool)arg1 parallaxEnabled:(bool)arg2;
- (bool)isDepthEffectDisabled;
- (bool)isParallaxEnabled;

@end
