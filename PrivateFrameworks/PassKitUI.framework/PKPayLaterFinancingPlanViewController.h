
@interface PKPayLaterFinancingPlanViewController : PKPayLaterViewController <PKPayLaterContentActionFooterViewDelegate, PKPayLaterDashboardMessageComposerDelegate, PKViewControllerPreflightable> {
    PKBusinessChatController * _businessChatController;
    PKPayLaterDashboardMessageComposer * _dashboardMessagesComposer;
    NSDateFormatter * _dateFormatter;
    PKPayLaterFinancingPlan * _financingPlan;
    PKPayLaterContentActionFooterView * _footerView;
    PKPaymentTransactionIconGenerator * _iconGenerator;
    NSDate * _lastUpdateOfFinancingPlan;
    UIImage * _merchantIcon;
    UIBarButtonItem * _moreMenuButton;
    UIImageView * _navigationBarImageView;
    PKPaymentPass * _payLaterPass;
    PKPayLaterPaymentIntentController * _paymentIntentController;
    PKPayLaterFinancingPlan * _pendingFinancingPlanUpdate;
    bool  _preflightedData;
    PKPayLaterFinancingPlanSectionController * _sectionController;
    PKAccountTermsAndConditionsController * _termsController;
    PKPayLaterBusinessChatTopicComposer * _topicsComposer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_closeButtonTapped;
- (void)_configureFinancingPlanMoreMenu;
- (void)_configureFooter;
- (void)_presentBusinessChat;
- (void)_presentInStoreReturnsViewController;
- (void)_presentLoanAgreement;
- (void)_presentLoanCancellationFlow;
- (void)_sharePlan;
- (void)_updateMerchantIcon;
- (id)additionalAnalyticsDictionary;
- (void)dashboardMessageComposer:(id)arg1 requestPresentFinancingPlanDetails:(id)arg2;
- (void)dashboardMessageComposer:(id)arg1 requestPresentPassDetailsForPass:(id)arg2;
- (void)dashboardMessageComposer:(id)arg1 requestPresentViewController:(id)arg2;
- (void)dashboardMessageComposer:(id)arg1 requestPushViewController:(id)arg2;
- (void)didUpdateFinancingPlan:(id)arg1;
- (void)didUpdatePayLaterAccount:(id)arg1;
- (double)headerHeight;
- (id)initWithFinancingPlan:(id)arg1 payLaterAccount:(id)arg2 paymentIntentController:(id)arg3 merchantIcon:(id)arg4 iconGenerator:(id)arg5;
- (id)navigationBarAnimationView;
- (id)pageTag;
- (void)payLaterContentActionFooterViewDidTapButton;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (void)reloadMessages;
- (void)viewDidLoad;

@end
