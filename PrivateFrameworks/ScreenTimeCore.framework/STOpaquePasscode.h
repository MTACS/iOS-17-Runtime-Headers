
@interface STOpaquePasscode : NSObject <NSCopying, NSSecureCoding> {
    NSString * _passcode;
}

@property (readonly, copy) NSString *passcode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPasscode:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOpaquePasscode:(id)arg1;
- (id)passcode;

@end
