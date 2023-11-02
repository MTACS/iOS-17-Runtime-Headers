
@interface PKShareableCredentialsExpressPassSelectionViewController : PKPaymentSetupTableViewController {
    double  _cachedHeaderViewWidth;
    <PKPaymentSetupViewControllerDelegate> * _delegate;
    PKGroupsController * _groupsController;
    bool  _hasSetDefault;
    NSArray * _passes;
    NSIndexPath * _previouslySelectedIndexPath;
    PKSecureElementPass * _previouslySelectedPass;
    PKTableHeaderView * _tableHeader;
}

- (void).cxx_destruct;
- (void)_done;
- (void)_enableView:(bool)arg1;
- (id)initWithPasses:(id)arg1 groupsController:(id)arg2 context:(long long)arg3 delegate:(id)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
