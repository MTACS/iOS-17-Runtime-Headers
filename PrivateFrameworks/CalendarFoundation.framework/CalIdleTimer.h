
@interface CalIdleTimer : NSObject {
    unsigned long long  _leewayInSeconds;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _timeoutBlock;
    unsigned long long  _timeoutInSeconds;
    NSObject<OS_dispatch_source> * _timer;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithQueue:(id)arg1 timeoutInSeconds:(unsigned long long)arg2 leewayInSeconds:(unsigned long long)arg3 timeoutBlock:(id /* block */)arg4;
- (void)poke;
- (void)start;

@end
