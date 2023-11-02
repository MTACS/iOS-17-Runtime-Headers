
@interface PKAccountServicePayLaterFinancingPlanQueryResponse : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _activeFinancingPlans;
    NSArray * _completedFinancingPlans;
    PKCurrencyAmount * _dueNext30Days;
    long long  _financingPlanCount;
    NSArray * _relevantFinancingPlans;
    PKCurrencyAmount * _totalPendingAmount;
    PKAccountServicePayLaterFinancingPlanQueryInstallments * _upcomingInstallments;
}

@property (nonatomic, copy) NSArray *activeFinancingPlans;
@property (nonatomic, copy) NSArray *completedFinancingPlans;
@property (nonatomic, retain) PKCurrencyAmount *dueNext30Days;
@property (nonatomic) long long financingPlanCount;
@property (nonatomic, copy) NSArray *relevantFinancingPlans;
@property (nonatomic, retain) PKCurrencyAmount *totalPendingAmount;
@property (nonatomic, retain) PKAccountServicePayLaterFinancingPlanQueryInstallments *upcomingInstallments;

+ (id)_financingPlanIdentifierFromList:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqualToFinancingPlanQueryResponse:(id)arg1;
- (id)activeFinancingPlans;
- (id)completedFinancingPlans;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dueNext30Days;
- (void)encodeWithCoder:(id)arg1;
- (long long)financingPlanCount;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)relevantFinancingPlans;
- (void)setActiveFinancingPlans:(id)arg1;
- (void)setCompletedFinancingPlans:(id)arg1;
- (void)setDueNext30Days:(id)arg1;
- (void)setFinancingPlanCount:(long long)arg1;
- (void)setRelevantFinancingPlans:(id)arg1;
- (void)setTotalPendingAmount:(id)arg1;
- (void)setUpcomingInstallments:(id)arg1;
- (id)totalPendingAmount;
- (id)upcomingInstallments;

@end
