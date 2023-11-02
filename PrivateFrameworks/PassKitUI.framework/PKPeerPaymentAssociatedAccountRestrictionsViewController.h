
@interface PKPeerPaymentAssociatedAccountRestrictionsViewController : PKPaymentSetupTableViewController {
    double  _cachedHeaderViewWidth;
    PKPeerPaymentSetupFlowControllerAssociatedAccountConfiguration * _configuration;
    PKPeerPaymentSetupFlowController * _controller;
    PKPeerPaymentPreferences * _currentPreferences;
    NSIndexPath * _defaultSelectedIndexPath;
    <PKPeerPaymentAssociatedAccountSetupDelegate> * _delegate;
    PKFamilyMember * _familyMember;
    PKTableHeaderView * _tableHeader;
}

- (void).cxx_destruct;
- (void)_continue;
- (id)_textLabelStringForIndexPath:(id)arg1;
- (id)_updatedPreferences;
- (id)initWithPeerPaymentSetupFlowController:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
