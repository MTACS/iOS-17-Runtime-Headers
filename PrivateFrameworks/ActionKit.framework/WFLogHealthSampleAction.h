
@interface WFLogHealthSampleAction : WFAction {
    NSDate * _currentDate;
}

@property (nonatomic, retain) NSDate *currentDate;

- (void).cxx_destruct;
- (id)appIdentifier;
- (id)currentDate;
- (id)dateForParameterValueWithKey:(id)arg1 error:(id*)arg2;
- (void)forceUpdateSelectedUnit;
- (id)generatedResourceNodes;
- (void)handleWithCategoryType:(id)arg1;
- (void)handleWithQuantityType:(id)arg1;
- (void)initializeParameters;
- (id)localizedSmartPromptUsageSentenceWithcontentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (id)outputContentClasses;
- (id)parametersRequiringUserInputAlongsideParameter:(id)arg1;
- (void)resourceAvailabilityChanged;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)saveObject:(id)arg1 withObjectType:(id)arg2 item:(id)arg3;
- (void)setCurrentDate:(id)arg1;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)updateParameterStates;
- (void)wasAddedToWorkflow:(id)arg1;
- (void)wasRemovedFromWorkflow:(id)arg1;

@end
