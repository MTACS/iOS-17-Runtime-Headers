
@interface SCKDatabaseMemoryStore : NSObject <SCKDatabaseStore> {
    bool  _cloudBackupEnabled;
    NSDate * _lastDirtyDate;
    NSDate * _lastSyncDate;
    CKServerChangeToken * _serverChangeToken;
    NSMutableDictionary * _zoneStoresByName;
}

@property (getter=isCloudBackupEnabled, nonatomic) bool cloudBackupEnabled;
@property (nonatomic, copy) NSDate *lastDirtyDate;
@property (nonatomic, copy) NSDate *lastSyncDate;
@property (nonatomic, copy) CKServerChangeToken *serverChangeToken;
@property (nonatomic, copy) NSMutableDictionary *zoneStoresByName;

- (void).cxx_destruct;
- (id)init;
- (bool)isCloudBackupEnabled;
- (id)lastDirtyDate;
- (id)lastSyncDate;
- (id)serverChangeToken;
- (void)setCloudBackupEnabled:(bool)arg1;
- (void)setLastDirtyDate:(id)arg1;
- (void)setLastSyncDate:(id)arg1;
- (void)setServerChangeToken:(id)arg1;
- (void)setZoneStoresByName:(id)arg1;
- (id)zoneStoreForSchema:(id)arg1;
- (id)zoneStoresByName;

@end
