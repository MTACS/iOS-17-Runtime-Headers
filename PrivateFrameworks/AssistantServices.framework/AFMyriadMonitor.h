
@interface AFMyriadMonitor : NSObject <AFNotifyObserverDelegate> {
    AFNotifyObserver * _beginObserver;
    AFQueue * _completions;
    AFWatchdogTimer * _fetchRepostedMyriadDecisionTimer;
    bool  _ignoreMyriadEvents;
    bool  _ignoreRepostMyriadNotification;
    AFInstanceContext * _instanceContext;
    bool  _isMonitoring;
    bool  _isRegisteredForMyriadEventNotification;
    AFNotifyObserver * _lostObserver;
    double  _myriadEventMonitorTimeout;
    NSObject<OS_dispatch_queue> * _myriadMonitorQueue;
    AFNotifyObserver * _repostedWonObserver;
    long long  _state;
    AFWatchdogTimer * _timer;
    AFNotifyObserver * _wonObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)_cancelRepostedMyriadDecisionTimer;
- (void)_clear;
- (void)_dequeueBlocksWithSignal:(long long)arg1;
- (void)_deregisterFromMyriadEventNotifications;
- (void)_deregisterFromRepostedDecisionResultsObservers;
- (void)_enqueueBlock:(id /* block */)arg1 forReason:(id)arg2;
- (id)_fetchCurrentMyriadDecisionWithWaitTime:(double)arg1;
- (void)_flushCompletions:(bool)arg1;
- (void)_ignoreRepostMyriadNotification:(bool)arg1;
- (id)_myriadStateToString:(long long)arg1;
- (void)_registerForMyriadEvents;
- (void)_resultSeenWithValue:(bool)arg1;
- (void)_setDecisionIsPending;
- (void)dealloc;
- (void)dequeueBlocksWaitingForMyriadDecision;
- (bool)didWin;
- (void)ignoreMyriadEvents:(bool)arg1;
- (id)init;
- (bool)isMonitoring;
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)notifyObserver:(id)arg1 didReceiveNotificationWithToken:(int)arg2;
- (void)startMonitoringWithTimeoutInterval:(double)arg1;
- (void)startMonitoringWithTimeoutInterval:(double)arg1 instanceContext:(id)arg2;
- (void)stopMonitoring;
- (void)waitForMyriadDecisionForReason:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)waitForMyriadDecisionWithCompletion:(id /* block */)arg1;

@end
