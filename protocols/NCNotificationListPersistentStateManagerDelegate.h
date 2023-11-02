
@protocol NCNotificationListPersistentStateManagerDelegate <NSObject>

@required

- (void)persistentStateManager:(NCNotificationListPersistentStateManager *)arg1 didFetchMigrationTime:(NSDate *)arg2 forNotificationRequest:(NCNotificationRequest *)arg3;
- (void)persistentStateManager:(NCNotificationListPersistentStateManager *)arg1 didFetchStoredListInfo:(NSDictionary *)arg2;
- (void)persistentStateManager:(NCNotificationListPersistentStateManager *)arg1 didFetchSummaryMigrationTime:(NSDate *)arg2;
- (void)persistentStateManager:(NCNotificationListPersistentStateManager *)arg1 finishedLoadingDataForSectionType:(unsigned long long)arg2;
- (void)persistentStateManager:(NCNotificationListPersistentStateManager *)arg1 hasStoredDataForSectionType:(unsigned long long)arg2;

@end
