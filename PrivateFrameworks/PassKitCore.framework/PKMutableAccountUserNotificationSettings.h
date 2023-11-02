
@interface PKMutableAccountUserNotificationSettings : PKAccountUserNotificationSettings

@property (nonatomic, retain) NSDecimalNumber *monthlySpendNotificationThreshold;
@property (nonatomic, retain) NSDecimalNumber *transactionNotificationThreshold;
@property (nonatomic) bool transactionNotificationsEnabled;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
