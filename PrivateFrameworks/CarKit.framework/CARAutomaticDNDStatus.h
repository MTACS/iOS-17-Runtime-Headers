
@interface CARAutomaticDNDStatus : NSObject {
    unsigned long long  _cachedAutomaticDNDActiveState;
    NSXPCConnection * _connection;
    id /* block */  _exitConfirmationChangeObserver;
    id /* block */  _statusChangeObserver;
}

@property (nonatomic, readonly) unsigned long long cachedAutomaticDNDActiveState;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, copy) id /* block */ exitConfirmationChangeObserver;
@property (nonatomic, copy) id /* block */ statusChangeObserver;

+ (id)_DNDServiceInterface;
+ (bool)isAutomaticDNDAvailable;

- (void).cxx_destruct;
- (void)_detachObservers;
- (void)_dndStateChanged:(bool)arg1;
- (void)_exitConfirmationStateChanged:(bool)arg1;
- (void)_performCARPreferencesBlock:(id /* block */)arg1 forReading:(bool)arg2;
- (void)_resetUserDNDSettingsWithReply:(id /* block */)arg1;
- (void)_setupConnection;
- (void)_xpcFetchWithServiceBlock:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)allowedAutoReplyAudience:(id /* block */)arg1;
- (void)autoReplyMessageWithReply:(id /* block */)arg1;
- (unsigned long long)automaticDNDTriggeringMethod;
- (unsigned long long)cachedAutomaticDNDActiveState;
- (id)connection;
- (void)dealloc;
- (void)disableDNDUntilEndOfDriveWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)disableDNDUntilEndOfDriveWithReply:(id /* block */)arg1;
- (id)disableTimerTimestamp;
- (id /* block */)exitConfirmationChangeObserver;
- (void)fetchAutomaticDNDAssertionWithReply:(id /* block */)arg1;
- (void)fetchAutomaticDNDExitConfirmationWithReply:(id /* block */)arg1;
- (void)fetchAutomaticDNDTriggerPreferenceWithReply:(id /* block */)arg1;
- (id)firstBuddyPresentationFirstMoment;
- (bool)hasAdjustedTriggerMethod;
- (bool)hasCompletedFirstRidePreference;
- (bool)hasMigratedToDriving;
- (bool)hasOptedOutOfAutomaticDND;
- (bool)hasStartedFirstRidePreference;
- (id)init;
- (bool)isAutomaticDNDInternalDNDBuddyPreference;
- (bool)isAutomaticDNDInternalExitConfirmationOverrideEnabledPreference;
- (bool)isAutomaticDNDInternalForceOverrideEnabledPreference;
- (bool)isAutomaticDNDInternalShowGeofencingAlertsEnabledPreference;
- (bool)isAutomaticDNDInternalShowUserAlertsEnabledPreference;
- (double)mostRecentTriggerMethodChange;
- (bool)platformSupportsSendingAutoReplies;
- (bool)platformSupportsUrgentMessages;
- (void)setActivateWithCarPlay:(bool)arg1;
- (void)setAllowedAutoReplyAudience:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)setAutoReplyMessage:(id)arg1 reply:(id /* block */)arg2;
- (void)setAutomaticDNDActive:(bool)arg1 withReply:(id /* block */)arg2;
- (void)setAutomaticDNDInternalDNDBuddyEnabledPreference:(bool)arg1;
- (void)setAutomaticDNDInternalExitConfirmationOverrideEnabledPreference:(bool)arg1;
- (void)setAutomaticDNDInternalForceOverrideEnabledPreference:(bool)arg1;
- (void)setAutomaticDNDInternalShowGeofencingAlertsEnabledPreference:(bool)arg1;
- (void)setAutomaticDNDInternalShowUserAlertsEnabledPreference:(bool)arg1;
- (void)setAutomaticDNDTriggerPreference:(unsigned long long)arg1 withReply:(id /* block */)arg2;
- (void)setAutomaticDNDTriggeringMethod:(unsigned long long)arg1;
- (void)setCompletedFirstRidePreference:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setDisableTimerTimestamp:(id)arg1;
- (void)setExitConfirmationChangeObserver:(id /* block */)arg1;
- (void)setFirstBuddyPresentationFirstMoment:(id)arg1;
- (void)setHasAdjustedTriggerMethod:(bool)arg1;
- (void)setHasMigratedToDriving:(bool)arg1;
- (void)setMostRecentTriggerMethodChange:(double)arg1;
- (void)setOptedOutOfAutomaticDND:(bool)arg1;
- (void)setStartedFirstRidePreference:(bool)arg1;
- (void)setStatusChangeObserver:(id /* block */)arg1;
- (bool)shouldActivateWithCarPlay;
- (id /* block */)statusChangeObserver;

@end
