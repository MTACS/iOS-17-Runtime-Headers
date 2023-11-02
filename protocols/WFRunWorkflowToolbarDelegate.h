
@protocol WFRunWorkflowToolbarDelegate <NSObject>

@optional

- (void)runToolbarPlayTapped:(WFRunWorkflowToolbar *)arg1;
- (void)runToolbarRedoTapped:(WFRunWorkflowToolbar *)arg1;
- (void)runToolbarSettingsTapped:(WFRunWorkflowToolbar *)arg1;
- (void)runToolbarShareTapped:(WFRunWorkflowToolbar *)arg1 sender:(UIBarButtonItem *)arg2;
- (void)runToolbarStopTapped:(WFRunWorkflowToolbar *)arg1;
- (void)runToolbarUndoTapped:(WFRunWorkflowToolbar *)arg1;

@end
