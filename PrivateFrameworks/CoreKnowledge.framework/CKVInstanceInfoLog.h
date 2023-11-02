
@interface CKVInstanceInfoLog : NSObject {
    KVDictionaryLog * _log;
}

- (void).cxx_destruct;
- (id)deviceId;
- (id)init;
- (id)initWithDataDirectory:(id)arg1 dataProtectionClass:(int)arg2;
- (id)lastDatabaseCleanup;
- (id)lastMaintenance;
- (id)lastSkitRebuild;
- (id)modifiedDatabaseRowsSinceCleanup;
- (void)recordDatabaseCleanup;
- (void)recordDatabaseRowsModified:(unsigned long long)arg1;
- (void)recordDeviceId:(id)arg1;
- (void)recordDeviceId:(id)arg1 userId:(id)arg2;
- (void)recordMaintenance;
- (void)recordSkitRebuild;
- (id)userId;

@end
