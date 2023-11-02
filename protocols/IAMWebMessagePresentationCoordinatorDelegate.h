
@protocol IAMWebMessagePresentationCoordinatorDelegate <NSObject>

@required

- (UIViewController *)viewControllerForModalPresentationUsingCoordinator:(IAMWebMessagePresentationCoordinator *)arg1;
- (void)webMessagePresentationCoordinatorWebMessageDidFail:(IAMWebMessagePresentationCoordinator *)arg1;
- (void)webMessagePresentationCoordinatorWebMessageDidFinishPresentation:(IAMWebMessagePresentationCoordinator *)arg1;
- (void)webMessagePresentationCoordinatorWebMessageDidLoad:(IAMWebMessagePresentationCoordinator *)arg1;
- (void)webMessagePresentationCoordinatorWebMessageDidReportEvent:(IAMWebMessagePresentationCoordinator *)arg1 event:(NSDictionary *)arg2;
- (void)webMessagePresentationCoordinatorWebMessageDidRequestAction:(IAMWebMessagePresentationCoordinator *)arg1 actionConfiguration:(NSDictionary *)arg2;

@end
