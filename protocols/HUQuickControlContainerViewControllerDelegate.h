
@protocol HUQuickControlContainerViewControllerDelegate <NSObject>

@required

- (UIViewController<HUDetailsPresentationDelegateHost> *)detailsViewControllerForQuickControlViewController:(HUQuickControlContainerViewController *)arg1 item:(HFItem *)arg2;
- (bool)hasDetailsActionForQuickControlViewController:(HUQuickControlContainerViewController *)arg1 item:(HFItem *)arg2;
- (HUApplier *)quickControlViewController:(HUQuickControlContainerViewController *)arg1 applierForSourceViewTransitionWithAnimationSettings:(HUAnimationSettings *)arg2 presenting:(bool)arg3;
- (double)quickControlViewController:(HUQuickControlContainerViewController *)arg1 sourceViewInitialScaleForPresentation:(bool)arg2;
- (void)quickControlViewControllerDidTapDetailsButton:(HUQuickControlContainerViewController *)arg1;
- (void)quickControlViewControllerWillDismissDetailsViewController:(HUQuickControlContainerViewController *)arg1 shouldDismissQuickControl:(bool)arg2;

@end
