
@interface PKPayLaterFinancingPlanPaymentSectionController : PKPayLaterSectionController {
    PKBusinessChatController * _businessChatController;
    PKPayLaterFinancingPlan * _financingPlan;
    PKPayLaterFinancingPlanRow * _financingPlanRow;
    UIImage * _merchantIcon;
    PKPaymentPass * _payLaterPass;
    PKPayLaterPayment * _payment;
    NSDateFormatter * _paymentDateFormatter;
    PKPayLaterPaymentIntentController * _paymentIntentController;
    PKPayLaterButtonRow * _reportIssueButton;
    UIImage * _resizedMerchantIcon;
    PKPayLaterBusinessChatTopicComposer * _topicsComposer;
}

@property (nonatomic, retain) PKPayLaterFinancingPlan *financingPlan;
@property (nonatomic, retain) PKPayLaterPayment *payment;

- (void).cxx_destruct;
- (void)_configurePaymentSummarySection:(id)arg1;
- (void)_configureReportIssueSection:(id)arg1;
- (void)configureHeaderView:(id)arg1 forSectionIdentifier:(id)arg2;
- (id)financingPlan;
- (Class)headerViewClassForSectionIdentifier:(id)arg1;
- (id)identifiers;
- (id)initWithFinancingPlan:(id)arg1 payment:(id)arg2 payLaterAccount:(id)arg3 paymentIntentController:(id)arg4 merchantIcon:(id)arg5 delegate:(id)arg6;
- (id)payment;
- (void)setFinancingPlan:(id)arg1;
- (void)setPayment:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
