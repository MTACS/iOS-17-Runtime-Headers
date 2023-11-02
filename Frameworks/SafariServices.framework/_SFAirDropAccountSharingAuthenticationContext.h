
@interface _SFAirDropAccountSharingAuthenticationContext : NSObject <_SFSettingsAuthenticationRequiring> {
    bool  _hasBeenAuthenticated;
    WBSSavedAccount * _savedAccount;
}

@property (nonatomic, readonly, copy) NSString *authenticationPrompt;
@property (nonatomic, readonly, copy) NSDictionary *customLocalAuthenticationOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasBeenAuthenticated;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WBSSavedAccount *savedAccount;
@property (nonatomic, readonly) bool shouldAuthenticateBeforeShowingSettings;
@property (nonatomic, readonly) bool showsAuthenticationPromptAsTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_localAuthenticationOptionsForSharingPasskeyWithAirDrop;
- (id)_localAuthenticationOptionsForSharingPasswordWithAirDrop;
- (id)_passcodeTitleForSharingPasskeyWithAirDrop;
- (id)_passcodeTitleForSharingPasswordWithAirDrop;
- (id)authenticationPrompt;
- (id)customLocalAuthenticationOptions;
- (bool)hasBeenAuthenticated;
- (id)initWithSavedAccount:(id)arg1;
- (id)savedAccount;
- (void)setHasBeenAuthenticated:(bool)arg1;
- (bool)showsAuthenticationPromptAsTitle;

@end
