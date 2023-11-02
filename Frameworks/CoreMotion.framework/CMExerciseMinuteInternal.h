
@interface CMExerciseMinuteInternal : NSObject {
    NSObject<OS_dispatch_queue> * fAppQueue;
    id /* block */  fHandler;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    void * fLocationdConnection;
    CMExerciseMinuteData * fMostRecentRecord;
    bool  fStartedUpdates;
}

- (void)_queryExerciseMinutesFromRecord:(id)arg1 handler:(id /* block */)arg2;
- (void)_startUpdatesFromRecord:(id)arg1 handler:(id /* block */)arg2;
- (void)_startUpdatesWithHandler:(id /* block */)arg1;
- (void)_stopUpdates;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end
