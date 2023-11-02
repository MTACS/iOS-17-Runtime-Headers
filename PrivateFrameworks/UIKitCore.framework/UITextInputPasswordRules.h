
@interface UITextInputPasswordRules : NSObject <NSCopying, NSSecureCoding> {
    NSString * _passwordRulesDescriptor;
}

@property (nonatomic, readonly) NSString *passwordRulesDescriptor;

+ (id)passwordRulesWithDescriptor:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initPasswordRulesWithDescriptor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)passwordRulesDescriptor;

@end
