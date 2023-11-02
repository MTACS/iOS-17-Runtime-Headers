
@interface CTRoadsideProvider : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bizId;
    bool  _isActive;
    long long  _providerId;
    NSString * _providerName;
    bool  _supportsPayPerUse;
}

@property (nonatomic, retain) NSString *bizId;
@property (nonatomic) bool isActive;
@property (nonatomic) long long providerId;
@property (nonatomic, retain) NSString *providerName;
@property (nonatomic) bool supportsPayPerUse;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bizId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToProvider:(id)arg1;
- (long long)providerId;
- (id)providerName;
- (void)setBizId:(id)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setProviderId:(long long)arg1;
- (void)setProviderName:(id)arg1;
- (void)setSupportsPayPerUse:(bool)arg1;
- (bool)supportsPayPerUse;

@end
