
@interface PKPayLaterFinancingPlanPaymentScheduleComposerDeclinedInstallmentItem : PKPayLaterFinancingPlanPaymentScheduleComposerInstallmentItem <PKPayLaterFinancingPlanPaymentScheduleComposerItem> {
    PKPayLaterPayment * _payment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKPayLaterPayment *payment;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)initWithFinancingPlan:(id)arg1 installment:(id)arg2 payment:(id)arg3;
- (id)payment;
- (id)paymentIdentifier;
- (void)populateRow:(id)arg1;
- (unsigned long long)type;

@end
