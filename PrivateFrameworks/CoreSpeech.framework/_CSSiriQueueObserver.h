
@interface _CSSiriQueueObserver : NSObject {
    AFHeartBeat * _heartBeat;
    double  _heartBeatInterval;
    unsigned long long  _numberOfOccurrences;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _timeoutHandler;
    double  _timeoutInterval;
}

- (void).cxx_destruct;
- (void)heartBeatFiredWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 heartBeatInterval:(double)arg2 timeoutInterval:(double)arg3 timeoutHandler:(id /* block */)arg4;
- (void)startWithQueue:(id)arg1;
- (void)stop;
- (void)timeoutDetected;

@end
