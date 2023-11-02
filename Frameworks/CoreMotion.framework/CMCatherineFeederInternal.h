
@interface CMCatherineFeederInternal : NSObject {
    NSObject<OS_dispatch_queue> * fInternalQueue;
    void * fLocationdConnection;
}

- (void)_feedCatherine:(double)arg1 confidence:(double)arg2 timestamp:(double)arg3;
- (void)_startDaemonConnection;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end
