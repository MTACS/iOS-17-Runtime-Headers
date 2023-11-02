
@interface HKSPSyncAnchorContainer : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {
    NSMutableDictionary * _backingDictionary;
    NSString * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) <HKSPSyncAnchor> *sleepEventRecordSyncAnchor;
@property (nonatomic, readonly) <HKSPSyncAnchor> *sleepEventSyncAnchor;
@property (nonatomic, readonly) <HKSPSyncAnchor> *sleepModeSyncAnchor;
@property (nonatomic, readonly) <HKSPSyncAnchor> *sleepScheduleStateSyncAnchor;
@property (nonatomic, readonly) <HKSPSyncAnchor> *sleepScheduleSyncAnchor;
@property (nonatomic, readonly) <HKSPSyncAnchor> *sleepSettingsSyncAnchor;
@property (readonly) Class superclass;

+ (id)allKeys;
+ (id)descriptionForKey:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_withLock:(id /* block */)arg1;
- (void)compareWithContainer:(id)arg1 sleepScheduleSyncAnchorOutOfDate:(id /* block */)arg2 sleepSettingsSyncAnchorOutOfDate:(id /* block */)arg3 sleepEventRecordSyncAnchorOutOfDate:(id /* block */)arg4 sleepScheduleStateSyncAnchorOutOfDate:(id /* block */)arg5 sleepModeSyncAnchorOutOfDate:(id /* block */)arg6 sleepEventSyncAnchorOutOfDate:(id /* block */)arg7;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)forceSetSleepScheduleSyncAnchor:(id)arg1;
- (id)identifier;
- (id)incrementSleepEventRecordSyncAnchor;
- (id)incrementSleepEventSyncAnchor;
- (id)incrementSleepModeSyncAnchor;
- (id)incrementSleepScheduleStateSyncAnchor;
- (id)incrementSleepScheduleSyncAnchor;
- (id)incrementSleepSettingsSyncAnchor;
- (id)incrementSyncAnchorForKey:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)lock_getSyncAnchorForKey:(id)arg1;
- (id)lock_incrementSyncAnchorForKey:(id)arg1;
- (void)lock_removeSyncAnchorForKey:(id)arg1;
- (void)lock_setSyncAnchor:(id)arg1 forKey:(id)arg2;
- (id)lock_syncAnchorForKey:(id)arg1;
- (void)lock_updateSyncAnchor:(id)arg1 forKey:(id)arg2;
- (id)sleepEventRecordSyncAnchor;
- (id)sleepEventSyncAnchor;
- (id)sleepModeSyncAnchor;
- (id)sleepScheduleStateSyncAnchor;
- (id)sleepScheduleSyncAnchor;
- (id)sleepSettingsSyncAnchor;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)syncAnchorForKey:(id)arg1;
- (void)updateSleepEventRecordSyncAnchor:(id)arg1;
- (void)updateSleepEventSyncAnchor:(id)arg1;
- (void)updateSleepModeSyncAnchor:(id)arg1;
- (void)updateSleepScheduleStateSyncAnchor:(id)arg1;
- (void)updateSleepScheduleSyncAnchor:(id)arg1;
- (void)updateSleepSettingsSyncAnchor:(id)arg1;
- (void)updateSyncAnchor:(id)arg1 forKey:(id)arg2;
- (void)updateWithContainer:(id)arg1;

@end
