
@interface AUDeveloperSettingsController : PSEditableListController {
    bool  _btQueried;
    PSSpecifier * _currentAccessorySpecifier;
    PSSpecifier * _customerOverrideCollectionSpecifier;
    bool  _isLoggingEnabled;
    OBTextWelcomeController * _legalConsentController;
    NSObject<OS_os_log> * _log;
    PSSpecifier * _logCollectionSpecifier;
    CBUserController * _loggingController;
    OBTextWelcomeController * _privacyConsentController;
}

- (void).cxx_destruct;
- (void)_agreePrivacyConsent;
- (void)_agreeToLegalConsent;
- (void)_notNowToLegalConsent;
- (void)_notNowToPrivacyConsent;
- (id)createCustomerSpecifiers;
- (id)getOverrideLocation:(id)arg1;
- (void)handleBTUserSettingsChangedNotification:(int)arg1;
- (void)handleLogCollectionToggle:(id)arg1 specifier:(id)arg2;
- (id)init;
- (id)isSeedParticipationEnabled:(id)arg1;
- (id)islogCollectionEnabled:(id)arg1;
- (bool)needLegalConsent;
- (void)registerForNotifications;
- (void)removedSpecifier:(id)arg1;
- (void)setSeedParticipation:(id)arg1 specifier:(id)arg2;
- (void)setlogCollection:(id)arg1 specifier:(id)arg2;
- (void)showLegalConsent:(id)arg1;
- (void)showLegalConsentLearnMoreLink:(id)arg1;
- (void)showParticipateInSeedOffAlert:(id)arg1;
- (id)specifiers;
- (void)viewDidLoad;

@end
