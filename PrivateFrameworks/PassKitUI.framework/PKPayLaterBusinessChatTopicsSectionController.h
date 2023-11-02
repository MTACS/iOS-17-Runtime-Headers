
@interface PKPayLaterBusinessChatTopicsSectionController : PKPayLaterSectionController {
    PKAccountService * _accountService;
    unsigned long long  _businessChatContext;
    <PKPayLaterBusinessChatTopicsSectionControllerDelegate> * _delegate;
    PKPayLaterFinancingPlan * _financingPlan;
    PKPaymentTransactionIconGenerator * _iconGenerator;
    PKPayLaterIconTextRow * _iconTextRow;
    PKPayLaterInstallment * _installment;
    PKPaymentPass * _payLaterPass;
    PKPayLaterPayment * _payment;
    NSArray * _topics;
    NSArray * _topicsRows;
}

- (void).cxx_destruct;
- (void)_configureFinancingPlanSection:(id)arg1;
- (void)_configureTopicsSection:(id)arg1;
- (void)_financingPlansForTopic:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleTopicRowTapped:(id)arg1 topic:(id)arg2;
- (void)_showListOfFinancingPlansForRow:(id)arg1 topic:(id)arg2;
- (void)_showTopicExplanationForRow:(id)arg1 topic:(id)arg2;
- (void)_updateIconForFinancingPlan:(id)arg1;
- (id)headerAttributedStringForIdentifier:(id)arg1;
- (id)identifiers;
- (id)initWithPayLaterAccount:(id)arg1 payLaterPass:(id)arg2 financingPlan:(id)arg3 installment:(id)arg4 payment:(id)arg5 topics:(id)arg6 businessChatContext:(unsigned long long)arg7 delegate:(id)arg8;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
