
@interface FHStatementDetails : NSObject {
    NSDate * _closingDate;
    NSDecimalNumber * _combinedBalance;
    NSDecimalNumber * _creditLimit;
    NSDecimalNumber * _currentBalance;
    NSDecimalNumber * _currentBalanceForMonthZero;
    NSString * _currentStatementIdentifier;
    bool  _isMonthOfMerge;
    bool  _isMonthOne;
    bool  _isMonthZero;
    NSDecimalNumber * _minimumDue;
    NSDate * _openingDate;
    NSDecimalNumber * _remainingMinimumPayment;
    NSDecimalNumber * _remainingStatementBalance;
    NSDecimalNumber * _statementBalance;
    NSString * _statementIdentifier;
}

@property (nonatomic, retain) NSDate *closingDate;
@property (nonatomic, retain) NSDecimalNumber *combinedBalance;
@property (nonatomic, retain) NSDecimalNumber *creditLimit;
@property (nonatomic, retain) NSDecimalNumber *currentBalance;
@property (nonatomic, retain) NSDecimalNumber *currentBalanceForMonthZero;
@property (nonatomic, retain) NSString *currentStatementIdentifier;
@property (nonatomic) bool isMonthOfMerge;
@property (nonatomic) bool isMonthOne;
@property (nonatomic) bool isMonthZero;
@property (nonatomic, retain) NSDecimalNumber *minimumDue;
@property (nonatomic, retain) NSDate *openingDate;
@property (nonatomic, retain) NSDecimalNumber *remainingMinimumPayment;
@property (nonatomic, retain) NSDecimalNumber *remainingStatementBalance;
@property (nonatomic, retain) NSDecimalNumber *statementBalance;
@property (nonatomic, retain) NSString *statementIdentifier;

- (void).cxx_destruct;
- (id)closingDate;
- (id)combinedBalance;
- (id)creditLimit;
- (id)currentBalance;
- (id)currentBalanceForMonthZero;
- (id)currentStatementIdentifier;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isMonthOfMerge;
- (bool)isMonthOne;
- (bool)isMonthZero;
- (id)minimumDue;
- (id)openingDate;
- (id)remainingMinimumPayment;
- (id)remainingStatementBalance;
- (void)setClosingDate:(id)arg1;
- (void)setCombinedBalance:(id)arg1;
- (void)setCreditLimit:(id)arg1;
- (void)setCurrentBalance:(id)arg1;
- (void)setCurrentBalanceForMonthZero:(id)arg1;
- (void)setCurrentStatementIdentifier:(id)arg1;
- (void)setIsMonthOfMerge:(bool)arg1;
- (void)setIsMonthOne:(bool)arg1;
- (void)setIsMonthZero:(bool)arg1;
- (void)setMinimumDue:(id)arg1;
- (void)setOpeningDate:(id)arg1;
- (void)setRemainingMinimumPayment:(id)arg1;
- (void)setRemainingStatementBalance:(id)arg1;
- (void)setStatementBalance:(id)arg1;
- (void)setStatementIdentifier:(id)arg1;
- (id)statementBalance;
- (id)statementIdentifier;

@end
