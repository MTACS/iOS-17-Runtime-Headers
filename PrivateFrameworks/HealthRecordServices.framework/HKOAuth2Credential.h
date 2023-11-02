
@interface HKOAuth2Credential : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accessToken;
    NSDate * _expiration;
    NSString * _refreshToken;
    NSString * _requestedScopeString;
    NSSet * _scopes;
}

@property (nonatomic, readonly, copy) NSString *accessToken;
@property (nonatomic, readonly, copy) NSDate *expiration;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic, readonly, copy) NSString *refreshToken;
@property (nonatomic, readonly, copy) NSString *requestedScopeString;
@property (nonatomic, readonly, copy) NSString *scopeString;
@property (nonatomic, readonly, copy) NSSet *scopes;

+ (id)expirationFromTimeInterval:(double)arg1;
+ (id)scopeStringFromScopes:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInitWithAccessToken:(id)arg1 refreshToken:(id)arg2 expiration:(id)arg3 requestedScopeString:(id)arg4 scopes:(id)arg5;
- (id)accessToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expiration;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAccessToken:(id)arg1 refreshToken:(id)arg2 expiration:(id)arg3 requestedScopeString:(id)arg4 scopeString:(id)arg5;
- (id)initWithAccessToken:(id)arg1 refreshToken:(id)arg2 expiration:(id)arg3 requestedScopeString:(id)arg4 scopes:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCredential:(id)arg1 epsilonExpiration:(double)arg2;
- (bool)isExpired;
- (id)refreshToken;
- (id)requestedScopeString;
- (id)scopeString;
- (id)scopes;

@end
