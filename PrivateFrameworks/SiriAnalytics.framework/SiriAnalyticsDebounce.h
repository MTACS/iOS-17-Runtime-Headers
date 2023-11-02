
@interface SiriAnalyticsDebounce : NSObject {
    double  _debounceInterval;
    NSObject<OS_dispatch_source> * _debounceTimer;
    <SiriAnalyticsDebounceDelegate> * _delegate;
    bool  _hasMaximumInterval;
    double  _maximumInterval;
    NSObject<OS_dispatch_source> * _maximumTimer;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_debounceFired;
- (void)_pulse;
- (void)_reset;
- (void)_timedOut;
- (void)cancel;
- (id)initWithDebounceInterval:(double)arg1 maximumInterval:(double)arg2 queue:(id)arg3 delegate:(id)arg4;
- (id)initWithDebounceInterval:(double)arg1 queue:(id)arg2 delegate:(id)arg3;
- (void)pulse;

@end
