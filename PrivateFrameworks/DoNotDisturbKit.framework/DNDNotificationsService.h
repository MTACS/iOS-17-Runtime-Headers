
@interface DNDNotificationsService : NSObject <ATXActivitySuggestionClientObserver, DNDSettingsUpdateListener, DNDStateUpdateListener, UNUserNotificationCenterDelegate> {
    ATXActivitySuggestionClient * _activitySuggestionClient;
    bool  _basicActive;
    bool  _clockBedtimeActive;
    DNDBehaviorSettings * _currentBehaviorSettings;
    DNDState * _currentState;
    bool  _doNotDisturbActive;
    bool  _drivingActive;
    DNDModeAssertionService * _notificationsAssertionService;
    UNUserNotificationCenter * _notificationsCenter;
    DNDModeConfigurationService * _notificationsModeConfigurationService;
    DNDSettingsService * _notificationsSettingsService;
    DNDStateService * _notificationsStateService;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _settingsBedtimeActive;
    bool  _sleepActive;
    NSDate * _transitionDate;
    unsigned long long  _transitionLifetimeType;
    bool  _windDownActive;
    bool  _workoutActive;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_modeConfigurationForIdentifier:(id)arg1;
- (id)_modeForIdentifier:(id)arg1;
- (void)_setModeConfiguration:(id)arg1;
- (void)activitySuggestionClient:(id)arg1 didSuggestSettingUpActivity:(id)arg2;
- (void)activitySuggestionClient:(id)arg1 didSuggestTriggersForConfiguredActivity:(id)arg2;
- (id)initWithClientIdentifier:(id)arg1;
- (void)resume;
- (void)settingsService:(id)arg1 didReceiveUpdatedBehaviorSettings:(id)arg2;
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
