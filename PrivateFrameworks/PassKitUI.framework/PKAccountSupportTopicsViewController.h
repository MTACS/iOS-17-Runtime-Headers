
@interface PKAccountSupportTopicsViewController : PKPaymentSetupOptionsViewController <PKAccountSupportTopicExplanationViewControllerDelegate, PKAccountSupportTopicsSectionControllerDelegate> {
    PKAccount * _account;
    PKBusinessChatController * _businessChatController;
    bool  _loadingTopics;
    PKAccountSupportSectionController * _sectionAccountController;
    PKAccountSupportTopicsSectionController * _sectionTopicController;
    PKAccountSupportTopic * _suggestedTopic;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKAccountSupportTopic *suggestedTopic;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelTapped;
- (void)_continueToChat;
- (void)_fetchCommonSupportTopics;
- (void)_reloadSectionControllerWithTopics:(id)arg1;
- (void)_updateContentUnavailableConfigurationUsingState:(id)arg1;
- (void)deselectCells;
- (id)initWithAccount:(id)arg1;
- (void)openBusinessChatForTopic:(id)arg1;
- (void)reloadItem:(id)arg1 animated:(bool)arg2;
- (void)setSuggestedTopic:(id)arg1;
- (bool)shouldShowSupportLink:(id)arg1;
- (void)showExplanationForTopic:(id)arg1;
- (id)suggestedTopic;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
