
@interface AACustodianRecoveryConfiguration : NSObject <NSCopying, NSSecureCoding> {
    long long  _codeLength;
    long long  _maxSessionTime;
}

@property (nonatomic) long long codeLength;
@property (nonatomic) long long maxSessionTime;

+ (bool)supportsSecureCoding;

- (long long)codeLength;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigurationDictionary:(id)arg1;
- (long long)maxSessionTime;
- (void)setCodeLength:(long long)arg1;
- (void)setMaxSessionTime:(long long)arg1;

@end
