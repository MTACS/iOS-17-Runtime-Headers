
@interface HDHeartbeatSeriesFeatureStatusManager : NSObject <HKFeatureStatusProvidingObserver> {
    HKFeatureStatusManager * _aFibBurdenFeatureStatusManager;
    <HDHeartbeatSeriesFeatureStatusManagerDelegate> * _delegate;
    NSUserDefaults * _heartNotificationsUserDefaults;
    HKFeatureStatusManager * _irregularRhythmNotificationsFeatureStatusManager;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notifyDelegateOfCurrentState;
- (void)featureStatusProviding:(id)arg1 didUpdateFeatureStatus:(id)arg2;
- (void)getPredominantFeatureWithCompletion:(id /* block */)arg1;
- (id)initWithClient:(id)arg1;
- (id)initWithProfile:(id)arg1 aFibBurdenFeatureStatusManager:(id)arg2 irregularRhythmNotificationsFeatureStatusManager:(id)arg3 heartNotificationsUserDefaults:(id)arg4;
- (void)notifyDelegateOfCurrentState;
- (id)predominantFeatureWithError:(id*)arg1;
- (void)startObservingChangesWithDelegate:(id)arg1;
- (void)stopObservingChanges;

@end
