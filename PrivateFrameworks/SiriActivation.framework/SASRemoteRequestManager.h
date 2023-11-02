
@interface SASRemoteRequestManager : NSObject {
    INAppIntentDeliverer * _currentAppIntentDeliverer;
    long long  _currentPocketState;
    unsigned long long  _currentVoiceTriggerRestriction;
    bool  _hasPendingVoiceTriggerActivation;
    AFRequestInfo * _pendingVoiceTriggerActivationInfo;
    unsigned long long  _pendingVoiceTriggerRestrictionCount;
    CMPocketStateManager * _pocketStateManager;
    AFRemoteRequestWatcher * _remoteRequestWatcher;
}

@property (nonatomic, retain) INAppIntentDeliverer *currentAppIntentDeliverer;
@property (nonatomic) long long currentPocketState;
@property (nonatomic) unsigned long long currentVoiceTriggerRestriction;
@property (nonatomic) bool hasPendingVoiceTriggerActivation;
@property (nonatomic, retain) AFRequestInfo *pendingVoiceTriggerActivationInfo;
@property (nonatomic) unsigned long long pendingVoiceTriggerRestrictionCount;
@property (nonatomic, retain) CMPocketStateManager *pocketStateManager;
@property (nonatomic, retain) AFRemoteRequestWatcher *remoteRequestWatcher;

+ (id)manager;
+ (id)new;

- (void).cxx_destruct;
- (long long)_dismissalReasonForDeactivationReason:(long long)arg1;
- (void)_handleNewRemoteRequestWithInfo:(id)arg1;
- (void)_handlePendingVoiceTriggerActivationsWithInfo:(id)arg1;
- (void)_handleRemotePrewarmWithInfo:(id)arg1;
- (void)_handleRemoteRequestDismissalWithReason:(long long)arg1 options:(unsigned long long)arg2 analyticsContext:(id)arg3;
- (void)_handleRequestWatcherVoiceTriggerRequestWithInfo:(id)arg1;
- (id)_init;
- (void)_processPendingVoiceTriggerActivationsWithInfo:(id)arg1 delay:(double)arg2;
- (bool)_requestWatcherVoiceActivationEnabled;
- (void)_startFetchingPocketStateUpdates;
- (id)currentAppIntentDeliverer;
- (long long)currentPocketState;
- (unsigned long long)currentVoiceTriggerRestriction;
- (bool)hasPendingVoiceTriggerActivation;
- (id)init;
- (id)pendingVoiceTriggerActivationInfo;
- (unsigned long long)pendingVoiceTriggerRestrictionCount;
- (id)pocketStateManager;
- (id)remoteRequestWatcher;
- (void)setCurrentAppIntentDeliverer:(id)arg1;
- (void)setCurrentPocketState:(long long)arg1;
- (void)setCurrentVoiceTriggerRestriction:(unsigned long long)arg1;
- (void)setHasPendingVoiceTriggerActivation:(bool)arg1;
- (void)setPendingVoiceTriggerActivationInfo:(id)arg1;
- (void)setPendingVoiceTriggerRestrictionCount:(unsigned long long)arg1;
- (void)setPocketStateManager:(id)arg1;
- (void)setRemoteRequestWatcher:(id)arg1;

@end
