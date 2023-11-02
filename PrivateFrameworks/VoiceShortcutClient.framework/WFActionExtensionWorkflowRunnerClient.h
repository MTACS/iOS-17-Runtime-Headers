
@interface WFActionExtensionWorkflowRunnerClient : WFWorkflowRunnerClient {
    NSDictionary * _javaScriptRunners;
}

@property (nonatomic, copy) NSDictionary *javaScriptRunners;

- (void).cxx_destruct;
- (id)initWithWorkflowIdentifier:(id)arg1 input:(id)arg2 javaScriptRunners:(id)arg3;
- (id)javaScriptRunners;
- (void)setJavaScriptRunners:(id)arg1;

@end
