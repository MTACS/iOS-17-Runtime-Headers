
@interface PKPayLaterBusinessChatTopicsViewController : PKPayLaterViewController <PKPayLaterBusinessChatTopicsSectionControllerDelegate, PKPayLaterSectionControllerDelegate> {
    unsigned long long  _businessChatContext;
    PKBusinessChatController * _businessChatController;
    PKPayLaterFinancingPlan * _financingPlan;
    PKPayLaterInstallment * _installment;
    PKPaymentPass * _payLaterPass;
    PKPayLaterPayment * _payment;
    PKPayLaterBusinessChatTopicsSectionController * _sectionController;
    NSArray * _topics;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelTapped;
- (void)_continueToChat;
- (bool)disablesAutomaticDismissalUponEnteringBackground;
- (id)initWithPayLaterAccount:(id)arg1 payLaterPass:(id)arg2 financingPlan:(id)arg3 installment:(id)arg4 payment:(id)arg5 topics:(id)arg6 businessChatContext:(unsigned long long)arg7;
- (void)openBusinessChatForTopic:(id)arg1;
- (id)pageTag;
- (void)viewDidLoad;

@end
