
@interface DSPrivacyPermissionDetailController : DSTableWelcomeController {
    NSArray * _apps;
    <DSPrivacyPermissionsDelegate> * _delegate;
    DSSensor * _permission;
    NSMutableArray * _selectedApps;
}

@property (nonatomic, retain) NSArray *apps;
@property (nonatomic) <DSPrivacyPermissionsDelegate> *delegate;
@property (nonatomic, retain) DSSensor *permission;
@property (nonatomic, retain) NSMutableArray *selectedApps;

- (void).cxx_destruct;
- (void)_updateButton;
- (id)apps;
- (void)back;
- (id)delegate;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 permission:(id)arg4 apps:(id)arg5;
- (id)permission;
- (void)returnFromDetailAndResetPermissionForSelectedApps;
- (void)returnFromDetailAndStopAllSharingForPermission;
- (id)selectedApps;
- (void)setApps:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPermission:(id)arg1;
- (void)setSelectedApps:(id)arg1;
- (void)stopAllPressed;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
