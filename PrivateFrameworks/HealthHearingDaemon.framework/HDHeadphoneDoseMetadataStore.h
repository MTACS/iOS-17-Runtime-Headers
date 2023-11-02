
@interface HDHeadphoneDoseMetadataStore : NSObject <HDProfileReadyObserver> {
    HDKeyValueDomain * _domain;
    double  _doseLimit;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDProfile * _profile;
    bool  _shouldLoadDoseLimitOverride;
}

@property (nonatomic, readonly) HKProfileIdentifier *_profileIdentifier;

+ (id)_earliestFireDateAllowedWithNow:(id)arg1;

- (void).cxx_destruct;
- (bool)_clearPreviousSevenDayLocalNotificationFireDateWithError:(id*)arg1;
- (bool)_clearPreviousSevenDayRemoteNotificationFireDateWithError:(id*)arg1;
- (id)_fetchDoseLimitInfoWithError:(id*)arg1;
- (id)_fetchPreviousSevenDayLocalNotificationFireDateWithError:(id*)arg1;
- (id)_fetchPreviousSevenDayLocalNotificationFireDateWithNow:(id)arg1 error:(id*)arg2;
- (id)_fetchPreviousSevenDayRemoteNotificationFireDateWithError:(id*)arg1;
- (id)_fetchPreviousSevenDayRemoteNotificationFireDateWithNow:(id)arg1 error:(id*)arg2;
- (id)_filterForValidateFireDate:(id)arg1 now:(id)arg2 error:(id*)arg3;
- (id)_info;
- (id)_infoForAccumulatedDoseAtFireDate:(id)arg1;
- (id)_infoForSevenDayDoseAtFireDate:(id)arg1;
- (id)_lock_fetchDoseLimitInfoWithError:(id*)arg1;
- (void)_lock_loadDoseLimitOverride;
- (void)_lock_loadDoseLimitOverrideIfNeeded;
- (id)_mostRecentSevenDayLocalNotificationWithNow:(id)arg1 error:(id*)arg2;
- (bool)_overrideDoseLimit:(id)arg1 error:(id*)arg2;
- (id)_profileIdentifier;
- (bool)_rebuildCachedFireDateFromLocalHAENStoreWithNow:(id)arg1 error:(id*)arg2;
- (bool)_setPreviousSevenDayLocalNotificationFireDate:(id)arg1 error:(id*)arg2;
- (bool)_setPreviousSevenDayRemoteNotificationFireDate:(id)arg1 error:(id*)arg2;
- (bool)_setShouldRebuildPreviousSevenDayNotification:(bool)arg1 error:(id*)arg2;
- (bool)_setShouldRebuildSevenDayStatistics:(bool)arg1 error:(id*)arg2;
- (bool)_shouldRebuildPreviousSevenDayNotificationWithError:(id*)arg1;
- (bool)_shouldRebuildSevenDayStatisticsWithError:(id*)arg1;
- (bool)_updateCacheWithFireDate:(id)arg1 fromRemoteNotification:(bool)arg2 changed:(bool*)arg3 error:(id*)arg4;
- (long long)_updatePreviousSevenDayLocalNotificationFireDateWithSamplesInserted:(id)arg1 now:(id)arg2 error:(id*)arg3;
- (long long)_updatePreviousSevenDayNotificationFireDateWith:(id)arg1 fromRemoteNotification:(bool)arg2 isLocalDevice:(bool)arg3 now:(id)arg4 error:(id*)arg5;
- (id)collectionIntervalForDoseAccumulated:(double)arg1;
- (id)initWithProfile:(id)arg1;
- (void)profileDidBecomeReady:(id)arg1;
- (bool)rebuildCachedFireDateFromLocalHAENStoreIfNeededWithError:(id*)arg1;
- (bool)rebuildCachedFireDateFromLocalHAENStoreWithError:(id*)arg1;
- (bool)shouldNotifyUserForAccumulatedDose:(double)arg1;
- (bool)updateCacheWithFireDate:(id)arg1 fromRemoteNotification:(bool)arg2 error:(id*)arg3;
- (long long)updatePreviousSevenDayLocalNotificationFireDateWithSamplesInserted:(id)arg1 error:(id*)arg2;
- (long long)updatePreviousSevenDayRemoteNotificationFireDateWith:(id)arg1 error:(id*)arg2;

@end
