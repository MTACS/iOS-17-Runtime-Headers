
@interface INIntentDonationMetadata : NSObject <NSCopying, NSSecureCoding>

+ (Class)_intentClass;
+ (bool)supportsSecureCoding;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
