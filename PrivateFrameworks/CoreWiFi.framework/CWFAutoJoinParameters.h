
@interface CWFAutoJoinParameters : NSObject <NSCopying, NSSecureCoding> {
    long long  _mode;
    NSArray * _preferredChannels;
    CWFNetworkProfile * _targetNetworkProfile;
    long long  _trigger;
}

@property (nonatomic) long long mode;
@property (nonatomic, copy) NSArray *preferredChannels;
@property (nonatomic, copy) CWFNetworkProfile *targetNetworkProfile;
@property (nonatomic) long long trigger;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAutoJoinParameters:(id)arg1;
- (long long)mode;
- (id)preferredChannels;
- (void)setMode:(long long)arg1;
- (void)setPreferredChannels:(id)arg1;
- (void)setTargetNetworkProfile:(id)arg1;
- (void)setTrigger:(long long)arg1;
- (id)targetNetworkProfile;
- (long long)trigger;

@end
