
@interface DMCEnrollmentManagementDetailsOverviewViewController : DMCEnrollmentTemplateTableViewController {
    <DMCEnrollmentManagementDetailsOverviewViewControllerDelegate> * _delegate;
    NSString * _managedAppleID;
    MCProfile * _profile;
}

@property <DMCEnrollmentManagementDetailsOverviewViewControllerDelegate> *delegate;
@property (nonatomic, copy) NSString *managedAppleID;
@property (nonatomic, retain) MCProfile *profile;

- (void).cxx_destruct;
- (void)_setupNavigationBar;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 managedAppleID:(id)arg2 profile:(id)arg3;
- (void)leftBarButtonTapped:(id)arg1;
- (void)loadView;
- (id)managedAppleID;
- (id)profile;
- (void)setDelegate:(id)arg1;
- (void)setManagedAppleID:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
