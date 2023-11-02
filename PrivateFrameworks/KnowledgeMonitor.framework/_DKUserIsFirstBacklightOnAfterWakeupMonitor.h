
@interface _DKUserIsFirstBacklightOnAfterWakeupMonitor : _DKMonitor <_DKHistoricalMonitor, _DKInstantMonitor, _DKNotificationReceiver> {
    bool  _FirstWakeUINotificationEnabled;
    bool  _SoftwareUpdateUINotificationEnabled;
    bool  _enabled;
    int  displayStatusNotifyToken;
    NSDateInterval * eligibleForNotification;
    int  internalSettingChangedNotificationToken;
}

@property (nonatomic) bool FirstWakeUINotificationEnabled;
@property (nonatomic) bool SoftwareUpdateUINotificationEnabled;
@property (nonatomic, readonly) _DKEvent *currentEvent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ historicalHandler;
@property (nonatomic, copy) id /* block */ instantHandler;
@property (nonatomic, readonly) NSDate *lastUpdate;
@property (nonatomic, copy) id /* block */ shutdownHandler;
@property (readonly) Class superclass;

+ (id)eventStream;
+ (id)fetchMostRecentPastEventForStream:(id)arg1;
+ (id)fetchMostRecentlyStoredScreenLockEventOnlyIfValueIsUnlocked;
+ (id)prettyPrintDateAsLocalTime:(id)arg1;

- (void).cxx_destruct;
- (bool)FirstWakeUINotificationEnabled;
- (bool)SoftwareUpdateUINotificationEnabled;
- (id)convertUTCToLocalTimeString:(id)arg1;
- (void)deactivate;
- (void)dealloc;
- (bool)didQualifyingScreenLockEndInEligibilityPeriod;
- (bool)eligibleForFirstWakeUINotification;
- (id)firstWakeupEventWithValue:(bool)arg1;
- (id)getNextSWUpdatePrediction;
- (void)handleBacklightTurnedOffEvent;
- (void)handleBacklightTurnedOnEvent;
- (void)handleScreenUnlockEvent;
- (bool)isFirstBacklightOn;
- (bool)isInternalBuild;
- (bool)isUINotificationEnabledForKey:(id)arg1;
- (void)receiveNotificationEvent:(id)arg1;
- (void)recordFirstWakeup:(id)arg1;
- (void)registerHandleBacklightEvents;
- (void)setFirstWakeUINotificationEnabled:(bool)arg1;
- (void)setInternalSettingsChangedNotficationHandler;
- (void)setSoftwareUpdateUINotificationEnabled:(bool)arg1;
- (void)setUINotificationEligibility;
- (void)setupNotificationEligiblityPeriod;
- (void)showFirstWakeupUINotification;
- (void)showSoftwareUpdateUINotification;
- (void)showUINotification:(id)arg1;
- (void)start;
- (void)stop;
- (void)unregisterHandleBacklightEvents;

@end
