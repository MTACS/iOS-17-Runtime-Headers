
@interface WFRemoteExecutionRunRequestWorkflow : WFWorkflow {
    NSString * _workflowID;
}

@property (nonatomic, retain) NSString *workflowID;

- (void).cxx_destruct;
- (void)setWorkflowID:(id)arg1;
- (id)workflowID;

@end
