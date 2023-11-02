
@interface DMCEnrollmentDebuggingESSOApplicationInstallationViewController : DMCEnrollmentTemplateTableViewController <LSApplicationWorkspaceObserverProtocol> {
    LSApplicationWorkspace * _appWorkspace;
    NSArray * _bundleIDs;
    DMCEnrollmentConfirmationView * _confirmationView;
    <DMCEnrollmentDebuggingESSOApplicationInstallationViewControllerDelegate> * _delegate;
    bool  _requiredAppInstalled;
    NSArray * _requiredEntitlements;
}

@property (nonatomic, retain) LSApplicationWorkspace *appWorkspace;
@property (nonatomic, retain) NSArray *bundleIDs;
@property (nonatomic, retain) DMCEnrollmentConfirmationView *confirmationView;
@property (readonly, copy) NSString *debugDescription;
@property <DMCEnrollmentDebuggingESSOApplicationInstallationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool requiredAppInstalled;
@property (nonatomic, retain) NSArray *requiredEntitlements;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupNavigationBar;
- (id)appWorkspace;
- (void)applicationsDidInstall:(id)arg1;
- (id)bundleIDs;
- (id)confirmationView;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 appBundleIDs:(id)arg2 requiredEntitlements:(id)arg3;
- (void)leftBarButtonTapped:(id)arg1;
- (void)loadView;
- (bool)requiredAppInstalled;
- (id)requiredEntitlements;
- (void)setAppWorkspace:(id)arg1;
- (void)setBundleIDs:(id)arg1;
- (void)setConfirmationView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRequiredAppInstalled:(bool)arg1;
- (void)setRequiredEntitlements:(id)arg1;
- (void)updateContinueButtonStatus;
- (void)viewWillAppear:(bool)arg1;

@end
