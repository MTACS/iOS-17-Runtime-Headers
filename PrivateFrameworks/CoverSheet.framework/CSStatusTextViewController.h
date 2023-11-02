
@interface CSStatusTextViewController : CSCoverSheetViewControllerBase <SBFRemoteBasebandLoggingObserver> {
    int  _activationLockNotifyToken;
    SBFRemoteBasebandLoggingManager * _basebandLoggingManager;
    <CSStatusTextViewControllerDelegate> * _delegate;
    SBLockScreenDefaults * _lockScreenDefaults;
    NSString * _overrideFooterText;
    MCProfileConnection * _profileConnection;
    NSString * _tribecaText;
    CSStatusTextView * _view;
}

@property (nonatomic) <CSStatusTextViewControllerDelegate> *delegate;
@property (nonatomic, copy) NSString *overrideFooterText;

- (void).cxx_destruct;
- (bool)_isSecurityResearchDevice;
- (id)_legalContact;
- (id)_legalString;
- (void)_profileStateChangedNotification:(id)arg1;
- (void)_updateText;
- (void)_updateTextForDeviceInformation;
- (void)_updateTextForLegal;
- (void)_updateTextForProfiles;
- (void)_updateTextForProvisionalEnrollment;
- (void)_updateTextForSupervision;
- (void)_updateTribecaText;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToParentViewController:(id)arg1;
- (id)init;
- (void)loadView;
- (id)overrideFooterText;
- (void)remoteBasebandLogCollectionStateDidChange:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOverrideFooterText:(id)arg1;
- (void)setTribecaText:(id)arg1;
- (id)statusTextView;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
