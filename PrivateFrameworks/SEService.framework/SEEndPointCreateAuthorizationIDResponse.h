
@interface SEEndPointCreateAuthorizationIDResponse : NSObject <NSSecureCoding> {
    NSNumber * _authorizationCount;
    NSData * _authorizationID;
    NSNumber * _authorizationInterval;
}

@property (nonatomic, retain) NSNumber *authorizationCount;
@property (nonatomic, retain) NSData *authorizationID;
@property (nonatomic, retain) NSNumber *authorizationInterval;

+ (bool)supportsSecureCoding;
+ (id)withAuthorizationID:(id)arg1 authorizationInterval:(double)arg2 authorizationCount:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)authorizationCount;
- (id)authorizationID;
- (id)authorizationInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAuthorizationCount:(id)arg1;
- (void)setAuthorizationID:(id)arg1;
- (void)setAuthorizationInterval:(id)arg1;

@end
