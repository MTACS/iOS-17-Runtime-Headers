
@interface UISPasteSharingToken : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _tokenValue;
}

@property (readonly) unsigned long long tokenValue;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTokenValue:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)tokenValue;

@end
