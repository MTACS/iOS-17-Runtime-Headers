
@interface SBElasticBrightnessViewController : SBElasticValueViewController {
    long long  _activeBrightnessRoute;
    long long  _debugOverrideBrightnessRoute;
}

- (void)_debugHandleNextRoute;
- (void)_debugHandleResetRoute;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1;
- (unsigned long long)layoutAxisForInterfaceOrientation:(long long)arg1;
- (id)log;
- (void)noteContinuousValueInteractionDidEnd;
- (void)noteContinuousValueInteractionWillBegin;
- (id)sliderAccessibilityIdentifier;
- (bool)updateActiveRouteDisplay:(out id*)arg1;
- (void)viewDidLoad;

@end
