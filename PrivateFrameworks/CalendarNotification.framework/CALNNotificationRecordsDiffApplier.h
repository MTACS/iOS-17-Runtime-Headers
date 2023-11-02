
@interface CALNNotificationRecordsDiffApplier : NSObject

+ (void)applyDiff:(id)arg1 toNotificationManager:(id)arg2;
+ (void)refreshNotificationManager:(id)arg1 withNotificationRecords:(id)arg2 forSourceWithIdentifier:(id)arg3 filteredBySourceClientIDs:(id)arg4;

@end
