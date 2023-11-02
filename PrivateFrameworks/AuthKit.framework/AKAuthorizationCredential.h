
@interface AKAuthorizationCredential : NSObject <AKCredential> {
    NSData * _authorizationCode;
    NSArray * _authorizedScopes;
    NSData * _identityToken;
    bool  _isLikelyRealUser;
    NSString * _state;
    NSString * _transactionID;
    NSString * _userIdentifier;
    AKUserInformation * _userInformation;
}

@property (nonatomic, readonly, copy) NSData *authorizationCode;
@property (nonatomic, readonly, copy) NSArray *authorizedScopes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSData *identityToken;
@property (nonatomic) bool isLikelyRealUser;
@property (nonatomic, readonly, copy) NSString *state;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *transactionID;
@property (nonatomic, readonly, copy) NSString *userIdentifier;
@property (nonatomic, readonly) AKUserInformation *userInformation;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authorizationCode;
- (id)authorizedScopes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identityToken;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerResponse:(id)arg1;
- (bool)isLikelyRealUser;
- (void)setIsLikelyRealUser:(bool)arg1;
- (id)state;
- (id)transactionID;
- (id)userIdentifier;
- (id)userInformation;

// Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices

- (id)_credentialScopes;
- (id)authenticationServicesCredential;

@end
