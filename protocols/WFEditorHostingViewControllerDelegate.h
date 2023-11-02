
@protocol WFEditorHostingViewControllerDelegate

@required

- (void)actionsDidChangeInEditorHostingViewController:(WFEditorHostingViewController *)arg1;
- (void)editorHostingViewController:(WFEditorHostingViewController *)arg1 didChangeRunningState:(bool)arg2 fractionCompleted:(double)arg3 isWaiting:(bool)arg4;
- (void)editorHostingViewController:(WFEditorHostingViewController *)arg1 didChangeVariablePickingState:(bool)arg2;
- (void)editorHostingViewControllerDidFinishRunning:(WFEditorHostingViewController *)arg1 cancelled:(bool)arg2;

@end
