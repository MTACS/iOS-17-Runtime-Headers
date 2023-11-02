
@interface WRWorkflowEventTracker : NSObject {
    NSMutableArray * _allSignpostTrackersMutable;
    NSMutableArray * _candidateEndSignpostTrackers;
    id /* block */  _eventCompletionCallback;
    NSMutableArray * _openIndividuatedIntervalsWithMatchingEndSignpostOutsideEvent;
    WRTimestampAndThread * _overallIntervalStart;
    WRSignpost * _startSignpost;
    WRWorkflow * _workflow;
}

@property (readonly) NSArray *allSignpostTrackers;
@property (readonly) NSMutableDictionary *environment;
@property (readonly) WRWorkflow *workflow;

- (void).cxx_destruct;
- (id)allSignpostTrackers;
- (id)debugDescription;
- (id)environment;
- (void)handleSignpost:(id)arg1;
- (bool)inMiddleOfEvent;
- (id)initWithWorkflow:(id)arg1 eventCompletionCallback:(id /* block */)arg2;
- (void)reset;
- (id)workflow;

@end
