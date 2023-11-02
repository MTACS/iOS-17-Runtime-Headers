
@interface IDSQueryKeyTransparencyContext : NSObject <NSCopying, NSSecureCoding> {
    NSData * _accountKey;
    NSDate * _queryResponseTime;
    NSUUID * _ticket;
    KTVerifierResult * _verifierResult;
}

@property (nonatomic, readonly) NSData *accountKey;
@property (nonatomic, readonly) NSDate *queryResponseTime;
@property (nonatomic, readonly) NSUUID *ticket;
@property (nonatomic, readonly) KTVerifierResult *verifierResult;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithVerifierResult:(id)arg1 ticket:(id)arg2 accountKey:(id)arg3 queryResponseTime:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToQueryKeyTransparencyContext:(id)arg1;
- (id)queryResponseTime;
- (id)ticket;
- (id)verifierResult;

@end
