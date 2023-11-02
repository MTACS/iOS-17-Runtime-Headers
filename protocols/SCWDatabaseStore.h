
@protocol SCWDatabaseStore

@required

- (bool)isCloudBackupEnabled;
- (NSDate *)lastDirtyDate;
- (NSDate *)lastSyncDate;
- (CKServerChangeToken *)serverChangeToken;
- (void)setCloudBackupEnabled:(bool)arg1;
- (void)setLastDirtyDate:(NSDate *)arg1;
- (void)setLastSyncDate:(NSDate *)arg1;
- (void)setServerChangeToken:(CKServerChangeToken *)arg1;
- (<SCWZoneStore> *)zoneStoreForSchema:(SCWZoneSchema *)arg1;

@end
