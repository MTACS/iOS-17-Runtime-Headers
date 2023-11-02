
@protocol CALNNotificationStorage <NSObject>

@required

- (void)addNotificationRecord:(CALNNotificationRecord *)arg1;
- (void)addNotificationRecords:(NSArray *)arg1;
- (NSArray *)notificationRecords;
- (void)removeAllNotificationRecords;
- (void)removeNotificationRecordsPassingTest:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, CALNNotificationRecord *, void*

@end
