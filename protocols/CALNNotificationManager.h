
@protocol CALNNotificationManager <NSObject>

@required

- (void)addRecord:(CALNNotificationRecord *)arg1;
- (NSArray *)fetchRecordsWithSourceIdentifier:(NSString *)arg1;
- (bool)isProtectedDataAvailable;
- (void)removeRecordWithSourceIdentifier:(NSString *)arg1 sourceClientIdentifier:(NSString *)arg2;
- (void)updateRecord:(CALNNotificationRecord *)arg1;

@end
