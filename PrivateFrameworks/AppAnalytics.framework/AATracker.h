
@interface AATracker : NSObject {
    void eventMirrorStore;
    void identifier;
    void name;
    void tracker;
}

@property (nonatomic, readonly) NSArray *debugPath;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *path;

- (void).cxx_destruct;
- (id)chainWithName:(id)arg1;
- (id)chainWithName:(id)arg1 identifier:(id)arg2;
- (void)clearStack:(Class)arg1;
- (void)clearStackEventType:(Class)arg1 includeParentTrackers:(bool)arg2;
- (id)debugPath;
- (id)delayedSubmitEventType:(Class)arg1;
- (id)delayedSubmitEventType:(Class)arg1 completion:(id /* block */)arg2;
- (id)delayedSubmitEventType:(Class)arg1 onlyIfTimed:(bool)arg2;
- (id)delayedSubmitEventType:(Class)arg1 onlyIfTimed:(bool)arg2 completion:(id /* block */)arg3;
- (id)delayedSubmitRawEvent:(id)arg1;
- (id)delayedSubmitRawEvent:(id)arg1 completion:(id /* block */)arg2;
- (id)delayedSubmitRawEvent:(id)arg1 onlyIfTimed:(bool)arg2;
- (id)delayedSubmitRawEvent:(id)arg1 onlyIfTimed:(bool)arg2 completion:(id /* block */)arg3;
- (void)dynamicTransactionWithIdentifier:(id)arg1 block:(id /* block */)arg2;
- (void)enterGroup;
- (void)enterGroupWithName:(id)arg1;
- (void)enterGroupWithName:(id)arg1 contentType:(long long)arg2;
- (void)explicitSubmitEvent:(Class)arg1 onlyIfTimed:(bool)arg2 submitTime:(id)arg3;
- (void)explicitSubmitEvent:(Class)arg1 onlyIfTimed:(bool)arg2 submitTime:(id)arg3 completion:(id /* block */)arg4;
- (void)explicitSubmitEvent:(Class)arg1 submitTime:(id)arg2;
- (void)explicitSubmitEvent:(Class)arg1 submitTime:(id)arg2 completion:(id /* block */)arg3;
- (void)explicitSubmitRawEvent:(id)arg1 onlyIfTimed:(bool)arg2 submitTime:(id)arg3;
- (void)explicitSubmitRawEvent:(id)arg1 onlyIfTimed:(bool)arg2 submitTime:(id)arg3 completion:(id /* block */)arg4;
- (void)explicitSubmitRawEvent:(id)arg1 submitTime:(id)arg2;
- (void)explicitSubmitRawEvent:(id)arg1 submitTime:(id)arg2 completion:(id /* block */)arg3;
- (id)identifier;
- (void)ifSession:(id /* block */)arg1;
- (id)init;
- (void)leaveGroup;
- (id)name;
- (id)onSessionChangeWithBlock:(id /* block */)arg1;
- (id)path;
- (void)popDataEventByName:(id)arg1;
- (void)popDataEventType:(Class)arg1;
- (void)pushDataEvent:(id)arg1 traits:(id)arg2 file:(id)arg3 line:(long long)arg4;
- (void)registerDataEventType:(Class)arg1 block:(id /* block */)arg2;
- (void)removeSessionObserversForObject:(id)arg1;
- (void)resume;
- (void)submitEventType:(Class)arg1;
- (void)submitEventType:(Class)arg1 completion:(id /* block */)arg2;
- (void)submitEventType:(Class)arg1 onlyIfTimed:(bool)arg2;
- (void)submitEventType:(Class)arg1 onlyIfTimed:(bool)arg2 completion:(id /* block */)arg3;
- (void)submitRawEvent:(id)arg1;
- (void)submitRawEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)submitRawEvent:(id)arg1 onlyIfTimed:(bool)arg2;
- (void)submitRawEvent:(id)arg1 onlyIfTimed:(bool)arg2 completion:(id /* block */)arg3;
- (void)suspend;
- (void)timeEventType:(Class)arg1;
- (void)timeEventType:(Class)arg1 startTime:(id)arg2;
- (void)timeEventType:(Class)arg1 submitAndRestartWithSession:(bool)arg2;
- (void)timeEventType:(Class)arg1 submitAndRestartWithSession:(bool)arg2 startTime:(id)arg3;
- (void)timeRawEvent:(id)arg1;
- (void)timeRawEvent:(id)arg1 startTime:(id)arg2;
- (void)timeRawEvent:(id)arg1 submitAndRestartWithSession:(bool)arg2;
- (void)timeRawEvent:(id)arg1 submitAndRestartWithSession:(bool)arg2 startTime:(id)arg3;
- (void)transactionWithBlock:(id /* block */)arg1;
- (void)whenSession:(id /* block */)arg1;

@end
