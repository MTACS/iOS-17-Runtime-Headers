
@interface WFWorkflowTypeResource : WFResource <WFWorkflowReferencing> {
    WFWorkflow * _workflow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) WFWorkflow *workflow;

+ (bool)mustBeAvailableForDisplay;

- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)refreshAvailability;
- (void)setWorkflow:(id)arg1;
- (id)workflow;
- (bool)workflowTypesAreValid;

@end
