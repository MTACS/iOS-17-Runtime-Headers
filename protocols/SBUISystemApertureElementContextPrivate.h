
@protocol SBUISystemApertureElementContextPrivate <SBUISystemApertureElementContext>

@required

- (void)_conformsToSystemApertureElementContextPrivate;
- (void)addObserver:(id <SBUISystemApertureElementContextObserver>)arg1;
- (UIView *)containerView;
- (bool)isPresentationPossible;
- (UIView *)layoutGuideRootView;
- (long long)layoutMode;
- (void)removeObserver:(id <SBUISystemApertureElementContextObserver>)arg1;
- (void)setContainerView:(UIView *)arg1;
- (void)setSystemApertureElementProvider:(id <SBUISystemApertureElementProviding>)arg1;
- (void)setSystemApertureElementViewControllerProvider:(id <SBUISystemApertureElementProviding>)arg1;
- (UIViewController<SBUISystemApertureElement> *)systemApertureElement;
- (<SBUISystemApertureElementProviding> *)systemApertureElementProvider;
- (<SBUISystemApertureElementProviding> *)systemApertureElementViewControllerProvider;

@end
