
@interface WFWorkflowEnvironmentResource : WFResource <WFWorkflowReferencing> {
    WFWorkflow * _workflow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) WFWorkflow *workflow;

+ (bool)mustBeAvailableForDisplay;

- (void).cxx_destruct;
- (void)refreshAvailability;
- (void)setWorkflow:(id)arg1;
- (id)workflow;
- (bool)workflowEnvironmentIsValid;

@end
