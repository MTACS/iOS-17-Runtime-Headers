
@interface TIKeyboardBehaviors : NSObject <NSCopying, NSSecureCoding>

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyBehaviorsForState:(id)arg1;

@end
