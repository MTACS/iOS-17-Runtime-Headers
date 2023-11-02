
@interface PKPayLaterBusinessChatTopicExplanationSectionController : PKPayLaterSectionController {
    PKPayLaterFinancingPlan * _financingPlan;
    PKPayLaterInstallment * _installment;
    PKPaymentPass * _payLaterPass;
    PKPayLaterPayment * _payment;
    PKPayLaterBusinessChatTopic * _topic;
}

- (void).cxx_destruct;
- (void)_configureDynamicSection:(id)arg1 snapshot:(id)arg2;
- (id)_firstSectionIdentifier;
- (void)applyHeaderConfigurationProperties:(id)arg1 sectionIdentifier:(id)arg2;
- (id)headerAttributedStringForIdentifier:(id)arg1;
- (id)identifiers;
- (id)initWithPayLaterAccount:(id)arg1 payLaterPass:(id)arg2 financingPlan:(id)arg3 installment:(id)arg4 payment:(id)arg5 topic:(id)arg6 dynamicContentPage:(id)arg7 delegate:(id)arg8;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
