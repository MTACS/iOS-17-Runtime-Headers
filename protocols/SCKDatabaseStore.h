
@protocol SCKDatabaseStore

@required

- (bool)isCloudBackupEnabled;
- (NSDate *)lastDirtyDate;
- (NSDate *)lastSyncDate;
- (CKServerChangeToken *)serverChangeToken;
- (void)setCloudBackupEnabled:(bool)arg1;
- (void)setLastDirtyDate:(NSDate *)arg1;
- (void)setLastSyncDate:(NSDate *)arg1;
- (void)setServerChangeToken:(CKServerChangeToken *)arg1;
- (<SCKZoneStore> *)zoneStoreForSchema:(SCKZoneSchema *)arg1;

@end
