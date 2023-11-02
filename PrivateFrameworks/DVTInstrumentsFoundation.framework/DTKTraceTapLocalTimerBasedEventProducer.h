
@interface DTKTraceTapLocalTimerBasedEventProducer : NSObject <DTKTraceTapLocalEventProducer> {
    long long  _currentThermalState;
    NSObject<OS_dispatch_source> * _timer;
    int  _token;
    NSObject<OS_dispatch_queue> * _workQueue;
}

+ (bool)supportsConfig:(id)arg1;

- (void).cxx_destruct;
- (void)_emitThermalState:(long long)arg1 currentState:(long long)arg2;
- (unsigned long long)_processInfoThermalStateToCLTMPressureLevel:(long long)arg1;
- (void)dealloc;
- (id)init;
- (void)pause;
- (void)start;
- (void)stop;
- (void)unpause;

@end
