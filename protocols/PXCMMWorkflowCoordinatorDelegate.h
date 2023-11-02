
@protocol PXCMMWorkflowCoordinatorDelegate <NSObject>

@optional

- (long long)shareOriginForSession:(PXCMMSession *)arg1 workflowCoordinator:(PXCMMWorkflowCoordinator *)arg2;
- (void)workflowCoordinator:(PXCMMWorkflowCoordinator *)arg1 didPublishToURL:(NSURL *)arg2;
- (void)workflowCoordinator:(PXCMMWorkflowCoordinator *)arg1 workflowViewController:(UIViewController *)arg2 didFinishSession:(PXCMMSession *)arg3 withActivityState:(unsigned long long)arg4;

@end