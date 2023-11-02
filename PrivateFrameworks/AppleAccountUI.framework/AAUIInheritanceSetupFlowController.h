
@interface AAUIInheritanceSetupFlowController : NSObject <AAUIAccountContactSelectorDelegate, AAUIInheritanceSetupFlowDelegate, AAUIInviteMessageFlowControllerDelegate, CNContactPickerDelegate, UIPrintInteractionControllerDelegate> {
    ACAccount * _appleAccount;
    AAUIContactsProvider * _contactsProvider;
    AAUIOBWelcomeController * _firstTimeSetupVC;
    AAUIInviteMessageFlowController * _inviteFlowController;
    UINavigationController * _navigationController;
    AABeneficiaryInfo * _selectedBeneficiary;
    AALocalContactInfo * _selectedContact;
    NSString * _setupAuthToken;
    AAUIInheritanceShareAccessKeyOptionsViewController * _shareAccessKeyOptionsViewController;
    AAUIOBWelcomeController * _shareDataVC;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UINavigationController *navigationController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginAddBeneficiaryFlow;
- (void)_dismiss;
- (void)_dismissAndNavigateToDateOfBirthSettings;
- (id)_doneButton;
- (void)_fetchSuggestedContacts;
- (void)_setupBeneficiary;
- (void)_shareDataDidContinue;
- (void)_showAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)_showContactSelector:(id)arg1;
- (void)_showDefaultContactPicker;
- (void)_showDefaultContactPickerWithCancel;
- (void)_showIntro;
- (void)_showPrintPreview;
- (void)_showSetupCompleteWithShareTypePrint;
- (void)_showShareAccessKey;
- (void)_showShareData;
- (void)_startInviteMessageFlow;
- (void)_validateAccountWithCompletion:(id /* block */)arg1;
- (void)_verifyCDPWithCompletion:(id /* block */)arg1;
- (void)accountContactSelector:(id)arg1 didSelectContact:(id)arg2;
- (void)accountContactSelectorShowOtherContacts:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)inheritanceDidSelectSharingOption:(unsigned long long)arg1;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccount:(id)arg1 navigationController:(id)arg2;
- (void)inviteMessageCompleteSecondaryButtonTapped:(id)arg1;
- (void)inviteMessageFlowDidFinish:(id)arg1;
- (void)inviteMessageFlowWasCancelled:(id)arg1;
- (void)inviteMessageWasSent:(id)arg1 completion:(id /* block */)arg2;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (void)start;

@end
