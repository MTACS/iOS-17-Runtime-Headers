
@protocol PXCMMWorkflowPresenting <NSObject>

@required

- (void)cancelWorkflow;
- (NSObject<PXAnonymousViewController> *)workflowViewControllerWithContext:(PXCMMContext *)arg1;

@end
