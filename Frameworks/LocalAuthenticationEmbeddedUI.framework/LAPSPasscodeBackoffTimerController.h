
@interface LAPSPasscodeBackoffTimerController : NSObject {
    id /* block */  _completionHandler;
    long long  _timeout;
    NSObject<OS_dispatch_source> * _timer;
    id /* block */  _updateHandler;
}

- (void).cxx_destruct;
- (void)_startTimerWithTimeout:(long long)arg1;
- (id)initWithTimeout:(long long)arg1 updateHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)start;

@end
