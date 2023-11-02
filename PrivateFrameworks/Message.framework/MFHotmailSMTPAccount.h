
@interface MFHotmailSMTPAccount : SMTPAccount <MFOAuth2TokenAuthProtocol> {
    HotmailAccount * _account;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=mailAccountIfAvailable, nonatomic, retain) HotmailAccount *mailAccount;
@property (readonly) Class superclass;

+ (id)accountTypeIdentifier;

- (void).cxx_destruct;
- (id)accountForRenewingCredentials;
- (id)displayHostname;
- (id)hostname;
- (id)mailAccountIfAvailable;
- (id)oauth2Token;
- (id)password;
- (unsigned int)portNumber;
- (id)preferredAuthScheme;
- (void)setMailAccount:(id)arg1;
- (bool)shouldFetchACEDBInfoForError:(id)arg1;
- (bool)shouldUseAuthentication;
- (id)username;
- (bool)usesSSL;

@end
