
@protocol SBPIPContainerViewControllerInteractionObserver <NSObject>

@required

- (void)containerViewControllerDidBeginInteraction:(SBPIPContainerViewController *)arg1;
- (void)containerViewControllerDidEndInteraction:(SBPIPContainerViewController *)arg1 targetWindowScene:(SBWindowScene *)arg2;

@end
