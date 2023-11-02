
@interface PKNewPaymentCredentialProvisioningViewController : PKPaymentSetupProvisioningFieldsViewController <PKLoadingUIProviding, PKPaymentProvisioningControllerDelegate, PKProvisioningFieldsUIRenderer> {
    bool  _allowsManualEntry;
    unsigned long long  _category;
    <PKPaymentCredentialProvisioningViewControllerCoordinator> * _coordinator;
    unsigned long long  _credentialProvisioningType;
    unsigned long long  _displayType;
    bool  _hasRemainingCredentialsToProvision;
    PKPaymentCredentialMetadataTableController * _metadataController;
    UIImage * _passSnapshot;
    bool  _passSnapshotNeedsCorners;
    struct CGSize { 
        double width; 
        double height; 
    }  _passSnapshotOverrideSize;
    UIImage * _passSnapshotPlaceHolder;
    PKPaymentCredential * _paymentCredential;
    bool  _previouslyAcceptedTerms;
    PKPaymentProvisioningController * _provisioningController;
    PKPaymentSetupProduct * _setupProduct;
    bool  _shouldAutoProvision;
    bool  _showSkipButton;
}

@property (nonatomic, retain) <PKPaymentCredentialProvisioningViewControllerCoordinator> *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasRemainingCredentialsToProvision;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showSkipButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createPassSnapshotFromPaymentPass:(id)arg1 completion:(id /* block */)arg2;
- (id)_defaultHeaderViewSubTitleForLocalCredential;
- (id)_defaultHeaderViewSubTitleForLocalCredentialTransfer;
- (id)_remoteExistingCredentialDefaultHeaderViewSubTitle;
- (void)_skipCard;
- (void)_updatePassSnapshotHeader;
- (void)addDifferentCard:(id)arg1;
- (id)coordinator;
- (void)dealloc;
- (id)defaultFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)didTransitionTo:(long long)arg1 loading:(bool)arg2;
- (void)didUpdateFieldModel;
- (void)handleNextButtonTapped:(id)arg1;
- (bool)hasRemainingCredentialsToProvision;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 paymentCredential:(id)arg3 setupProduct:(id)arg4 allowsManualEntry:(bool)arg5;
- (bool)isComplete;
- (void)loadView;
- (void)paymentPassUpdatedOnCredential:(id)arg1;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (id)readonlyFieldIdentifiers;
- (void)setCoordinator:(id)arg1;
- (void)setHasRemainingCredentialsToProvision:(bool)arg1;
- (void)setPassSnapshot:(id)arg1 needsCorners:(bool)arg2;
- (void)setShowSkipButton:(bool)arg1;
- (void)showLoadingUI:(bool)arg1 animated:(bool)arg2;
- (bool)showSkipButton;
- (void)showWithProvisioningError:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (id)visibleFieldIdentifiers;

@end
