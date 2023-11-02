
@interface MobileTimerSupport.MTTimerSessionsProvider : MobileTimerSupport.MTBaseSessionsProvider {
    void activities;
    void serializerQueue;
}

- (void).cxx_destruct;
- (id)activityIdForTimerIdWithTimerId:(id)arg1;
- (id)alertingSessionId;
- (void)createSessionWithContext:(id)arg1 completion:(id /* block */)arg2 forAlert:(bool)arg3;
- (void)finishSessionWithTimerId:(id)arg1 completion:(id /* block */)arg2;
- (bool)hasActiveTimerSession;
- (id)init;
- (long long)numberOfActiveSessions;
- (void)restoreSessionsWithCompletion:(id /* block */)arg1;
- (void)updateSessionWithContext:(id)arg1 completion:(id /* block */)arg2;

@end
