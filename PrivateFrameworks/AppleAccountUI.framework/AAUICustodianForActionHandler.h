
@interface AAUICustodianForActionHandler : NSObject <AAUITrustedContactDetailsActionHandler> {
    AALocalContactInfo * _contact;
    AAUIOBWelcomeController * _recoveryViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissRecoveryViewController;
- (void)_showHelpNowUnavailableAlertWithMessage:(id)arg1 viewController:(id)arg2;
- (void)_showHelpNowViewWithRecoveryCode:(id)arg1 presentingViewController:(id)arg2;
- (void)doDestructiveAction:(id)arg1 specifier:(id)arg2;
- (void)doPrimaryAction:(id)arg1 specifier:(id)arg2;
- (id)initWithLocalContact:(id)arg1;

@end
