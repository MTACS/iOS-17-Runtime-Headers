
@interface PKPeerPaymentFamilyCircleViewController : UITableViewController <PKPeerPaymentAssociatedAccountSetupDelegate> {
    PKPeerPaymentAccount * _account;
    PKContactAvatarManager * _avatarManager;
    long long  _context;
    PKFamilyMemberCollection * _familyCollection;
    bool  _loadingFamily;
    <PKPassLibraryDataProvider> * _passLibraryDataProvider;
    PKPaymentService * _paymentService;
    PKPeerPaymentService * _peerPaymentService;
    NSArray * _sortedRows;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_familyMemberWithDSID:(id)arg1;
- (void)_handleRowTapped:(id)arg1;
- (void)_loadAvatarImagesIfNecessary;
- (void)_peerPaymentAccountChanged:(id)arg1;
- (id)_pendingInvitations;
- (void)_reloadSortedRows;
- (void)addPeerPaymentAssociatedAccountDidSkipSetupForFamilyMember:(id)arg1;
- (void)addPeerPaymentAssociatedAccountSetupCompletedWithSucess:(bool)arg1 updatedAccount:(id)arg2 forFamilyMember:(id)arg3;
- (id)initWithFamilyCollection:(id)arg1 avatarManager:(id)arg2 passLibraryDataProvider:(id)arg3 context:(long long)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
