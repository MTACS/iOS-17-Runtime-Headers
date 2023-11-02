
@protocol SBSystemApertureElementOrientationObserving <NSObject>

@required

- (void)elementOrientationDidChangeWithTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg1;

@optional

- (<SBSystemApertureElementOrientationAuthority> *)elementOrientationAuthority;
- (void)setElementOrientationAuthority:(id <SBSystemApertureElementOrientationAuthority>)arg1;

@end
