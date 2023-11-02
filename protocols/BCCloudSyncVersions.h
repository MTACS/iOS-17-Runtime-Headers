
@protocol BCCloudSyncVersions

@required

- (long long)cloudVersion;
- (NSString *)dataType;
- (NSPersistentHistoryToken *)historyToken;
- (long long)historyTokenOffset;
- (long long)localVersion;
- (long long)syncVersion;

@end
