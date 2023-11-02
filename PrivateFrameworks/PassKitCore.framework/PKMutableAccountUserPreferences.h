
@interface PKMutableAccountUserPreferences : PKAccountUserPreferences

@property (nonatomic, retain) NSDecimalNumber *monthlySpendLimitAmount;
@property (nonatomic) bool monthlySpendLimitEnabled;
@property (nonatomic) bool showAvailableCredit;
@property (nonatomic) bool spendingEnabled;
@property (nonatomic, retain) NSDecimalNumber *transactionSpendLimitAmount;
@property (nonatomic) bool transactionSpendLimitEnabled;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
