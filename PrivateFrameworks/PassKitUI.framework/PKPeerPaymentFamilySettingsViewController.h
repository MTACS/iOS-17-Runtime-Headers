
@interface PKPeerPaymentFamilySettingsViewController : UITableViewController {
    PKContactAvatarManager * _contactAvatarManager;
    PKContactResolver * _contactResolver;
    PKFamilyMemberCollection * _familyCollection;
    <PKPaymentDataProvider> * _paymentServiceDataProvider;
    PKPeerPaymentAccount * _peerPaymentAccount;
    PKPeerPaymentAssociatedAccountsController * _peerPaymentAssociatedAccountsController;
    NSArray * _sortedFamilyMemberRowModels;
}

- (void).cxx_destruct;
- (id)_contactKeysToFetch;
- (void)_updateFamilyRows;
- (id)initWithPass:(id)arg1 dataProvider:(id)arg2 peerPaymentAccount:(id)arg3 familyCollection:(id)arg4;
- (long long)numberOfSections;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;

@end
