
@protocol PRMutableSceneClientSettings <PRSceneClientSettings>

@required

- (bool)pr_didFinishInitialization;
- (bool)pr_isDepthEffectDisabled;
- (bool)pr_isParallaxEnabled;
- (void)pr_setDepthEffectDisabled:(bool)arg1;
- (void)pr_setDidFinishInitialization:(bool)arg1;
- (void)pr_setParallaxEnabled:(bool)arg1;
- (void)pr_setStatusBarTintColor:(BSColor *)arg1;
- (void)pr_setTimeDescriptor:(PRTimeDescriptor *)arg1;
- (void)pr_setVibrancyConfiguration:(BSUIVibrancyConfiguration *)arg1;
- (BSColor *)pr_statusBarTintColor;
- (PRTimeDescriptor *)pr_timeDescriptor;
- (BSUIVibrancyConfiguration *)pr_vibrancyConfiguration;

@end
