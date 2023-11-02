
@protocol CKSyncEngineDelegatePrivate <CKSyncEngineDelegate>

@optional

- (NSArray *)syncEngine:(CKSyncEngine *)arg1 relatedApplicationBundleIdentifiersForZoneIDs:(NSArray *)arg2 recordIDs:(NSArray *)arg3;
- (bool)syncEngine:(CKSyncEngine *)arg1 shouldFetchChangesForZoneID:(CKRecordZoneID *)arg2;

@end
