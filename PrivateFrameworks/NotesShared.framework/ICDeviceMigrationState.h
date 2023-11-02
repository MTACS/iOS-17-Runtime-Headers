
@interface ICDeviceMigrationState : ICCloudSyncingObject

@property (nonatomic, retain) ICAccount *account;
@property (nonatomic, retain) NSString *deviceIdentifier;
@property (nonatomic) short state;
@property (nonatomic, retain) NSDate *stateModificationDate;

+ (id)allDeviceMigrationStatesInContext:(id)arg1;
+ (id)currentDeviceMigrationStateForAccount:(id)arg1;
+ (id)currentDeviceMigrationStateForAccount:(id)arg1 createIfNecessary:(bool)arg2;
+ (id)deviceMigrationStateWithDeviceIdentifier:(id)arg1 account:(id)arg2;
+ (id)deviceMigrationStateWithDeviceIdentifier:(id)arg1 context:(id)arg2;
+ (id)deviceMigrationStatesByAccountIDInContext:(id)arg1;
+ (id)deviceMigrationStatesMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)identifierForDeviceIdentifier:(id)arg1;
+ (id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)newDeviceMigrationStateWithDeviceIdentifier:(id)arg1 account:(id)arg2;
+ (id)stringFromMigrationState:(short)arg1;

- (id)cloudAccount;
- (void)deleteFromLocalDatabase;
- (id)ic_loggingValues;
- (bool)isInICloudAccount;
- (bool)isMigrating;
- (id)makeCloudKitRecordForApproach:(long long)arg1 mergeableFieldState:(id)arg2;
- (bool)mergeCloudKitRecord:(id)arg1 accountID:(id)arg2 approach:(long long)arg3 mergeableFieldState:(id)arg4;
- (void)objectWasDeletedFromCloud;
- (void)objectWasDeletedFromCloudByAnotherDevice;
- (void)objectWasFetchedFromCloudWithRecord:(id)arg1 accountID:(id)arg2 force:(bool)arg3;
- (id)recordName;
- (id)recordType;
- (id)recordZoneName;

@end
