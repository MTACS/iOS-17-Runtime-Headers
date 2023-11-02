
@interface PKPayLaterInstallmentsMonth : NSObject {
    NSArray * _activeInstallments;
    NSArray * _allInstallments;
    NSDate * _endDate;
    PKCurrencyAmount * _fallbackAmount;
    NSDictionary * _financingPlanByInstallmentIdentifier;
    NSArray * _financingPlans;
    NSMutableDictionary * _installmentsByDate;
    NSArray * _paidInstallments;
    NSDate * _startDate;
    PKCurrencyAmount * _totalDue;
    PKCurrencyAmount * _totalPaid;
}

@property (nonatomic, readonly, copy) NSArray *activeInstallments;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly, copy) NSArray *financingPlans;
@property (nonatomic, readonly, copy) NSArray *paidInstallments;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (void)_updateValues;
- (id)activeInstallments;
- (id)description;
- (id)endDate;
- (id)financingPlanForInstallmentIdentifier:(id)arg1;
- (id)financingPlans;
- (id)initWithFinancingPlans:(id)arg1 fallbackAmount:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (id)installmentsDueInDate:(id)arg1;
- (id)paidInstallments;
- (id)startDate;
- (id)totalDue;
- (id)totalPaid;

@end
