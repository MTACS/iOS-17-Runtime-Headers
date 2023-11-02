
@interface PKAccountServicePayLaterFinancingPlanQuery : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accountIdentifier;
    NSArray * _countFinancingPlanStates;
    NSDate * _installmentDueOrPaidDateEnd;
    NSDate * _installmentDueOrPaidDateStart;
    NSString * _queryIdentifier;
    unsigned long long  _queryItems;
    NSArray * _relevantFinancingPlanStates;
    NSDate * _transactionEndDate;
    NSDate * _transactionStartDate;
    long long  _upcomingInstallmentsLimit;
}

@property (nonatomic, readonly, copy) NSString *accountIdentifier;
@property (nonatomic, copy) NSArray *countFinancingPlanStates;
@property (nonatomic, copy) NSDate *installmentDueOrPaidDateEnd;
@property (nonatomic, copy) NSDate *installmentDueOrPaidDateStart;
@property (nonatomic, readonly, copy) NSString *queryIdentifier;
@property (nonatomic, readonly) unsigned long long queryItems;
@property (nonatomic, copy) NSArray *relevantFinancingPlanStates;
@property (nonatomic, copy) NSDate *transactionEndDate;
@property (nonatomic, copy) NSDate *transactionStartDate;
@property (nonatomic) long long upcomingInstallmentsLimit;

+ (id)descriptionForQueryItems:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqualToFinancingPlanQuery:(id)arg1;
- (id)accountIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countFinancingPlanStates;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccountIdentifier:(id)arg1 queryItems:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)installmentDueOrPaidDateEnd;
- (id)installmentDueOrPaidDateStart;
- (bool)isEqual:(id)arg1;
- (id)queryIdentifier;
- (unsigned long long)queryItems;
- (id)relevantFinancingPlanStates;
- (void)setCountFinancingPlanStates:(id)arg1;
- (void)setInstallmentDueOrPaidDateEnd:(id)arg1;
- (void)setInstallmentDueOrPaidDateStart:(id)arg1;
- (void)setRelevantFinancingPlanStates:(id)arg1;
- (void)setTransactionEndDate:(id)arg1;
- (void)setTransactionStartDate:(id)arg1;
- (void)setUpcomingInstallmentsLimit:(long long)arg1;
- (id)transactionEndDate;
- (id)transactionStartDate;
- (long long)upcomingInstallmentsLimit;

@end
