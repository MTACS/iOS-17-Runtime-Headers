
@protocol HUQuickControlPresentationCoordinatorDelegate <NSObject>

@required

- (bool)hasDetailsActionForPresentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 item:(HFItem *)arg2;
- (void)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 applyOverrideAttributes:(HUControllableCollectionViewLayoutOverrideAttributes *)arg2 toItem:(HFItem *)arg3;
- (void)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 clearOverrideAttributesForItem:(HFItem *)arg2;
- (HUQuickControlPresentationContext *)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 contextForPresentationAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint { double x1; double x2; })arg2 view:(UIView *)arg3;
- (UITraitCollection *)traitCollectionForPresentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1;

@optional

- (<HUOpenURLHandling> *)detailViewURLHandlerForPresentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1;
- (UIViewController<HUDetailsPresentationDelegateHost> *)detailsViewControllerForPresentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 item:(HFItem *)arg2;
- (long long)preferredModalPresentationStyleForPresentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1;
- (void)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 didBeginPresentationWithContext:(HUQuickControlPresentationContext *)arg2;
- (void)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 didEndPresentationWithContext:(HUQuickControlPresentationContext *)arg2;
- (void)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 didRecognizeTapForItem:(HFItem *)arg2 tappedArea:(NSString *)arg3;
- (bool)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 shouldBeginLongPressPresentationWithContext:(HUQuickControlPresentationContext *)arg2;
- (bool)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 shouldBeginPresentationWithContext:(HUQuickControlPresentationContext *)arg2;
- (void)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 touchDidBeginForItem:(HFItem *)arg2 tappedArea:(NSString *)arg3;
- (void)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 touchDidEndForItem:(HFItem *)arg2 tappedArea:(NSString *)arg3;
- (void)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 willBeginPresentationWithContext:(HUQuickControlPresentationContext *)arg2;
- (void)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 willEndPresentationWithContext:(HUQuickControlPresentationContext *)arg2;
- (void)presentationCoordinatorDidCancelDismissalTransition:(HUQuickControlPresentationCoordinator *)arg1;
- (bool)presentationCoordinatorShouldDisablePullToUnlockSettings:(HUQuickControlPresentationCoordinator *)arg1;
- (bool)presentationCoordinatorShouldProvideCancellationFeedback:(HUQuickControlPresentationCoordinator *)arg1;
- (void)presentationCoordinatorWillBeginTransition:(HUQuickControlPresentationCoordinator *)arg1 presenting:(bool)arg2;
- (void)presentationCoordinatorWillEndTransition:(HUQuickControlPresentationCoordinator *)arg1 presenting:(bool)arg2;
- (bool)shouldOverrideTraitCollectionForPresentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1;

@end
