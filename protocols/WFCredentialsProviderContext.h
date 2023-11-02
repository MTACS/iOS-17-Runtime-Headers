
@protocol WFCredentialsProviderContext <WFProviderContext>

@required

- (void)activatePasswordSharing;
- (long long)availableAuthTraits;
- (NSArray *)availableTLSIdentities;
- (void)deactivatePasswordSharingWithReactivation:(bool)arg1;
- (void)gatherCredentials:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)isEnterprise;
- (bool)isPasswordSharingSupported;
- (void)launchSettings;
- (bool)passwordReceivedFromPasswordSharing;
- (WFHealthIssue *)securityIssue;
- (NSString *)username;
- (bool)validateCredentials;
- (bool)validatePassword;

@end
