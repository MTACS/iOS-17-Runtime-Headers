
@protocol HUQuickControlPresentationHost <HUItemManagerContainer>

@required

- (void)childViewController:(UIViewController<HUQuickControlPresentationHost> *)arg1 didEndQuickControlsPresentation:(HUQuickControlPresentationCoordinator *)arg2;
- (void)childViewController:(UIViewController<HUQuickControlPresentationHost> *)arg1 willBeginQuickControlsPresentation:(HUQuickControlPresentationCoordinator *)arg2;

@end
