
@interface EKPersistentSource : EKPersistentObject {
    EKFrozenReminderSource * _reminderSource;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, retain) NSString *UUID;
@property (nonatomic, copy) NSNumber *defaultAlarmOffset;
@property (nonatomic) bool disabled;
@property (nonatomic, copy) NSString *externalID;
@property (nonatomic, copy) NSString *externalModificationTag;
@property (nonatomic) bool onlyCreatorCanModify;
@property (nonatomic) int preferredEventPrivateValue;
@property (retain) EKFrozenReminderSource *reminderSource;
@property (nonatomic) long long sourceTypeRaw;
@property (nonatomic) int strictestEventPrivateValue;
@property (nonatomic, copy) NSString *title;

+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)propertyKeyForUniqueIdentifier;
+ (id)relations;

- (void).cxx_destruct;
- (id)UUID;
- (id)appGroupIdentifier;
- (id)cachedExternalInfoData;
- (id)constraints;
- (id)constraintsName;
- (id)creatorBundleID;
- (id)creatorCodeSigningIdentity;
- (id)defaultAlarmOffset;
- (id)defaultAllDayAlarmOffset;
- (id)delegatedAccountOwnerStoreID;
- (id)description;
- (bool)disabled;
- (int)displayOrder;
- (int)entityType;
- (id)externalID;
- (id)externalModificationTag;
- (int)flags;
- (int)flags2;
- (id)lastSyncEndDate;
- (id)lastSyncStartDate;
- (int)managedConfigurationAccountAccess;
- (id)notes;
- (bool)onlyCreatorCanModify;
- (id)ownerName;
- (int)preferredEventPrivateValueRaw;
- (id)reminderSource;
- (void)setAppGroupIdentifier:(id)arg1;
- (void)setCachedExternalInfoData:(id)arg1;
- (void)setConstraintsName:(id)arg1;
- (void)setCreatorBundleID:(id)arg1;
- (void)setCreatorCodeSigningIdentity:(id)arg1;
- (void)setDefaultAlarmOffset:(id)arg1;
- (void)setDefaultAllDayAlarmOffset:(id)arg1;
- (void)setDelegatedAccountOwnerStoreID:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setDisplayOrder:(int)arg1;
- (void)setExternalID:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setFlags2:(int)arg1;
- (void)setFlags:(int)arg1;
- (void)setLastSyncEndDate:(id)arg1;
- (void)setLastSyncStartDate:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setOnlyCreatorCanModify:(bool)arg1;
- (void)setOwnerName:(id)arg1;
- (void)setPreferredEventPrivateValueRaw:(int)arg1;
- (void)setReminderSource:(id)arg1;
- (void)setShowsNotifications:(bool)arg1;
- (void)setSourceTypeRaw:(long long)arg1;
- (void)setStrictestEventPrivateValueRaw:(int)arg1;
- (void)setSyncError:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUUID:(id)arg1;
- (bool)showsNotifications;
- (long long)sourceTypeRaw;
- (int)strictestEventPrivateValueRaw;
- (id)syncError;
- (id)title;

@end
