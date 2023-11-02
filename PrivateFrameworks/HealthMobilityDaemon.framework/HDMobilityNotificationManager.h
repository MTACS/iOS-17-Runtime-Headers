
@interface HDMobilityNotificationManager : NSObject <HDDataObserver, HDHealthDaemonReadyObserver> {
    HKMobilityWalkingSteadinessAnalyticsManager * _analyticsManager;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_showNotificationForLocalSteadinessEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;

@end
