
@interface HFAccessorySettingMobileTimerAdapter : HFAccessorySettingAdapter {
    NAFuture * _alarmManagerForSynchronizationFuture;
    COAlarmManager * _coordinationAlarmManager;
    NSMutableSet * _internalAlarmsBeingAdded;
    NSMutableSet * _internalAlarmsBeingRemoved;
    NSMutableSet * _internalAlarmsBeingUpdated;
    NSHashTable * _observers;
    NAFuture * _setupAccessoryAdapterModeFuture;
    NSUserDefaults * _soundBoardPrefs;
}

@property (nonatomic, readonly) HMAccessoryCollectionSetting *alarmCollectionSetting;
@property (nonatomic, retain) NAFuture *alarmManagerForSynchronizationFuture;
@property (nonatomic, readonly, copy) NSSet *alarmsWithPendingEdits;
@property (nonatomic, readonly) COAlarmManager *coordinationAlarmManager;
@property (nonatomic, readonly, copy) NSMutableSet *internalAlarmsBeingAdded;
@property (nonatomic, readonly, copy) NSMutableSet *internalAlarmsBeingRemoved;
@property (nonatomic, readonly, copy) NSMutableSet *internalAlarmsBeingUpdated;
@property (nonatomic, readonly) bool isAdapterReady;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, readonly) NAFuture *setupAccessoryAdapterModeFuture;
@property (nonatomic, readonly) bool shouldSynchronizeMobileTimerToHomeKit;
@property (nonatomic, retain) NSUserDefaults *soundBoardPrefs;

- (void).cxx_destruct;
- (void)_alarmWasAdded:(id)arg1;
- (void)_alarmWasDeleted:(id)arg1;
- (void)_alarmWasUpdated:(id)arg1;
- (id)_beginMonitoringSettingsKeyPath:(id)arg1;
- (void)_notifyObserversOfUpdates;
- (void)_respondToAlarmManagerUpdate;
- (void)_setupDebugHandler;
- (void)_submitAnalyticsForAddedAlarm:(id)arg1 success:(bool)arg2;
- (void)_submitAnalyticsForDeletedAlarm:(id)arg1 success:(bool)arg2;
- (void)_submitAnalyticsForUpdatedAlarm:(id)arg1 success:(bool)arg2;
- (id)_synchronizeHomeKitToMobileTimer;
- (id)_synchronizeMobileTimerToHomeKitWithChangeType:(unsigned long long)arg1;
- (id)addAlarm:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)alarmCollectionSetting;
- (id)alarmCollectionSettingFuture;
- (id)alarmManagerAlarms;
- (id)alarmManagerForSynchronizationFuture;
- (id)alarmSettingsCurrentItemsFuture;
- (id)alarmsWithPendingEdits;
- (id)allAlarms;
- (id)allAlarmsFuture;
- (id)coordinationAlarmManager;
- (void)homeKitSettingWasUpdated:(id)arg1 value:(id)arg2;
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(id /* block */)arg4;
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 updateHandler:(id /* block */)arg3;
- (id)initWithHomeKitSettingsVendor:(id)arg1 mode:(unsigned long long)arg2;
- (id)internalAlarmsBeingAdded;
- (id)internalAlarmsBeingRemoved;
- (id)internalAlarmsBeingUpdated;
- (bool)isAdapterReady;
- (id)observers;
- (id)removeAlarm:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setAlarmManagerForSynchronizationFuture:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setSoundBoardPrefs:(id)arg1;
- (id)setupAccessoryAdapterModeFuture;
- (bool)shouldSynchronizeMobileTimerToHomeKit;
- (id)soundBoardPrefs;
- (id)updateAlarm:(id)arg1;

@end
