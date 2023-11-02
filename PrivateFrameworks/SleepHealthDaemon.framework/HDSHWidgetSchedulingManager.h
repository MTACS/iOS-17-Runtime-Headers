
@interface HDSHWidgetSchedulingManager : NSObject <HDDataObserver, HDHealthDaemonReadyObserver> {
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HKSPThrottler * _reloadThrottler;
    INRelevantShortcutStore * _shortcutStore;
    HKSPSleepStore * _sleepStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_logSleepSampleStatistics:(id)arg1;

- (void).cxx_destruct;
- (void)_donateRelevanceShortcuts;
- (void)_reloadWidgetsWithReasons:(unsigned long long)arg1;
- (void)_startObservingSleep;
- (void)_stopObservingSleep;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;

@end
