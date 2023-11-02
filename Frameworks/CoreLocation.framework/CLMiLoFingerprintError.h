
@interface CLMiLoFingerprintError : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _fingerprintErrorEnum;
}

@property (nonatomic, readonly) unsigned long long fingerprintErrorEnum;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fingerprintErrorEnum;
- (id)initWithCoder:(id)arg1;
- (id)initWithFingerprintErrorEnum:(unsigned long long)arg1;

@end
