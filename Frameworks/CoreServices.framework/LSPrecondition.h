
@interface LSPrecondition : NSObject <NSSecureCoding>

+ (id)emptyPrecondition;
+ (id)registrationStatePreconditionForBundleWithIdentifier:(id)arg1 placeholderInstalled:(id)arg2 fullApplicationInstalled:(id)arg3;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isMet;

@end
