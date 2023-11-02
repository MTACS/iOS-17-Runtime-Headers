
@protocol BCCloudKitDatabaseObserver <NSObject>

@required

- (void)databaseController:(BCCloudKitDatabaseController *)arg1 attachmentChanged:(bool)arg2;
- (void)databaseController:(BCCloudKitDatabaseController *)arg1 fetchedAllRecordsInZone:(NSString *)arg2;
- (void)databaseController:(BCCloudKitDatabaseController *)arg1 reachabilityChanged:(bool)arg2;
- (void)databaseController:(BCCloudKitDatabaseController *)arg1 recordWithIDWasDeleted:(CKRecordID *)arg2 recordType:(NSString *)arg3;
- (void)databaseController:(BCCloudKitDatabaseController *)arg1 recordsChanged:(NSArray *)arg2;

@end
