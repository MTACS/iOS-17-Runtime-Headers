
@interface PKPeerPaymentTurnOnAssociatedAccountViewController : UITableViewController {
    long long  _context;
    <PKPeerPaymentAssociatedAccountSetupDelegate> * _delegate;
    PKFamilyMemberCollection * _familyCollection;
    PKFamilyMember * _familyMember;
    <PKPassLibraryDataProvider> * _passLibraryDataProvider;
    long long  _setupType;
}

@property (nonatomic) <PKPeerPaymentAssociatedAccountSetupDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithFamilyMember:(id)arg1 familyCollection:(id)arg2 delegate:(id)arg3 passLibraryDataProvider:(id)arg4 context:(long long)arg5 setupType:(long long)arg6;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
