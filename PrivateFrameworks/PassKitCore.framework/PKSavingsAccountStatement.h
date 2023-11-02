
@interface PKSavingsAccountStatement : NSObject <NSCopying, NSSecureCoding> {
    NSDecimalNumber * _apy;
    NSDecimalNumber * _closingBalance;
    NSDate * _closingDate;
    NSString * _currencyCode;
    NSString * _identifier;
    NSDecimalNumber * _interestEarned;
    NSDecimalNumber * _openingBalance;
    NSDate * _openingDate;
    long long  _statementPeriodDays;
    NSDecimalNumber * _totalDailyCashDeposits;
    NSDecimalNumber * _totalDeposits;
    NSDecimalNumber * _totalWithdrawn;
}

@property (setter=setAPY:, nonatomic, copy) NSDecimalNumber *apy;
@property (nonatomic, copy) NSDecimalNumber *closingBalance;
@property (nonatomic, copy) NSDate *closingDate;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDecimalNumber *interestEarned;
@property (nonatomic, copy) NSDecimalNumber *openingBalance;
@property (nonatomic, copy) NSDate *openingDate;
@property (nonatomic) long long statementPeriodDays;
@property (nonatomic, copy) NSDecimalNumber *totalDailyCashDeposits;
@property (nonatomic, copy) NSDecimalNumber *totalDeposits;
@property (nonatomic, copy) NSDecimalNumber *totalWithdrawn;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)apy;
- (id)closingBalance;
- (id)closingDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)interestEarned;
- (bool)isEqual:(id)arg1;
- (id)openingBalance;
- (id)openingDate;
- (void)setAPY:(id)arg1;
- (void)setClosingBalance:(id)arg1;
- (void)setClosingDate:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInterestEarned:(id)arg1;
- (void)setOpeningBalance:(id)arg1;
- (void)setOpeningDate:(id)arg1;
- (void)setStatementPeriodDays:(long long)arg1;
- (void)setTotalDailyCashDeposits:(id)arg1;
- (void)setTotalDeposits:(id)arg1;
- (void)setTotalWithdrawn:(id)arg1;
- (long long)statementPeriodDays;
- (id)totalDailyCashDeposits;
- (id)totalDeposits;
- (id)totalWithdrawn;

@end
