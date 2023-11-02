
@interface AAUICustodianSetupFlowController : NSObject <AAUIAccountContactSelectorDelegate, AAUIChooseContactControllerDelegate, AAUIGrandSlamRemoteUIPresenterDelegate, AAUIInviteMessageFlowControllerDelegate> {
    AIDAAccountManager * _accountManager;
    NSDictionary * _authResults;
    AAUIChooseContactController * _chooseContactController;
    AACustodianController * _custodianController;
    NSUUID * _custodianshipID;
    <AAUICustodianSetupFlowControllerDelegate> * _delegate;
    AAUIOBWelcomeController * _firstTimeSetupVC;
    bool  _forceInlinePresentation;
    AAUIInviteMessageFlowController * _inviteFlowController;
    AALocalContactInfo * _invitedContact;
    bool  _isWalrusEnabled;
    UINavigationController * _navigationController;
    AAUIGrandSlamRemoteUIPresenter * _remoteUIPresenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUICustodianSetupFlowControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceInlinePresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isWalrusEnabled;
@property (nonatomic, retain) UINavigationController *navigationController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginAddRecoveryContactFlow;
- (void)_cancelCustodianInvite;
- (void)_dismiss;
- (void)_dismissCFUIfNeeded;
- (void)_displayAlertForNotReachableContact:(id)arg1;
- (void)_fetchSuggestedContacts;
- (void)_hideActivityIndicator;
- (void)_inviteContact:(id)arg1;
- (void)_loadRemoteUIPresenterRequest:(id)arg1;
- (void)_removeRecoveryKeyAndDismissCFUIfNeeded;
- (void)_showActivityIndicator;
- (void)_showAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)_showChooseContact;
- (void)_showChooseContactWithCancel;
- (void)_showDataRecoveryServiceEnableUI;
- (void)_showDataRecoveryServiceEnableUIWithPresenter:(id)arg1 modal:(bool)arg2;
- (void)_showDeviceUpgradeUI;
- (void)_showFirstTimeSetup;
- (void)_showSuggestedContactSelector:(id)arg1;
- (void)_startInviteMessageFlow;
- (void)_validateAccountWithCompletion:(id /* block */)arg1;
- (void)_verifyAndInviteContact:(id)arg1;
- (void)_verifyCDPWithCompletion:(id /* block */)arg1;
- (void)accountContactSelector:(id)arg1 didSelectContact:(id)arg2;
- (void)accountContactSelectorShowOtherContacts:(id)arg1;
- (void)chooseContactController:(id)arg1 didSelectContact:(id)arg2;
- (id)delegate;
- (bool)forceInlinePresentation;
- (id)initWithAccountManager:(id)arg1;
- (id)initWithAccountManager:(id)arg1 navigationController:(id)arg2;
- (void)inviteMessageFlowDidFinish:(id)arg1;
- (void)inviteMessageFlowWasCancelled:(id)arg1;
- (bool)isWalrusEnabled;
- (id)navigationController;
- (void)remoteUIDidDismiss:(id)arg1;
- (void)remoteUIRequestComplete:(id)arg1 error:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setForceInlinePresentation:(bool)arg1;
- (void)setIsWalrusEnabled:(bool)arg1;
- (void)setNavigationController:(id)arg1;
- (void)start;
- (void)startAddingDataRecoveryService:(id)arg1;

@end
