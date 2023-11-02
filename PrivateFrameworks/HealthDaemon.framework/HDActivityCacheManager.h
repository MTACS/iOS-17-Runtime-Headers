
@interface HDActivityCacheManager : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HDProfileReadyObserver> {
    HKCategoryType * _activityMoveModeChangeType;
    bool  _activityMoveModeIsSet;
    NSSet * _allQuantityTypes;
    bool  _cacheIndicesAreSet;
    HKQuantityType * _calorieGoalType;
    NSTimeZone * _currentTimeZone;
    HDActivityCacheDataSource * _dataSource;
    NSDate * _dateOverride;
    HKQuantityType * _exerciseGoalType;
    bool  _existingActivityCachesAreSet;
    HKActivityCache * _existingTodayActivityCache;
    HKActivityCache * _existingYesterdayActivityCache;
    NSMutableDictionary * _goalsByIndex;
    bool  _hasSubscribedToSignificantTimeChangeNotifications;
    HDSourceEntity * _localDeviceSourceEntity;
    HKQuantityType * _moveMinuteGoalType;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    int  _rebuildCacheNotificationToken;
    _HKDelayedOperation * _rebuildCachesOperation;
    HKQuantityType * _standGoalType;
    NSTimeZone * _timeZoneOverride;
    long long  _todayActivityCacheIndex;
    HKCategorySample * _todayActivityMoveModeChangeSample;
    NSDateInterval * _todayDateInterval;
    HKHeartRateSummary * _todayHeartRateSummary;
    long long  _tomorrowActivityCacheIndex;
    _HKDelayedOperation * _updateCachesOperation;
    long long  _wheelchairUse;
    long long  _yesterdayActivityCacheIndex;
    HKCategorySample * _yesterdayActivityMoveModeChangeSample;
    NSDateInterval * _yesterdayDateInterval;
    HKHeartRateSummary * _yesterdayHeartRateSummary;
}

@property (readonly) NSCalendar *calendar;
@property (nonatomic, readonly) HKActivityCache *currentActivityCache;
@property (nonatomic, retain) NSDate *dateOverride;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSTimeZone *timeZoneOverride;
@property (nonatomic, readonly) HKActivityCache *yesterdayActivityCache;

- (void).cxx_destruct;
- (void)_didReceiveSignificantTimeChangeNotification;
- (void)_userCharacteristicsDidChangeNotification:(id)arg1;
- (void)accessStatisticsBuilderWithCacheIndex:(long long)arg1 handler:(id /* block */)arg2;
- (void)addActivityCacheObserver:(id)arg1;
- (id)calendar;
- (id)currentActivityCache;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (id)dateOverride;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)profileDidBecomeReady:(id)arg1;
- (void)removeActivityCacheObserver:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(id /* block */)arg3;
- (void)setDateOverride:(id)arg1;
- (void)setTimeZoneOverride:(id)arg1;
- (id)timeZoneOverride;
- (id)yesterdayActivityCache;

@end
