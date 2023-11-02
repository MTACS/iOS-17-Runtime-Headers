
@interface PKPayLaterFinancingPlanScheduleSummary : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _installments;
    NSArray * _payments;
    unsigned long long  _scheduleSummaryReason;
}

@property (nonatomic, copy) NSArray *installments;
@property (nonatomic, copy) NSArray *payments;
@property (nonatomic) unsigned long long scheduleSummaryReason;

+ (bool)supportsSecureCoding;
+ (id)totalAmountForInstallments:(id)arg1 fallbackAmount:(id)arg2;
+ (id)totalDueForInstallments:(id)arg1 fallbackAmount:(id)arg2;
+ (id)totalPaidForInstallments:(id)arg1 fallbackAmount:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)countOfInstallmentsAffectedByPaymentIdentifier:(id)arg1;
- (id)currencyAmountOfPaymentIdentifierAffectingOtherInstallments:(id)arg1 relativeInstallmentIdentifier:(id)arg2 installmentsAreInOrder:(bool*)arg3 countOfInstallments:(long long*)arg4;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)firstInstallmentIdentifierAffectedByPaymentIdentifier:(id)arg1;
- (bool)hasPaymentsOccurredAfterPayment:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (long long)installmentNumberForInstallmentIdentifier:(id)arg1;
- (id)installments;
- (id)installmentsAffectedByPaymentIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPayLaterScheduleSummary:(id)arg1;
- (id)lastPayment;
- (id)nextDueInstallment;
- (bool)paymentIdentifierDidPayoffFinancingPlan:(id)arg1;
- (id)payments;
- (id)paymentsOfType:(unsigned long long)arg1;
- (id)paymentsWithIdentifier:(id)arg1;
- (id)relevantInstallmentsFromDueDateStart:(id)arg1 dueDateEnd:(id)arg2 statues:(id)arg3;
- (id)relevantInstallmentsFromPayoffDateStart:(id)arg1 payoffDateEnd:(id)arg2 statues:(id)arg3;
- (unsigned long long)scheduleSummaryReason;
- (void)setInstallments:(id)arg1;
- (void)setPayments:(id)arg1;
- (void)setScheduleSummaryReason:(unsigned long long)arg1;

@end
