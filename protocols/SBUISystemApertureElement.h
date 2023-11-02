
@protocol SBUISystemApertureElement <NSObject>

@required

- (long long)activeLayoutMode;
- (long long)contentRole;
- (long long)maximumLayoutMode;
- (long long)preferredLayoutMode;
- (void)setActiveLayoutMode:(long long)arg1;

@optional

- (NSString *)associatedAppBundleIdentifier;
- (NSString *)associatedScenePersistenceIdentifier;
- (bool)attachedMinimalViewRequiresZeroPadding;
- (NSSet *)backgroundActivitiesToSuppress;
- (bool)canRequestAlertingAssertion;
- (UIView<SBUISystemApertureAccessoryView> *)detachedMinimalView;
- (NSString *)elementIdentifier;
- (UIColor *)keyColor;
- (BSAction *)launchAction;
- (NSURL *)launchURL;
- (UIView<SBUISystemApertureAccessoryView> *)leadingView;
- (UIView<SBUISystemApertureAccessoryView> *)minimalView;
- (unsigned long long)minimalViewLayoutAxis;
- (long long)minimumLayoutMode;
- (struct CGSize { double x1; double x2; })preferredCustomAspectRatio;
- (long long)preferredCustomLayout;
- (double)preferredHeightForBottomSafeArea;
- (unsigned long long)presentationBehaviors;
- (bool)preventsAutomaticDismissal;
- (bool)preventsInteractiveDismissal;
- (void)setCanRequestAlertingAssertion:(bool)arg1;
- (void)setMinimalViewLayoutAxis:(unsigned long long)arg1;
- (unsigned long long)statusBarStyleOverridesToSuppress;
- (UIView<SBUISystemApertureAccessoryView> *)trailingView;
- (void)viewWillLayoutSubviewsWithTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg1;

@end
