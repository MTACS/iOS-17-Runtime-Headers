
@interface PKAccountInvitationAccessLevelViewController : PKPaymentSetupTableViewController <PKViewControllerPreflightable, UITableViewDelegate> {
    NSArray * _accessLevelOptions;
    PKAccountInvitationController * _controller;
    UIButton * _footerView;
    PKTableHeaderView * _headerView;
    NSIndexPath * _loadingIndexPath;
    double  _previousFooterHeight;
    double  _previousHeaderHeight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleFooterButtonTapped:(id)arg1;
- (void)_showSpinner:(bool)arg1 atIndexPath:(id)arg2;
- (void)_updateCell:(id)arg1 showSpinner:(bool)arg2;
- (id)initWithController:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
