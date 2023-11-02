
@interface HDFHIRAuthResponse : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accessToken;
    NSDate * _expiration;
    NSString * _patientID;
    NSString * _refreshToken;
    NSString * _scope;
}

@property (nonatomic, readonly, copy) NSString *accessToken;
@property (nonatomic, readonly, copy) NSDate *expiration;
@property (nonatomic, readonly, copy) NSString *patientID;
@property (nonatomic, readonly, copy) NSString *refreshToken;
@property (nonatomic, readonly, copy) NSString *scope;

+ (id)authResponseFromServerResponseDictionary:(id)arg1 baseURL:(id)arg2 previousCredential:(id)arg3 error:(id*)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionForAccountEvent;
- (void)encodeWithCoder:(id)arg1;
- (id)expiration;
- (unsigned long long)hash;
- (id)initWithAccessToken:(id)arg1 refreshToken:(id)arg2 patientID:(id)arg3 expiration:(id)arg4 scope:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToAuthResponse:(id)arg1;
- (id)patientID;
- (id)refreshToken;
- (id)scope;

@end
