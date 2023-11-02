
@interface PKSavingsAccountSummary : NSObject <NSCopying, NSSecureCoding> {
    NSDecimalNumber * _apy;
    NSNumberFormatter * _apyFormatter;
    NSDecimalNumber * _availableBalance;
    NSDecimalNumber * _currentBalance;
    bool  _hasWithdrawalLimit;
    NSDecimalNumber * _interestTotal;
    NSDecimalNumber * _interestYTD;
    NSDecimalNumber * _pendingBalance;
    unsigned long long  _withdrawalsRemaining;
}

@property (setter=setAPY:, nonatomic, copy) NSDecimalNumber *apy;
@property (nonatomic, readonly) NSNumberFormatter *apyFormatter;
@property (nonatomic, copy) NSDecimalNumber *availableBalance;
@property (nonatomic, copy) NSDecimalNumber *currentBalance;
@property (nonatomic, readonly) NSString *formattedAPY;
@property (nonatomic) bool hasWithdrawalLimit;
@property (nonatomic, copy) NSDecimalNumber *interestTotal;
@property (nonatomic, copy) NSDecimalNumber *interestYTD;
@property (nonatomic, copy) NSDecimalNumber *pendingBalance;
@property (nonatomic) unsigned long long withdrawalsRemaining;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)apy;
- (id)apyFormatter;
- (id)availableBalance;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentBalance;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedAPY;
- (bool)hasWithdrawalLimit;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)interestTotal;
- (id)interestYTD;
- (bool)isEqual:(id)arg1;
- (id)pendingBalance;
- (void)setAPY:(id)arg1;
- (void)setAvailableBalance:(id)arg1;
- (void)setCurrentBalance:(id)arg1;
- (void)setHasWithdrawalLimit:(bool)arg1;
- (void)setInterestTotal:(id)arg1;
- (void)setInterestYTD:(id)arg1;
- (void)setPendingBalance:(id)arg1;
- (void)setWithdrawalsRemaining:(unsigned long long)arg1;
- (unsigned long long)withdrawalsRemaining;

@end
