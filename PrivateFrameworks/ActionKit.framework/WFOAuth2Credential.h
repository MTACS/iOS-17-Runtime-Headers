
@interface WFOAuth2Credential : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accessToken;
    NSDate * _expirationDate;
    NSString * _refreshToken;
    NSDictionary * _responseObject;
    NSString * _tokenType;
}

@property (nonatomic, readonly) NSString *accessToken;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic, readonly) NSString *refreshToken;
@property (nonatomic, readonly) NSDictionary *responseObject;
@property (nonatomic, readonly) NSString *tokenType;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isExpired;
- (bool)isValid;
- (id)refreshToken;
- (id)responseObject;
- (id)tokenType;

@end
