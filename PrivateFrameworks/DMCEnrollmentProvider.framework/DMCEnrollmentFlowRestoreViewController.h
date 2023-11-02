
@interface DMCEnrollmentFlowRestoreViewController : DMCEnrollmentTemplateTableViewController {
    DMCEnrollmentConfirmationView * _confirmationView;
    <DMCEnrollmentFlowRestoreViewControllerDelegate> * _delegate;
    <DMCRFSnapshot> * _restoreSnapshot;
}

@property (nonatomic, retain) DMCEnrollmentConfirmationView *confirmationView;
@property <DMCEnrollmentFlowRestoreViewControllerDelegate> *delegate;
@property (nonatomic, retain) <DMCRFSnapshot> *restoreSnapshot;

- (void).cxx_destruct;
- (id)_appNamesFromBunldeIDs:(id)arg1;
- (id)confirmationView;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 managedAppleID:(id)arg2 restoreSnapshot:(id)arg3 conflictingApps:(id)arg4;
- (void)loadView;
- (id)restoreSnapshot;
- (void)setConfirmationView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRestoreSnapshot:(id)arg1;
- (void)updateContinueButtonStatus;
- (void)viewWillAppear:(bool)arg1;

@end
