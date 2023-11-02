
@interface PKPayLaterBusinessChatTopicExplanationViewController : PKPayLaterViewController <PKPayLaterSectionControllerDelegate> {
    PKBusinessChatController * _businessChatController;
    PKPayLaterDynamicContentPage * _dynamicContentPage;
    PKPayLaterFinancingPlan * _financingPlan;
    PKPayLaterInstallment * _installment;
    PKPaymentPass * _payLaterPass;
    PKPayLaterPayment * _payment;
    PKPayLaterBusinessChatTopicExplanationSectionController * _sectionController;
    PKPayLaterBusinessChatTopic * _topic;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelTapped;
- (void)_openBusinessChat;
- (id)additionalAnalyticsDictionary;
- (bool)disablesAutomaticDismissalUponEnteringBackground;
- (id)initWithPayLaterAccount:(id)arg1 payLaterPass:(id)arg2 financingPlan:(id)arg3 installment:(id)arg4 payment:(id)arg5 topic:(id)arg6 dynamicContent:(id)arg7;
- (id)pageTag;
- (void)viewDidLoad;

@end
