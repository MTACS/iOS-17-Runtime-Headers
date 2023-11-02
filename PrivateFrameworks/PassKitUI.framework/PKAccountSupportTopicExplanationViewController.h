
@interface PKAccountSupportTopicExplanationViewController : PKPaymentSetupOptionsViewController <PKAccountSupportTopicExplanationSectionControllerDelegate> {
    PKAccount * _account;
    PKBusinessChatController * _businessChatController;
    <PKAccountSupportTopicExplanationViewControllerDelegate> * _delegate;
    PKAccountSupportTopicExplanationSectionController * _sectionController;
    PKAccountSupportTopic * _topic;
}

- (void).cxx_destruct;
- (void)_cancelTapped;
- (void)_openSupportLinkURL:(id)arg1;
- (void)_performPrimaryAction;
- (void)_showMerchantDetails;
- (void)deselectCells;
- (id)initWithAccount:(id)arg1 topic:(id)arg2 delegate:(id)arg3;
- (void)openSupportLink:(id)arg1;
- (bool)shouldShowSupportLink:(id)arg1;
- (void)viewDidLoad;

@end
