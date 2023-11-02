
@interface _GamePolicyAssertion_Attribute : NSObject <NSSecureCoding>

@property (nonatomic, readonly) NSString *description;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
