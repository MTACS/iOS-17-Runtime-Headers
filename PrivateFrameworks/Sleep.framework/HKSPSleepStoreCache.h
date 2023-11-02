
@interface HKSPSleepStoreCache : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    HKSPSleepEventRecord * _sleepEventRecord;
    bool  _sleepEventRecordNeedsUpdate;
    long long  _sleepMode;
    bool  _sleepModeNeedsUpdate;
    HKSPSleepSchedule * _sleepSchedule;
    bool  _sleepScheduleNeedsUpdate;
    unsigned long long  _sleepScheduleState;
    bool  _sleepScheduleStateNeedsUpdate;
    HKSPSleepSettings * _sleepSettings;
    bool  _sleepSettingsNeedsUpdate;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } cacheLock;
@property (nonatomic, readonly, copy) HKSPSleepEventRecord *sleepEventRecord;
@property (nonatomic, readonly) bool sleepEventRecordNeedsUpdate;
@property (nonatomic, readonly) long long sleepMode;
@property (nonatomic, readonly) bool sleepModeNeedsUpdate;
@property (nonatomic, readonly, copy) HKSPSleepSchedule *sleepSchedule;
@property (nonatomic, readonly) bool sleepScheduleNeedsUpdate;
@property (nonatomic, readonly) unsigned long long sleepScheduleState;
@property (nonatomic, readonly) bool sleepScheduleStateNeedsUpdate;
@property (nonatomic, readonly, copy) HKSPSleepSettings *sleepSettings;
@property (nonatomic, readonly) bool sleepSettingsNeedsUpdate;

- (void).cxx_destruct;
- (void)_locked_purgeCachedSleepEventRecord;
- (void)_locked_purgeCachedSleepMode;
- (void)_locked_purgeCachedSleepSchedule;
- (void)_locked_purgeCachedSleepScheduleState;
- (void)_locked_purgeCachedSleepSettings;
- (void)_withLock:(id /* block */)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })cacheLock;
- (id)cachedSleepEventRecord;
- (id)cachedSleepEventRecordWithMissHandler:(id /* block */)arg1;
- (id)cachedSleepModeWithMissHandler:(id /* block */)arg1;
- (id)cachedSleepSchedule;
- (id)cachedSleepScheduleStateWithMissHandler:(id /* block */)arg1;
- (id)cachedSleepScheduleWithMissHandler:(id /* block */)arg1;
- (id)cachedSleepSettings;
- (id)cachedSleepSettingsWithMissHandler:(id /* block */)arg1;
- (id)init;
- (void)purgeCache;
- (void)purgeCachedSleepEventRecord;
- (void)purgeCachedSleepMode;
- (void)purgeCachedSleepSchedule;
- (void)purgeCachedSleepScheduleState;
- (void)purgeCachedSleepSettings;
- (id)sleepEventRecord;
- (bool)sleepEventRecordNeedsUpdate;
- (long long)sleepMode;
- (bool)sleepModeNeedsUpdate;
- (id)sleepSchedule;
- (bool)sleepScheduleNeedsUpdate;
- (unsigned long long)sleepScheduleState;
- (bool)sleepScheduleStateNeedsUpdate;
- (id)sleepSettings;
- (bool)sleepSettingsNeedsUpdate;
- (void)updateCachedSleepEventRecord:(id)arg1;
- (void)updateCachedSleepMode:(long long)arg1;
- (void)updateCachedSleepSchedule:(id)arg1;
- (void)updateCachedSleepScheduleState:(unsigned long long)arg1;
- (void)updateCachedSleepSettings:(id)arg1;

@end
