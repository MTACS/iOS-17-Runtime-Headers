
@protocol RBAssertionDescriptorValidating <NSObject>

@required

- (bool)isAssertionValidForContext:(RBAssertionDescriptorValidatorContext *)arg1 error:(out id*)arg2;

@end
