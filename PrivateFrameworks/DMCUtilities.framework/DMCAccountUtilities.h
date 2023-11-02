
@interface DMCAccountUtilities : NSObject {
    CDPUIController * _cdpUIController;
    DMCHangDetectionQueue * _signInQueue;
}

@property (nonatomic, retain) CDPUIController *cdpUIController;
@property (nonatomic, retain) DMCHangDetectionQueue *signInQueue;

+ (id)_appleAccountWithPersonaID:(id)arg1;
+ (id)accountIdentifierForAppleAccountWithPersonaID:(id)arg1;
+ (id)appStoreAccountIdentifierForPersona:(id)arg1;
+ (id)managedAppleIDNameWithPersonaID:(id)arg1;

- (void).cxx_destruct;
- (bool)_signIniCloudAccountWithAuthenticationResult:(id)arg1 personaID:(id)arg2 baseViewController:(id)arg3 outError:(id*)arg4;
- (bool)_signIniTunesAccountWithAuthenticationResult:(id)arg1 personaID:(id)arg2 canMakeAccountActive:(bool)arg3 baseViewController:(id)arg4 outError:(id*)arg5;
- (id)cdpUIController;
- (void)setCdpUIController:(id)arg1;
- (void)setSignInQueue:(id)arg1;
- (void)signInAccountsWithTypes:(id)arg1 authenticationResult:(id)arg2 personaID:(id)arg3 canMakeAccountActive:(bool)arg4 baseViewController:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)signInQueue;
- (void)signOutAllPrimaryAccounts;

@end
