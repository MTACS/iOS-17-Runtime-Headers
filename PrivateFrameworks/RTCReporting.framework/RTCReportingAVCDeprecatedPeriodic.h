
@interface RTCReportingAVCDeprecatedPeriodic : NSObject {
    int  _counter;
    NSMutableDictionary * _periodicServiceDict;
    NSObject<OS_dispatch_queue> * _periodicTaskQueue;
    NSObject<OS_dispatch_queue> * _queue;
    RTCReporting * _session;
    NSObject<OS_dispatch_source> * _timer;
}

- (void)_myPeriodicTask:(unsigned short)arg1 type:(unsigned short)arg2 intervalMultiplier:(int)arg3 updateTimeout:(unsigned long long)arg4;
- (void)dealloc;
- (id)initWithSession:(id)arg1;
- (bool)registerPeriodicTaskForModule:(unsigned int)arg1 needToUpdate:(bool)arg2 needToReport:(bool)arg3 serviceBlock:(id /* block */)arg4;
- (void)startLogTimerWithInterval:(int)arg1 reportingMultiplier:(int)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4;
- (void)stopLogTimer;
- (bool)unregisterPeriodTaskForModule:(unsigned int)arg1;

@end
