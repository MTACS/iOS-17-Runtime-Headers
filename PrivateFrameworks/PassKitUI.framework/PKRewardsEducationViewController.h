
@interface PKRewardsEducationViewController : PKSectionTableViewController <PKRewardsTierTableViewCellDelegate, UITableViewDataSource> {
    PKAccount * _account;
    PKAccountService * _accountService;
    PKAccountEnhancedMerchantsFetcher * _enhancedMerchantsFetcher;
    NSArray * _tiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_close:(id)arg1;
- (void)didPressLinkInCell:(id)arg1;
- (id)initWithAccount:(id)arg1 accountService:(id)arg2 enhancedMerchantsFetcher:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
