
@interface CMNatalimeterInternal : NSObject {
    id /* block */  fHandler;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    void * fLocationdConnection;
    bool  fStartedUpdates;
}

- (void)_handleQueryResponse:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1 withHandler:(id /* block */)arg2;
- (unsigned long long)_promptsNeeded;
- (void)_queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(id /* block */)arg2;
- (void)_queryAbsoluteNatalimetryDataSinceRecord:(long long)arg1 withHandler:(id /* block */)arg2;
- (void)_startAbsoluteNatalimetryDataUpdatesWithHandler:(id /* block */)arg1;
- (void)_stopAbsoluteNatalimetryDataUpdates;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end
