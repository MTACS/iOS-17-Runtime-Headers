
@interface MNNavigationStateRoutePreview : MNNavigationState {
    MNNavigationSessionManager * _navigationSessionManager;
    NSArray * _previewRoutes;
    unsigned long long  _selectedRouteIndex;
}

- (void).cxx_destruct;
- (unsigned long long)desiredLocationProviderType;
- (void)enterState;
- (id)initWithStateManager:(id)arg1 previewRoutes:(id)arg2 selectedRouteIndex:(unsigned long long)arg3;
- (void)leaveState;
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;
- (bool)requiresHighMemoryThreshold;
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
- (bool)shouldClearStoredRoutes;
- (id)simulationLocationProvider;
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(id /* block */)arg2;
- (void)stopNavigationWithReason:(unsigned long long)arg1;
- (id)traceManager;
- (unsigned long long)type;

@end
