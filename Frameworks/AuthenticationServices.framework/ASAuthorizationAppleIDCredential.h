
@interface ASAuthorizationAppleIDCredential : NSObject <ASAuthorizationCredential> {
    NSData * _accessToken;
    NSData * _authorizationCode;
    NSArray * _authorizedScopes;
    NSString * _email;
    NSPersonNameComponents * _fullName;
    NSData * _identityToken;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _internalLock;
    long long  _realUserStatus;
    NSData * _refreshToken;
    NSString * _state;
    NSString * _user;
}

@property (nonatomic, copy) NSData *accessToken;
@property (nonatomic, copy) NSData *authorizationCode;
@property (nonatomic, readonly, copy) NSArray *authorizedScopes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *email;
@property (nonatomic, copy) NSPersonNameComponents *fullName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *identityToken;
@property (nonatomic) long long realUserStatus;
@property (nonatomic, copy) NSData *refreshToken;
@property (nonatomic, copy) NSString *state;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *user;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessToken;
- (id)authorizationCode;
- (id)authorizedScopes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)email;
- (void)encodeWithCoder:(id)arg1;
- (id)fullName;
- (id)identityToken;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1 authorizedScopes:(id)arg2;
- (long long)realUserStatus;
- (id)refreshToken;
- (void)setAccessToken:(id)arg1;
- (void)setAuthorizationCode:(id)arg1;
- (void)setAuthorizedScopes:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setIdentityToken:(id)arg1;
- (void)setRealUserStatus:(long long)arg1;
- (void)setRefreshToken:(id)arg1;
- (void)setState:(id)arg1;
- (void)setUser:(id)arg1;
- (id)state;
- (id)user;

@end
