
@interface WFLogWorkoutAction : WFAction {
    HKWorkoutBuilder * _builder;
    unsigned long long  _currentState;
}

@property (nonatomic, retain) HKWorkoutBuilder *builder;
@property unsigned long long currentState;

- (void).cxx_destruct;
- (void)addSamples:(id)arg1;
- (id)appIdentifier;
- (void)beginCollection:(id)arg1;
- (id)builder;
- (unsigned long long)currentState;
- (void)endCollection:(id)arg1;
- (void)finishWorkout:(id)arg1;
- (id)localizedSmartPromptUsageSentenceWithcontentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (void)logWorkoutContinue:(id)arg1;
- (void)resourceAvailabilityChanged;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)setBuilder:(id)arg1;
- (void)setCurrentState:(unsigned long long)arg1;
- (void)wasAddedToWorkflow:(id)arg1;
- (void)wasRemovedFromWorkflow:(id)arg1;

@end
