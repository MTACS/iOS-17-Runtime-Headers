
@interface PKAccountUserNotificationSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSDecimalNumber * _monthlySpendNotificationThreshold;
    NSDecimalNumber * _transactionNotificationThreshold;
    bool  _transactionNotificationsEnabled;
}

@property (nonatomic, retain) NSDecimalNumber *monthlySpendNotificationThreshold;
@property (nonatomic, retain) NSDecimalNumber *transactionNotificationThreshold;
@property (nonatomic) bool transactionNotificationsEnabled;

+ (id)defaultNotificationSettings;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqualToAccountUserNotificationSettings:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccountUserNotificationSettings:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)monthlySpendNotificationThreshold;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setMonthlySpendNotificationThreshold:(id)arg1;
- (void)setTransactionNotificationThreshold:(id)arg1;
- (void)setTransactionNotificationsEnabled:(bool)arg1;
- (id)transactionNotificationThreshold;
- (bool)transactionNotificationsEnabled;

@end
