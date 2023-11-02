
@interface HDSPIDSServiceManager : NSObject <HDSPEnvironmentAware, HDSPIDSServiceDelegate, HDSPNotificationObserver, HDSPSleepActionObserver, HDSPSleepModeObserver, HDSPSource> {
    <HDSPIDSService> * _cloudService;
    HDSPEnvironment * _environment;
    <HDSPIDSService> * _localService;
}

@property (nonatomic, readonly) <HDSPIDSService> *cloudService;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool dontNotify;
@property (nonatomic, readonly) bool dontSync;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HDSPIDSService> *localService;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (readonly) Class superclass;

+ (id)_allowedMessageClasses;
+ (void)_sendMessage:(id)arg1 onService:(id)arg2;

- (void).cxx_destruct;
- (void)_handleConfirmWakeUpMessage:(id)arg1;
- (void)_handleDismissGoodMorningMessage:(id)arg1;
- (void)_handleNotifiedForEarlyWakeUpMessage:(id)arg1;
- (void)_handleReceivedMessage:(id)arg1;
- (void)_handleSetSleepModeMessage:(id)arg1;
- (void)_handleSleepAlarmDismissedMessage:(id)arg1;
- (void)_handleSleepAlarmSnoozedMessage:(id)arg1;
- (void)_handleTestMessage:(id)arg1;
- (bool)_shouldHandleMessageFromService:(id)arg1;
- (bool)_shouldSendCloudMessage:(id)arg1;
- (bool)_shouldSyncAlarmMessageFromSource:(unsigned long long)arg1;
- (bool)_shouldSyncMessage;
- (bool)_shouldSyncSleepModeWithReason:(unsigned long long)arg1;
- (id)cloudService;
- (bool)dontSync;
- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (void)goodMorningWasDismissed;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 localService:(id)arg2 cloudService:(id)arg3;
- (id)localService;
- (id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2;
- (void)sendMessage:(id)arg1;
- (void)sendNotifiedForEarlyWakeUpMessage;
- (void)sendTestIDSMessage;
- (void)service:(id)arg1 didReceiveMessage:(id)arg2;
- (void)sleepModeDidChange:(long long)arg1 previousMode:(long long)arg2 reason:(unsigned long long)arg3;
- (id)sourceIdentifier;
- (void)wakeNotificationWasConfirmed;
- (void)wakeUpAlarmWasDismissedFromSource:(unsigned long long)arg1;
- (void)wakeUpAlarmWasSnoozedFromSource:(unsigned long long)arg1;

@end
