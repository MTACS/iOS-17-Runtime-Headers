
@interface ICCollaborationAnalyticsTrackerInternal : NSObject {
    void delegate;
    void shareAnalyticsQueue;
    void trackedShareMetrics;
    void trackedShareMetricsObservers;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)removeShareTrackingForNote:(id)arg1;
- (void)saveActivityType:(id)arg1 isCollaborationSelected:(bool)arg2 error:(id)arg3 completed:(bool)arg4 forNote:(id)arg5;
- (void)saveNewShare:(id)arg1 forNote:(id)arg2;
- (void)trackShare:(id)arg1 forNote:(id)arg2;

@end
