
@interface _HDFTMProducerMetricTracker : NSObject {
    bool  _metricAvailable;
    bool  _paused;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _timeoutHandler;
    _HKExpiringCompletionTimer * _timer;
}

- (void).cxx_destruct;

@end
