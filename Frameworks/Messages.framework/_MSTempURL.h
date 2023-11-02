
@interface _MSTempURL : NSURL

+ (bool)_isInvalidPath:(id)arg1;
+ (id)_resolvedTempDirectory;
+ (bool)supportsSecureCoding;

- (Class)classForCoder;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end
