
@interface PKPayLaterFinancingPlanPaymentScheduleComposerPaidInstallmentItem : NSObject <PKPayLaterFinancingPlanPaymentScheduleComposerItem> {
    PKPayLaterFinancingPlan * _financingPlan;
    PKPayLaterInstallment * _installment;
    PKPayLaterPayment * _payment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKPayLaterFinancingPlan *financingPlan;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKPayLaterInstallment *installment;
@property (nonatomic, readonly) PKPayLaterPayment *payment;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)date;
- (id)description;
- (id)financingPlan;
- (id)initWithFinancingPlan:(id)arg1 installment:(id)arg2 payment:(id)arg3;
- (id)installment;
- (id)installmentIdentifier;
- (id)payment;
- (id)paymentIdentifier;
- (void)populateRow:(id)arg1;
- (unsigned long long)type;

@end
