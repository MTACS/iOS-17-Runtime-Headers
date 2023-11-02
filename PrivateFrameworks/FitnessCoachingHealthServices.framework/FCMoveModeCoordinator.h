
@interface FCMoveModeCoordinator : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HDProfileReadyObserver> {
    NSDateComponents * _birthDateComponents;
    FCCDateProvider * _dateProvider;
    <FCMoveModeCoordinatorDelegate> * _delegate;
    bool  _isWheelchairUser;
    HDKeyValueDomain * _keyValueDomain;
    HKCategorySample * _mostRecentActivityMoveModeChangeSample;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _serviceQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FCMoveModeCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_birthdayForAge:(long long)arg1;
- (id)_dateByAddingNumberOfWeeks:(long long)arg1 toDate:(id)arg2;
- (id)_dateForKey:(id)arg1;
- (double)_delay;
- (id)_lastGraduationNotificationDate;
- (id)_lastModeChangeNotificationDate;
- (id)_lastWheelchairModeChangeNotificationDate;
- (long long)_nextActivityMoveModeForNotificationType:(long long)arg1;
- (id)_nextActivityMoveModeStartDateForNotificationType:(long long)arg1;
- (long long)_queue_determineActivityMoveModeNotificationType;
- (bool)_queue_loadBirthDateComponents;
- (bool)_queue_loadMoveModeChangeSample;
- (bool)_queue_loadWheelchairUse;
- (void)_queue_scheduleNotificationIfNeeded;
- (void)_saveMoveModeChangeSampleForActivityMoveMode:(long long)arg1 date:(id)arg2;
- (void)_setBirthDateComponents:(id)arg1;
- (void)_setDate:(id)arg1 forKey:(id)arg2;
- (void)_setLastGraduationNotificationDate:(id)arg1;
- (void)_setLastModeChangeNotificationDate:(id)arg1;
- (void)_setLastWheelchairModeChangeNotificationDate:(id)arg1;
- (void)_setMostRecentActivityMoveModeChangeSample:(id)arg1;
- (void)_setUpgradeToMoveTimeNotificationDate:(id)arg1;
- (void)_setisWheelchairUser:(bool)arg1;
- (void)_significantTimeChangeOccurred;
- (id)_tuesdayAfterDate:(id)arg1;
- (id)_tuesdayBeforeDate:(id)arg1;
- (id)_upgradeToMoveTimeNotificationDate;
- (void)_userCharacteristicsDidChange;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithDateProvider:(id)arg1 profile:(id)arg2 serviceQueue:(id)arg3;
- (id)keyValueDomain;
- (void)notificationPosted:(id)arg1 error:(id)arg2;
- (void)profileDidBecomeReady:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
