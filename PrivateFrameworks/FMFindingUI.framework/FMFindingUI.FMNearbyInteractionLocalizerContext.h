
@interface FMFindingUI.FMNearbyInteractionLocalizerContext : NSObject <ARSessionDelegate, NIInternalSessionDelegate> {
    void activity;
    void applicationIsInBackground;
    void arSession;
    void backgroundTaskID;
    void connectionContext;
    void decrementNISessionHandler;
    void error;
    void findable;
    void findingTechnology;
    void hasCalledConfigure;
    void incrementNISessionHandler;
    void itemLocalizerState;
    void itemState;
    void niConfiguration;
    void niSession;
    void subscriptions;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)session:(id)arg1 didDiscoverNearbyObject:(id)arg2;
- (void)session:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)session:(id)arg1 didRemoveNearbyObjects:(id)arg2 withReason:(long long)arg3;
- (void)session:(id)arg1 didUpdateAlgorithmConvergence:(id)arg2 forObject:(id)arg3;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)session:(id)arg1 didUpdateNearbyObjects:(id)arg2;
- (void)session:(id)arg1 object:(id)arg2 didUpdateRegion:(id)arg3 previousRegion:(id)arg4;
- (void)session:(id)arg1 suspendedWithReason:(long long)arg2;
- (void)session:(id)arg1 suspensionReasonEnded:(long long)arg2 isNoLongerSuspended:(bool)arg3;
- (bool)sessionShouldAttemptRelocalization:(id)arg1;

@end
