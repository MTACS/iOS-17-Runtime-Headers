
@protocol WFWorkflowStorage <NSObject>

@required

- (bool)reloadRecord:(WFWorkflowRecord *)arg1 withReference:(WFWorkflowReference *)arg2 error:(id*)arg3;
- (bool)saveRecord:(WFWorkflowRecord *)arg1 withReference:(WFWorkflowReference *)arg2 error:(id*)arg3;

@end
