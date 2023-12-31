
@interface AWEventStatistics : NSObject {
    NSDate * _lastLogDate;
    unsigned long long  _lastLogTime;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _stats;
    NSObject<OS_dispatch_source> * _timer;
    bool  _timerResumed;
}

+ (id)sharedStatistics;

- (void).cxx_destruct;
- (id)init;
- (void)logEvent:(unsigned long long)arg1;

@end
