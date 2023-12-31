
@interface PSKeychainSyncViewController : PSListController <KeychainSyncViewController> {
    <KeychainSyncViewControllerDelegate> * _delegate;
    PSSpecifier * _groupSpecifier;
    PSKeychainSyncHeaderView * _headerView;
}

@property (nonatomic) <KeychainSyncViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)groupSpecifier;
- (id)headerView;
- (double)heightForHeaderInTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)specifiers;
- (id)viewForHeaderInTableView:(id)arg1;

@end
