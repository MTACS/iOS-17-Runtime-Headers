
@protocol WFWorkflowEditingDelegate <NSObject>

@required

- (void)workflow:(WFWorkflow *)arg1 insertActions:(NSArray *)arg2 atIndexes:(NSIndexSet *)arg3;
- (void)workflow:(WFWorkflow *)arg1 moveActionsAtIndexes:(NSIndexSet *)arg2 toIndexes:(NSIndexSet *)arg3;
- (void)workflow:(void *)arg1 removeAction:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: WFWorkflow *, WFAction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
