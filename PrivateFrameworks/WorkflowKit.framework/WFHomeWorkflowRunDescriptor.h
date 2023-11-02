
@interface WFHomeWorkflowRunDescriptor : WFWorkflowRunDescriptor {
    WFHomeWorkflow * _homeWorkflow;
}

@property (nonatomic, readonly) WFHomeWorkflow *homeWorkflow;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)createWorkflowWithEnvironment:(long long)arg1 database:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)homeWorkflow;
- (id)initWithCoder:(id)arg1;
- (id)initWithHomeWorkflow:(id)arg1;
- (id)workflowFileDataWithDatabase:(id)arg1 error:(id*)arg2;

@end
