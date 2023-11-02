
@interface PKInstallmentPlanSummary : NSObject <NSCopying, NSSecureCoding> {
    NSString * _currencyCode;
    NSDecimalNumber * _currentBalance;
    NSDate * _currentEndDate;
    NSDecimalNumber * _interestCharged;
    NSDecimalNumber * _minimumDue;
    NSDate * _minimumDueDate;
    NSDate * _originalEndDate;
    NSDecimalNumber * _paymentsToDateAmount;
    NSDate * _startDate;
}

@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic, retain) NSDecimalNumber *currentBalance;
@property (nonatomic, retain) NSDate *currentEndDate;
@property (nonatomic, retain) NSDecimalNumber *interestCharged;
@property (nonatomic, retain) NSDecimalNumber *minimumDue;
@property (nonatomic, retain) NSDate *minimumDueDate;
@property (nonatomic, retain) NSDate *originalEndDate;
@property (nonatomic, retain) NSDecimalNumber *paymentsToDateAmount;
@property (nonatomic, retain) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)currentBalance;
- (id)currentEndDate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)interestCharged;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToInstallmentPlanSummary:(id)arg1;
- (id)minimumDue;
- (id)minimumDueDate;
- (id)originalEndDate;
- (id)paymentsToDateAmount;
- (void)setCurrencyCode:(id)arg1;
- (void)setCurrentBalance:(id)arg1;
- (void)setCurrentEndDate:(id)arg1;
- (void)setInterestCharged:(id)arg1;
- (void)setMinimumDue:(id)arg1;
- (void)setMinimumDueDate:(id)arg1;
- (void)setOriginalEndDate:(id)arg1;
- (void)setPaymentsToDateAmount:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
