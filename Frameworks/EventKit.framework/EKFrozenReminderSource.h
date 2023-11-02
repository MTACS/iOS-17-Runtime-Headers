
@interface EKFrozenReminderSource : EKFrozenReminderObject

@property (nonatomic, readonly) REMAccount *remAccount;
@property (nonatomic, readonly) NSString *sourceIdentifier;

+ (Class)meltedClass;

- (id)UUID;
- (id)constraintsName;
- (id)defaultAlarmOffset;
- (id)delegatedAccountOwnerStoreID;
- (bool)disabled;
- (id)externalID;
- (int)flags;
- (id)lastSyncEndDate;
- (id)lastSyncStartDate;
- (int)managedConfigurationAccountAccess;
- (id)meltedObjectInStore:(id)arg1;
- (id)remAccount;
- (void)setLastSyncEndDate:(id)arg1;
- (void)setLastSyncStartDate:(id)arg1;
- (void)setSyncError:(id)arg1;
- (id)sourceIdentifier;
- (long long)sourceTypeRaw;
- (id)syncError;
- (id)title;

@end
