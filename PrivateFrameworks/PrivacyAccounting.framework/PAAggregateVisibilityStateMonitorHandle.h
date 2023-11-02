
@interface PAAggregateVisibilityStateMonitorHandle : NSObject <PAProcessStateMonitoringDelegate, PAProcessStateMonitoringEnding> {
    long long  _currentState;
    <PAAggregateVisibilityStateMonitorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    <PAProcessStateMonitoringEnding> * _rawHandle;
    bool  _startupPeriodElapsed;
    NSObject<OS_dispatch_source> * _startupTimer;
    NSMutableDictionary * _states;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)bindToRawHandle:(id)arg1;
- (id)initWithStartupInterval:(double)arg1 onQueue:(id)arg2 delegate:(id)arg3;
- (void)invalidate;
- (void)recomputeCurrentState;
- (void)setVisibilityState:(long long)arg1 forBundleID:(id)arg2;
- (void)startupIntervalExpired;

@end
