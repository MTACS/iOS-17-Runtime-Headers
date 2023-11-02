
@protocol WFEditorViewControllerDelegate <NSObject>

@required

- (void)actionsDidChangeInEditorViewController:(WFEditorViewController *)arg1;
- (void)editorViewController:(WFEditorViewController *)arg1 didChangeRunningState:(bool)arg2 fractionCompleted:(double)arg3 isWaiting:(bool)arg4;
- (void)editorViewController:(WFEditorViewController *)arg1 didChangeVariablePickingState:(bool)arg2;
- (void)editorViewControllerDidFinishRunning:(WFEditorViewController *)arg1 cancelled:(bool)arg2;

@end
