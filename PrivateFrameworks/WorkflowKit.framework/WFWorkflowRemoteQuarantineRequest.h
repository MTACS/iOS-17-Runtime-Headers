
@interface WFWorkflowRemoteQuarantineRequest : WFBaseRemoteQuarantineRequest {
    NSDictionary * _workflowJavaScriptCoreRepresentation;
    WFWorkflowRecord * _workflowRecord;
}

@property (nonatomic, copy) NSDictionary *workflowJavaScriptCoreRepresentation;
@property (nonatomic, readonly) WFWorkflowRecord *workflowRecord;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)defaultLocalizedDeniedErrorMessage;
- (id)defaultLocalizedDeniedErrorTitle;
- (id)initWithWorkflowRecord:(id)arg1;
- (id)javaScriptCoreRepresentationWithError:(id*)arg1;
- (id)policyFunctionName;
- (void)setWorkflowJavaScriptCoreRepresentation:(id)arg1;
- (id)workflowJavaScriptCoreRepresentation;
- (id)workflowJavaScriptCoreRepresentationWithError:(id*)arg1;
- (id)workflowName;
- (id)workflowRecord;

@end
