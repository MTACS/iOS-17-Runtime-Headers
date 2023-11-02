
@protocol CCUIModularControlCenterOverlayViewControllerDelegate <NSObject>

@required

- (void)controlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1 wantsHostStatusBarHidden:(bool)arg2;
- (double)reachabilityOffsetForControlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1;
- (<UIViewSpringAnimationBehaviorDescribing> *)reachabilitySpringAnimationBehaviorForControlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1;

@optional

- (void)controlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1 didChangePresentationState:(unsigned long long)arg2;
- (void)controlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1 didUpdateHomeGestureDismissalAllowed:(bool)arg2;
- (void)controlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1 significantPresentationProgressChange:(double)arg2;
- (void)controlCenterViewControllerDidBeginUserInteractionWithModule:(CCUIModularControlCenterOverlayViewController *)arg1;
- (void)controlCenterViewControllerDidFinishUserInteractionWithModule:(CCUIModularControlCenterOverlayViewController *)arg1;
- (void)didCloseExpandedModuleForControlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1;
- (void)willOpenExpandedModuleForControlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1;

@end
