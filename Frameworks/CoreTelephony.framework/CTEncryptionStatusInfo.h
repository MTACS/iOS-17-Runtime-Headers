
@interface CTEncryptionStatusInfo : NSObject <NSCopying, NSSecureCoding> {
    long long  _status;
}

@property (nonatomic) long long status;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
