
@interface CKFocusStatusAuthorizationManager : NSObject {
    bool  _presentingFocusStatusAuthorizationPrompt;
    bool  _presentingInconsistentFocusStatusAuthorizationPrompt;
}

@property (getter=isPresentingFocusStatusAuthorizationPrompt, nonatomic) bool presentingFocusStatusAuthorizationPrompt;
@property (getter=isPresentingInconsistentFocusStatusAuthorizationPrompt, nonatomic) bool presentingInconsistentFocusStatusAuthorizationPrompt;

+ (id)sharedInstance;

- (bool)deviceSupportsFocusStatusAuthorizationPrompt;
- (void)displayFocusStatusAuthorizationInconsistencyRepairAlertFromViewController:(id)arg1;
- (void)displayFocusStatusAuthorizationInconsistencyRepairAlertIfNotPreviouslyShownFromViewController:(id)arg1;
- (id)focusStatusPreferencesURL;
- (bool)isPresentingFocusStatusAuthorizationPrompt;
- (bool)isPresentingInconsistentFocusStatusAuthorizationPrompt;
- (id)newDNDGlobalConfigurationService;
- (void)notifyDNDFocusStatusAuthorizationChanged;
- (void)presentFocusStatusAuthorizationAlertIfNecessaryFromViewController:(id)arg1;
- (void)promptForFocusStatusAuthorizationFromViewController:(id)arg1;
- (void)setPresentingFocusStatusAuthorizationPrompt:(bool)arg1;
- (void)setPresentingInconsistentFocusStatusAuthorizationPrompt:(bool)arg1;
- (void)verifyPublishedStatusIsConsistentWithDeniedFocusStatusAuthorizationFromViewController:(id)arg1;

@end
