
@interface HKNavigationController : UINavigationController <HKInternalSettingsGestureHandler, UINavigationControllerDelegate> {
    UIGestureRecognizer * _internalSettingsGestureRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIGestureRecognizer *internalSettingsGestureRecognizer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)horizontalSizeClassDidChangeWithTraitEnvironment:(id)arg1 previousTraitCollection:(id)arg2;
- (id)internalSettingsGestureRecognizer;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)onInternalSettingsGesture;
- (void)reparentViewControllerIfNecessaryWithTraitCollection:(id)arg1 previousTraitCollection:(id)arg2;
- (void)setInternalSettingsGestureRecognizer:(id)arg1;
- (void)updateTraits;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
