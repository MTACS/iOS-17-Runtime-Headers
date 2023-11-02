
@interface HDHeartRateWidgetDataManager : NSObject <HDDataObserver, HDHealthDaemonReadyObserver> {
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _queue_reloadReason;
    _HKDelayedOperation * _reloadOperation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_reloadWidgets;
- (void)_reloadWidgetsWithReason:(long long)arg1;
- (void)_startObservingHeartRateSamples;
- (void)_stopObservingHeartRateSamples;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;

@end
