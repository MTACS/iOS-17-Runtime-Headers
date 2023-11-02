
@interface NSURLSessionMutableEffectiveConfiguration : NSURLSessionConfiguration <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (id)_initWithConfiguration:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
