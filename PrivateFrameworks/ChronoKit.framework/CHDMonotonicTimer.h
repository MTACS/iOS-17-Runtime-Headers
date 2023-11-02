
@interface CHDMonotonicTimer : NSObject {
    NSObject<OS_dispatch_source> * _timer;
}

- (void).cxx_destruct;
- (void)activateWithTime:(unsigned long long)arg1 repeat:(long long)arg2 block:(id /* block */)arg3;
- (void)invalidate;

@end
