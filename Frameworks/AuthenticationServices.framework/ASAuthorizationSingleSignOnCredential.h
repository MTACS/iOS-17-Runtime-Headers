
@interface ASAuthorizationSingleSignOnCredential : NSObject <ASAuthorizationCredential> {
    NSData * _accessToken;
    NSHTTPURLResponse * _authenticatedResponse;
    NSArray * _authorizedScopes;
    NSData * _identityToken;
    NSArray * _privateKeys;
    NSString * _state;
}

@property (nonatomic, readonly, copy) NSData *accessToken;
@property (nonatomic, readonly, copy) NSHTTPURLResponse *authenticatedResponse;
@property (nonatomic, readonly, copy) NSArray *authorizedScopes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSData *identityToken;
@property (nonatomic, readonly) NSArray *privateKeys;
@property (nonatomic, readonly, copy) NSString *state;
@property (readonly) Class superclass;

+ (id)emptyCredential;
+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_initWithAuthenticatedResponse:(id)arg1;
- (id)accessToken;
- (id)authenticatedResponse;
- (id)authorizedScopes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identityToken;
- (id)init;
- (id)initWithAuthenticatedResponse:(id)arg1;
- (id)initWithAuthenticatedResponse:(id)arg1 privateKeys:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)privateKeys;
- (id)state;

@end
