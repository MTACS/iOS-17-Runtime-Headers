
@interface WFSiriWorkflowRunRequest : WFWorkflowRunRequest {
    WFSiriWorkflowRunnerClientOptions * _options;
}

@property (nonatomic, retain) WFSiriWorkflowRunnerClientOptions *options;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (id)options;
- (void)setOptions:(id)arg1;

@end
