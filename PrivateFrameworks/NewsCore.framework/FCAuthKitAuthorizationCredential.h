
@interface FCAuthKitAuthorizationCredential : NSObject {
    NSString * _authorizationCode;
    NSString * _email;
    NSString * _familyName;
    NSString * _givenName;
    NSString * _identityToken;
    NSString * _userIdentifier;
}

@property (nonatomic, readonly, copy) NSString *authorizationCode;
@property (nonatomic, readonly, copy) NSString *email;
@property (nonatomic, readonly, copy) NSString *familyName;
@property (nonatomic, readonly, copy) NSString *givenName;
@property (nonatomic, readonly, copy) NSString *identityToken;
@property (nonatomic, readonly, copy) NSString *userIdentifier;

- (void).cxx_destruct;
- (id)authorizationCode;
- (id)email;
- (id)familyName;
- (id)givenName;
- (id)identityToken;
- (id)initWithAuthorizationCode:(id)arg1 identityToken:(id)arg2 userIdentifier:(id)arg3 email:(id)arg4 familyName:(id)arg5 givenName:(id)arg6;
- (id)userIdentifier;

@end
