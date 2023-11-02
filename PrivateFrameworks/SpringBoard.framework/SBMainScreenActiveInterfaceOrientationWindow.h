
@interface SBMainScreenActiveInterfaceOrientationWindow : SBWindow <BSDescriptionProviding, SBUIActiveOrientationObserver> {
    UIViewController * _contentViewController;
    NSString * _debugName;
    NSCountedSet * _orientationUpdateDisableReasons;
    bool  _passesTouchesThrough;
}

@property (setter=setContentViewController:, nonatomic, retain) UIViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSString *debugName;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool passesTouchesThrough;
@property (readonly) Class superclass;

+ (bool)_traitsArbiterOrientationActuationEnabled;
+ (id)_traitsArbiterOrientationActuationRole;
+ (bool)layoutContentViewControllerWithConstraints;
+ (bool)sb_autorotates;

- (void).cxx_destruct;
- (bool)_canBecomeKeyWindow;
- (void)_updateInterfaceOrientationToCurrentActiveInterfaceOrientationWithDuration:(double)arg1;
- (void)_updateSupportedInterfaceOrientationsForTraitArbiterActuationIfNeeded;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (id)contentViewController;
- (id)debugName;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)disableInterfaceOrientationChangesForReason:(id)arg1;
- (unsigned long long)effectiveRootViewControllerSupportedInterfaceOrientations;
- (void)enableInterfaceOrientationChangesForReason:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithRole:(id)arg1 debugName:(id)arg2;
- (id)initWithWindowScene:(id)arg1 role:(id)arg2 debugName:(id)arg3;
- (bool)isActive;
- (bool)isDisablingInterfaceOrientationChanges;
- (bool)passesTouchesThrough;
- (id)rootViewController;
- (void)setContentViewController:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setPassesTouchesThrough:(bool)arg1;
- (void)setRootViewController:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
