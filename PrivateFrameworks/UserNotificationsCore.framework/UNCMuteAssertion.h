
@interface UNCMuteAssertion : NSObject <NSCopying, NSSecureCoding>

+ (bool)supportsSecureCoding;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)getNextExpirationDate:(id*)arg1 wasPurged:(bool*)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isActiveForThreadIdentifier:(id)arg1;

@end
