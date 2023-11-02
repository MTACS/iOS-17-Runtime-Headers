
@interface PKAccountUserPreferences : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSDecimalNumber * _monthlySpendLimitAmount;
    bool  _monthlySpendLimitEnabled;
    bool  _showAvailableCredit;
    bool  _spendingEnabled;
    NSDecimalNumber * _transactionSpendLimitAmount;
    bool  _transactionSpendLimitEnabled;
}

@property (nonatomic, retain) NSDecimalNumber *monthlySpendLimitAmount;
@property (nonatomic) bool monthlySpendLimitEnabled;
@property (nonatomic) bool showAvailableCredit;
@property (nonatomic) bool spendingEnabled;
@property (nonatomic, retain) NSDecimalNumber *transactionSpendLimitAmount;
@property (nonatomic) bool transactionSpendLimitEnabled;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccountUserPreferences:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAccountUserPreferences:(id)arg1;
- (id)jsonRepresentationForAccountUserAccessLevel:(unsigned long long)arg1;
- (id)monthlySpendLimitAmount;
- (bool)monthlySpendLimitEnabled;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setMonthlySpendLimitAmount:(id)arg1;
- (void)setMonthlySpendLimitEnabled:(bool)arg1;
- (void)setShowAvailableCredit:(bool)arg1;
- (void)setSpendingEnabled:(bool)arg1;
- (void)setTransactionSpendLimitAmount:(id)arg1;
- (void)setTransactionSpendLimitEnabled:(bool)arg1;
- (bool)showAvailableCredit;
- (bool)spendingEnabled;
- (id)transactionSpendLimitAmount;
- (bool)transactionSpendLimitEnabled;

@end
