
@interface PKTransactionSupportTopicsViewController : PKPaymentSetupOptionsViewController <CNAvatarViewDelegate, PKAccountSupportTopicExplanationViewControllerDelegate, PKAccountSupportTopicsSectionControllerDelegate, PKPaymentServiceDelegate> {
    PKAccount * _account;
    PKAccountUserCollection * _accountUserCollection;
    UIActivityIndicatorView * _activityIndicator;
    PKBusinessChatController * _businessChatController;
    bool  _cancelingPayment;
    PKFamilyMemberCollection * _familyCollection;
    NSObject<OS_dispatch_source> * _loadingMapsTimer;
    bool  _loadingMapsViewController;
    bool  _loadingTopics;
    PKTransactionSupportStatementNameSectionController * _merchantNameSectionController;
    PKPaymentService * _paymentService;
    PKPaymentWebService * _paymentWebService;
    NSSet * _physicalCards;
    PKAccountSupportTopicsSectionController * _sectionTopicController;
    PKPaymentTransaction * _transaction;
    PKTransactionSupportTransactionSectionController * _transactionSectionController;
    PKTransactionSourceCollection * _transactionSourceCollection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelPaymentWithFallbackTopic:(id)arg1;
- (void)_cancelTapped;
- (void)_fetchSupportTopics;
- (void)_openBusinessChatForTopic:(id)arg1;
- (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 dismissAfter:(bool)arg3;
- (void)_redirectUserToLegacyReportIssue;
- (void)_reloadSectionControllerWithTopics:(id)arg1;
- (void)_setBarButtonSpinnerHidden:(bool)arg1;
- (void)_updateContentUnavailableConfigurationUsingState:(id)arg1;
- (void)deselectCells;
- (void)didUpdateFamilyMembers:(id)arg1;
- (id)initWithAccount:(id)arg1 transaction:(id)arg2 transactionSourceCollection:(id)arg3 familyCollection:(id)arg4 accountUserCollection:(id)arg5 physicalCards:(id)arg6;
- (void)openBusinessChatForTopic:(id)arg1;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)reloadItem:(id)arg1 animated:(bool)arg2;
- (bool)shouldShowSupportLink:(id)arg1;
- (void)showExplanationForTopic:(id)arg1;
- (void)showMerchantDetailsForTransaction;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
