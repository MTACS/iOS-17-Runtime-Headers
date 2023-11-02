
@protocol PRSceneClientSettings

@required

- (bool)pr_didFinishInitialization;
- (bool)pr_isDepthEffectDisabled;
- (bool)pr_isParallaxEnabled;
- (BSColor *)pr_statusBarTintColor;
- (PRTimeDescriptor *)pr_timeDescriptor;
- (BSUIVibrancyConfiguration *)pr_vibrancyConfiguration;

@end
