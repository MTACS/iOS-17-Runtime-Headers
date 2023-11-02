
@interface RBAssertionDescriptorValidator : NSObject <RBAssertionDescriptorValidating>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)isAssertionValidForContext:(id)arg1 error:(out id*)arg2;

@end
