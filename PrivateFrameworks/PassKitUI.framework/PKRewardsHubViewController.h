
@interface PKRewardsHubViewController : PKDynamicCollectionViewController <PKRewardsHubSectionControllerDelegate, PKViewControllerPreflightable> {
    PKAccount * _account;
    PKAccountService * _accountService;
    PKDailyCashSelectionSectionController * _dailyCashSelectionSectionController;
    PKAccountEnhancedMerchantsFetcher * _enhancedMerchantsFetcher;
    PKEnhancedMerchantsShelfSectionController * _enhancedMerchantsShelfSectionController;
    PKAccountPromotionsSectionController * _promotionsSectionController;
    PKRewardsSummaryFetcher * _rewardsFetcher;
    PKRewardsHubSummarySectionController * _summariesSectionController;
    PKTransactionSourceCollection * _transactionSourceCollection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_nonNilSections;
- (id)initWithAccount:(id)arg1 transactionSourceCollection:(id)arg2 accountService:(id)arg3;
- (void)navigateToRewardsHubDestination:(long long)arg1;
- (void)openLinkedApplication:(id)arg1;
- (void)openURL:(id)arg1 sensitive:(bool)arg2 preferInApp:(bool)arg3;
- (bool)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (void)presentEducationViewController;
- (void)presentEnhancedMerchant:(id)arg1;
- (void)presentEnhancedMerchantsListWithCompletion:(id /* block */)arg1;
- (void)reportEventIfNecessary:(id)arg1;
- (id)rewardsHubCollectionView;
- (void)scrollToPromotionWithProgramIdentifier:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;

@end
