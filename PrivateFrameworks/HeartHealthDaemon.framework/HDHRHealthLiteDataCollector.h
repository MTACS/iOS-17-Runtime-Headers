
@interface HDHRHealthLiteDataCollector : NSObject <HDDataCollector, HDDiagnosticObject, HDHealthDaemonReadyObserver, HDHeartRateDataCollector> {
    HDBradycardiaDataAggregator * _bradycardiaAggregator;
    HDDataCollectorConfiguration * _bradycardiaCollectionConfiguration;
    HDDataCollectorState * _bradycardiaCollectionState;
    CMCatherineFeeder * _catherineFeeder;
    HDHeartRateDataAggregator * _heartRateAggregator;
    HDDataCollectorConfiguration * _heartRateCollectionConfiguration;
    HDDataCollectorState * _heartRateCollectionState;
    bool  _heartRateEnabledInPrivacy;
    HDDeviceEntity * _localDeviceEntity;
    int  _privacyPreferencesNotificationToken;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HDTachycardiaDataAggregator * _tachycardiaAggregator;
    HDDataCollectorConfiguration * _tachycardiaCollectionConfiguration;
    HDDataCollectorState * _tachycardiaCollectionState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_assertionManagerStateChanged:(id)arg1;
- (void)_queue_createHealthLiteManager;
- (bool)_queue_hasHeartRateClientsWithoutWorkouts;
- (void)_queue_privacyPreferencesDidChange;
- (bool)_queue_shouldStreamReducedRateHeartRateUpdates;
- (void)_queue_updateAllCollectionTypes;
- (void)_queue_updateBradycardiaCollectionType;
- (void)_queue_updateHeartRateCollectionType;
- (void)_queue_updateTachycardiaCollectionType;
- (void)_registerPowerLogEvent:(id)arg1;
- (void)_setCatherineFeeder:(id)arg1;
- (void)_startObservingAssertionManagerChanges;
- (void)_startObservingCurrentWorkoutChanges;
- (void)_workoutManagerStateDidChange;
- (void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2;
- (void)daemonReady:(id)arg1;
- (void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2;
- (void)dataCollector:(id)arg1 didCollectHeartRate:(id)arg2 device:(id)arg3 source:(id)arg4;
- (void)dealloc;
- (id)deviceForDataAggregator:(id)arg1;
- (id)diagnosticDescription;
- (id)identifierForDataAggregator:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)sourceForDataAggregator:(id)arg1;

@end
