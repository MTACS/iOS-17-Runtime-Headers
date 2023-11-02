
@interface NEProfilePayloadBaseVPN : NEProfilePayloadBase {
    NSString * _password;
    bool  _passwordRequired;
    NSString * _pin;
    bool  _pinRequired;
    NSString * _proxyPassword;
    bool  _proxyPasswordRequired;
    NSString * _proxyUserName;
    bool  _proxyUserNameRequired;
    NSString * _sharedSecret;
    bool  _sharedSecretRequired;
    NSString * _userName;
    bool  _userNameRequired;
}

- (void).cxx_destruct;
- (id)getPreprocessedPayloadContents;
- (id)initWithPayload:(id)arg1;
- (bool)setPostprocessedPayloadContents:(id)arg1;
- (id)validatePayload;

@end
