
@interface DSPrivacyAppDetailController : DSTableWelcomeController {
    DSApp * _app;
    <DSPrivacyPermissionsDelegate> * _delegate;
    NSMutableArray * _selectedPermissions;
    NSArray * _sortedPermissions;
}

@property (nonatomic, retain) DSApp *app;
@property (nonatomic) <DSPrivacyPermissionsDelegate> *delegate;
@property (nonatomic, retain) NSMutableArray *selectedPermissions;
@property (nonatomic, retain) NSArray *sortedPermissions;

- (void).cxx_destruct;
- (void)_updateButton;
- (id)app;
- (void)back;
- (id)delegate;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 app:(id)arg4;
- (void)returnFromDetailAndDeleteApp;
- (void)returnFromDetailAndRevokeSelectedPermissions;
- (id)selectedPermissions;
- (void)setApp:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedPermissions:(id)arg1;
- (void)setSortedPermissions:(id)arg1;
- (id)sortedPermissions;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
