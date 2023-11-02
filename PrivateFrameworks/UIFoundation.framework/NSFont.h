
@interface NSFont : UIFont <NSCopying, NSSecureCoding>

+ (id)fontWithName:(id)arg1 size:(double)arg2;
+ (bool)supportsSecureCoding;

- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
