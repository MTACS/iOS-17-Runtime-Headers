
@interface MNNavigationState : NSObject {
    double  _locationUpdateInterval;
    MNNavigationStateManager * _stateManager;
    double  _suggestionUpdateFrequency;
}

@property (nonatomic, readonly) MNLocationProviderCLParameters *clParameters;
@property (nonatomic, readonly) unsigned long long desiredLocationProviderType;
@property (nonatomic, readonly) double locationUpdateInterval;
@property (nonatomic, readonly) bool requiresHighMemoryThreshold;
@property (nonatomic, readonly) bool requiresLocationAccess;
@property (nonatomic, readonly) bool shouldClearStoredRoutes;
@property (nonatomic, readonly) MNSimulationLocationProvider *simulationLocationProvider;
@property (nonatomic, readonly) MNNavigationStateManager *stateManager;
@property (nonatomic, readonly) double suggestionUpdateFrequency;
@property (nonatomic, readonly) MNNavigationTraceManager *traceManager;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (bool)_isSelectorValidForForwarding:(SEL)arg1;
- (void)changeUserOptions:(id)arg1;
- (id)clParameters;
- (void)dealloc;
- (unsigned long long)desiredLocationProviderType;
- (void)enterState;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)initWithStateManager:(id)arg1;
- (void)leaveState;
- (double)locationUpdateInterval;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)postEnterState;
- (void)preEnterState;
- (bool)requiresHighMemoryThreshold;
- (bool)requiresLocationAccess;
- (bool)respondsToSelector:(SEL)arg1;
- (bool)shouldClearStoredRoutes;
- (id)simulationLocationProvider;
- (id)stateManager;
- (double)suggestionUpdateFrequency;
- (id)traceManager;
- (unsigned long long)type;

@end
