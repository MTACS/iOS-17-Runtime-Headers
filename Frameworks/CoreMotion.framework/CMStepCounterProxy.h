
@interface CMStepCounterProxy : NSObject {
    NSObject<OS_dispatch_queue> * fInternalQueue;
    void * fLocationdConnection;
    long long  fPrevStepCount;
    bool  fStartedUpdates;
    long long  fStepCountFromStart;
}

- (void)_handleQueryResponse:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1 onQueue:(id)arg2 withHandler:(id /* block */)arg3;
- (void)_queryStepCountStartingFromInternal:(id)arg1 to:(id)arg2 toQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (void)_startStepCountingUpdatesToQueue:(id)arg1 updateOn:(long long)arg2 withHandler:(id /* block */)arg3;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end
