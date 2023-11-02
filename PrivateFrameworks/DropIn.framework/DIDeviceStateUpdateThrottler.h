
@interface DIDeviceStateUpdateThrottler : NSObject {
    void cancellable;
    void queue;
    void subject;
    void throttleTimeInterval;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleState:(long long)arg1 reason:(id)arg2 handler:(id /* block */)arg3;
- (id)init;
- (id)initWithThrottleTimeInterval:(double)arg1;

@end
