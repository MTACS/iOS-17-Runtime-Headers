
@interface ECSASLClient : NSObject <EFLoggable> {
    char * _appleToken;
    char * _authenticationName;
    char * _authenticationPersonID;
    char * _authorizationName;
    char * _authorizationPersonID;
    struct sasl_callback { unsigned long long x1; void *x2; void *x3; } * _callbacks;
    char * _clientInfo;
    <ECAuthenticationCredentials> * _credentials;
    unsigned int  _encryptionBufferSize;
    bool  _excludeAuthorizationName;
    bool  _excludeInitialResponse;
    bool  _lastResponseIncludesCredential;
    char * _machineID;
    NSArray * _mechanismNames;
    bool  _mechanismUsesPlainText;
    char * _oauthToken;
    char * _oneTimePassword;
    struct sasl_secret { unsigned long long x1; unsigned char x2[1]; } * _password;
    struct sasl_conn { } * _saslConnection;
    NSError * _saslError;
    long long  _saslStatus;
    NSString * _selectedMechanismName;
    char * _userLanguageCode;
}

@property (nonatomic, readonly) struct sasl_callback { unsigned long long x1; void *x2; void *x3; }*callbacks;
@property (nonatomic) <ECAuthenticationCredentials> *credentials;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int encryptionBufferSize;
@property (nonatomic) bool excludeAuthorizationName;
@property (nonatomic) bool excludeInitialResponse;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool lastResponseIncludesCredential;
@property (nonatomic, readonly) bool lastResponseIncludesPlainTextCredential;
@property (nonatomic, copy) NSArray *mechanismNames;
@property (nonatomic) bool mechanismUsesPlainText;
@property (nonatomic, readonly) struct sasl_conn { }*saslConnection;
@property (nonatomic, retain) NSError *saslError;
@property (nonatomic) long long saslStatus;
@property (nonatomic, copy) NSString *selectedMechanismName;
@property (readonly) Class superclass;

+ (id)installedMechanisms;
+ (id)log;

- (void).cxx_destruct;
- (void)_clearAuthenticationCallbackBuffers;
- (void)_handleGenericError:(int)arg1 description:(id)arg2;
- (void)_handleNeedsUserInteraction:(struct sasl_interact { unsigned long long x1; char *x2; char *x3; char *x4; void *x5; unsigned int x6; }*)arg1;
- (void)_handleStartFailure:(int)arg1;
- (bool)_logGenericError:(int)arg1 saslConnection:(struct sasl_conn { }*)arg2 description:(id)arg3 error:(id*)arg4;
- (void)_retrieveEncryptionBufferSize;
- (struct sasl_callback { unsigned long long x1; void *x2; void *x3; }*)callbacks;
- (id)credentials;
- (void)dealloc;
- (id)description;
- (unsigned int)encryptionBufferSize;
- (bool)excludeAuthorizationName;
- (bool)excludeInitialResponse;
- (id)init;
- (id)initWithMechanismNames:(id)arg1 credentials:(id)arg2 externalSecurityLayer:(unsigned int)arg3 allowPlainText:(bool)arg4;
- (bool)lastResponseIncludesCredential;
- (bool)lastResponseIncludesPlainTextCredential;
- (id)mechanismNames;
- (bool)mechanismUsesPlainText;
- (id)newDecryptedDataForBytes:(const char *)arg1 length:(unsigned int)arg2;
- (id)newEncryptedDataForBytes:(const char *)arg1 length:(unsigned int)arg2;
- (id)responseForServerData:(id)arg1;
- (struct sasl_conn { }*)saslConnection;
- (id)saslError;
- (long long)saslStatus;
- (id)selectedMechanismName;
- (void)setCredentials:(id)arg1;
- (void)setEncryptionBufferSize:(unsigned int)arg1;
- (void)setExcludeAuthorizationName:(bool)arg1;
- (void)setExcludeInitialResponse:(bool)arg1;
- (void)setLastResponseIncludesCredential:(bool)arg1;
- (void)setMechanismNames:(id)arg1;
- (void)setMechanismUsesPlainText:(bool)arg1;
- (void)setSaslError:(id)arg1;
- (void)setSaslStatus:(long long)arg1;
- (void)setSelectedMechanismName:(id)arg1;
- (id)start;

@end
