
@interface PKSpendingSummary : NSObject <NSSecureCoding> {
    PKPaymentTransactionGroup * _adjustments;
    NSDate * _endDate;
    PKPaymentTransactionGroup * _interest;
    bool  _isLoading;
    NSArray * _orderedInsights;
    NSArray * _orderedSpendingCategories;
    NSArray * _orderedSpendingPerMerchants;
    PKPaymentTransactionGroup * _payments;
    PKCurrencyAmount * _previousMaxAmount;
    PKCurrencyAmount * _previousTotalSpending;
    PKPaymentTransactionGroup * _refunds;
    PKPaymentTransactionGroup * _rewards;
    NSDictionary * _spendingsPerAltDSID;
    NSArray * _spendingsPerCalendarUnit;
    NSDate * _startDate;
    unsigned long long  _summaryType;
    unsigned long long  _summaryUnit;
    PKCurrencyAmount * _totalSpending;
}

@property (nonatomic, retain) PKPaymentTransactionGroup *adjustments;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) PKPaymentTransactionGroup *interest;
@property (nonatomic) bool isLoading;
@property (nonatomic, copy) NSArray *orderedInsights;
@property (nonatomic, copy) NSArray *orderedSpendingCategories;
@property (nonatomic, copy) NSArray *orderedSpendingPerMerchants;
@property (nonatomic, retain) PKPaymentTransactionGroup *payments;
@property (nonatomic, retain) PKCurrencyAmount *previousMaxAmount;
@property (nonatomic, retain) PKCurrencyAmount *previousTotalSpending;
@property (nonatomic, retain) PKPaymentTransactionGroup *refunds;
@property (nonatomic, retain) PKPaymentTransactionGroup *rewards;
@property (nonatomic, copy) NSDictionary *spendingsPerAltDSID;
@property (nonatomic, retain) NSArray *spendingsPerCalendarUnit;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) unsigned long long summaryType;
@property (nonatomic) unsigned long long summaryUnit;
@property (nonatomic, retain) PKCurrencyAmount *totalSpending;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adjustments;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)interest;
- (bool)isEqual:(id)arg1;
- (bool)isLoading;
- (id)orderedInsights;
- (id)orderedSpendingCategories;
- (id)orderedSpendingPerMerchants;
- (id)payments;
- (id)previousMaxAmount;
- (id)previousTotalSpending;
- (id)refunds;
- (id)rewards;
- (void)setAdjustments:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setInterest:(id)arg1;
- (void)setIsLoading:(bool)arg1;
- (void)setOrderedInsights:(id)arg1;
- (void)setOrderedSpendingCategories:(id)arg1;
- (void)setOrderedSpendingPerMerchants:(id)arg1;
- (void)setPayments:(id)arg1;
- (void)setPreviousMaxAmount:(id)arg1;
- (void)setPreviousTotalSpending:(id)arg1;
- (void)setRefunds:(id)arg1;
- (void)setRewards:(id)arg1;
- (void)setSpendingsPerAltDSID:(id)arg1;
- (void)setSpendingsPerCalendarUnit:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setSummaryType:(unsigned long long)arg1;
- (void)setSummaryUnit:(unsigned long long)arg1;
- (void)setTotalSpending:(id)arg1;
- (id)spendingsPerAltDSID;
- (id)spendingsPerCalendarUnit;
- (id)startDate;
- (unsigned long long)summaryType;
- (unsigned long long)summaryUnit;
- (id)totalSpending;

@end
