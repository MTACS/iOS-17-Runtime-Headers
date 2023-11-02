
@protocol WorkflowUI.AddToSiriSwiftHostingViewControllerDelegate

@required

- (void)addToSiriDidCancelWithViewController:(_TtC10WorkflowUI35AddToSiriSwiftHostingViewController *)arg1;
- (void)addToSiriWithViewController:(_TtC10WorkflowUI35AddToSiriSwiftHostingViewController *)arg1 createdShortcut:(WFWorkflow *)arg2;
- (void)addToSiriWithViewController:(_TtC10WorkflowUI35AddToSiriSwiftHostingViewController *)arg1 deletedShortcut:(WFWorkflow *)arg2;
- (void)addToSiriWithViewController:(_TtC10WorkflowUI35AddToSiriSwiftHostingViewController *)arg1 savedShortcut:(WFWorkflow *)arg2;

@end
