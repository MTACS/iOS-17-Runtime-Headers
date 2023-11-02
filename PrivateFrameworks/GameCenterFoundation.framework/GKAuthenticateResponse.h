
@interface GKAuthenticateResponse : GKInternalRepresentation {
    bool  _accessPointIsOnAutomatically;
    long long  _accessPointLocation;
    bool  _accessPointShowHighlights;
    NSString * _alertMessage;
    NSString * _alertTitle;
    NSString * _lastContactsIntegrationConsentVersionDisplayed;
    NSString * _lastFriendSuggestionsVersionDisplayed;
    NSString * _lastPersonalizationVersionDisplayed;
    unsigned long long  _lastPrivacyNoticeVersionDisplayed;
    NSString * _lastProfilePrivacyVersionDisplayed;
    unsigned long long  _lastWelcomeWhatsNewCopyVersionDisplayed;
    bool  _loginDisabled;
    bool  _passwordChangeRequired;
    NSURL * _passwordChangeURL;
    NSString * _playerID;
    bool  _shouldShowLinkAccountsUI;
}

@property (nonatomic) bool accessPointIsOnAutomatically;
@property (nonatomic) long long accessPointLocation;
@property (nonatomic) bool accessPointShowHighlights;
@property (nonatomic, retain) NSString *alertMessage;
@property (nonatomic, retain) NSString *alertTitle;
@property (nonatomic, retain) NSString *lastContactsIntegrationConsentVersionDisplayed;
@property (nonatomic, retain) NSString *lastFriendSuggestionsVersionDisplayed;
@property (nonatomic, retain) NSString *lastPersonalizationVersionDisplayed;
@property (nonatomic) unsigned long long lastPrivacyNoticeVersionDisplayed;
@property (nonatomic, retain) NSString *lastProfilePrivacyVersionDisplayed;
@property (nonatomic) unsigned long long lastWelcomeWhatsNewCopyVersionDisplayed;
@property (nonatomic) bool loginDisabled;
@property (nonatomic) bool passwordChangeRequired;
@property (nonatomic, retain) NSURL *passwordChangeURL;
@property (nonatomic, retain) NSString *playerID;
@property (nonatomic) bool shouldShowLinkAccountsUI;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (bool)accessPointIsOnAutomatically;
- (long long)accessPointLocation;
- (bool)accessPointShowHighlights;
- (id)alertMessage;
- (id)alertTitle;
- (id)init;
- (id)lastContactsIntegrationConsentVersionDisplayed;
- (id)lastFriendSuggestionsVersionDisplayed;
- (id)lastPersonalizationVersionDisplayed;
- (unsigned long long)lastPrivacyNoticeVersionDisplayed;
- (id)lastProfilePrivacyVersionDisplayed;
- (unsigned long long)lastWelcomeWhatsNewCopyVersionDisplayed;
- (bool)loginDisabled;
- (bool)passwordChangeRequired;
- (id)passwordChangeURL;
- (id)playerID;
- (void)setAccessPointIsOnAutomatically:(bool)arg1;
- (void)setAccessPointLocation:(long long)arg1;
- (void)setAccessPointShowHighlights:(bool)arg1;
- (void)setAlertMessage:(id)arg1;
- (void)setAlertTitle:(id)arg1;
- (void)setLastContactsIntegrationConsentVersionDisplayed:(id)arg1;
- (void)setLastFriendSuggestionsVersionDisplayed:(id)arg1;
- (void)setLastPersonalizationVersionDisplayed:(id)arg1;
- (void)setLastPrivacyNoticeVersionDisplayed:(unsigned long long)arg1;
- (void)setLastProfilePrivacyVersionDisplayed:(id)arg1;
- (void)setLastWelcomeWhatsNewCopyVersionDisplayed:(unsigned long long)arg1;
- (void)setLoginDisabled:(bool)arg1;
- (void)setPasswordChangeRequired:(bool)arg1;
- (void)setPasswordChangeURL:(id)arg1;
- (void)setPlayerID:(id)arg1;
- (void)setShouldShowLinkAccountsUI:(bool)arg1;
- (bool)shouldShowLinkAccountsUI;

@end
