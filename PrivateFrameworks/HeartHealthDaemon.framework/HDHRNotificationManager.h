
@interface HDHRNotificationManager : NSObject <HDDataObserver, HDHealthDaemonReadyObserver> {
    NSMutableArray * _fakingNotifyTokens;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_queue_fakeCardioFitnessNotificationWithData:(bool)arg1 repeat:(bool)arg2 error:(id*)arg3;
- (void)_queue_fakeNotificationWithEventType:(id)arg1 withData:(bool)arg2;
- (void)_queue_showNotificationForHeartEvent:(id)arg1;
- (void)_subscribeToFakingNotification:(id)arg1 type:(id)arg2 withData:(bool)arg3;
- (void)_subscribeToFakingNotifications;
- (void)_unsubscribeToFakingNotifications;
- (id)_userNotificationCenter;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;

@end
