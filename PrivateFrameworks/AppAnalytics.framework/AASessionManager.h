
@interface AASessionManager : NSObject <AAFlushable> {
    void processorManager;
    void sessionManager;
    void tracker;
}

@property (nonatomic, readonly) AAProcessorManager *processorManager;
@property (nonatomic, readonly) AATracker *tracker;

- (void).cxx_destruct;
- (void)endSession;
- (void)endSessionWithCompletion:(id /* block */)arg1;
- (void)endSessionWithEndDate:(id)arg1 completion:(id /* block */)arg2;
- (void)endSync;
- (void)flushWithCallbackQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithAccessQueue:(id)arg1;
- (id)initWithAccessQueue:(id)arg1 privacyValidationProvider:(id)arg2;
- (id)initWithPrivacyValidationProvider:(id)arg1;
- (id)processorManager;
- (void)pushSessionData:(id)arg1;
- (void)pushSessionData:(id)arg1 submitEventQueues:(bool)arg2;
- (void)pushSessionData:(id)arg1 traits:(id)arg2;
- (void)pushSessionData:(id)arg1 traits:(id)arg2 submitEventQueues:(bool)arg3;
- (void)startSessionForKind:(long long)arg1 withName:(id)arg2;
- (void)startSessionForKind:(long long)arg1 withName:(id)arg2 identifier:(id)arg3;
- (void)startSessionForKind:(long long)arg1 withName:(id)arg2 identifier:(id)arg3 startDate:(id)arg4;
- (void)startSessionForKind:(long long)arg1 withName:(id)arg2 identifier:(id)arg3 startDate:(id)arg4 timestampJitter:(id)arg5;
- (void)startSessionForKind:(long long)arg1 withName:(id)arg2 startDate:(id)arg3;
- (id)tracker;
- (void)transaction:(id /* block */)arg1;

@end
