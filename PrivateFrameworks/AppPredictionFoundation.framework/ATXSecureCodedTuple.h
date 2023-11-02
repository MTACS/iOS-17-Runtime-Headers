
@interface ATXSecureCodedTuple : _PASTuple2 <NSSecureCoding>

+ (id)allowedClassNames;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
