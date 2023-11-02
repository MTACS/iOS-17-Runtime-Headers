
@protocol WorkflowEditor.WorkflowEditorViewDelegate

@required

- (void)appendAction:(WFAction *)arg1 selectionAware:(bool)arg2;
- (void)insertAction:(WFAction *)arg1 at:(long long)arg2;
- (void)insertActions:(NSArray *)arg1 at:(long long)arg2;
- (void)moveActionsFrom:(NSIndexSet *)arg1 to:(NSIndexSet *)arg2;
- (void)removeActions:(NSArray *)arg1 mode:(long long)arg2;

@end
