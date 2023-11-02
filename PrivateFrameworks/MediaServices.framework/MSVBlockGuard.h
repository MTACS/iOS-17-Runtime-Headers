
@interface MSVBlockGuard : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _didTimeout;
    bool  _disarmed;
    id /* block */  _interruptionHandler;
    MSVTimer * _timeoutTimer;
}

- (void).cxx_destruct;
- (void)_interruptWithReason:(long long)arg1;
- (void)dealloc;
- (bool)disarm;
- (id)init;
- (id)initWithDeallocHandler:(id /* block */)arg1;
- (id)initWithTimeout:(double)arg1;
- (id)initWithTimeout:(double)arg1 interruptionHandler:(id /* block */)arg2;

@end
