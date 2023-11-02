
@interface NSInflectionRule : NSObject <NSCopying, NSSecureCoding>

+ (id)automaticRule;
+ (bool)canInflectLanguage:(id)arg1;
+ (bool)canInflectPreferredLocalization;
+ (bool)supportsSecureCoding;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
