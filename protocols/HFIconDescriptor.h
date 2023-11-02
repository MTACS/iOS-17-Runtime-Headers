
@protocol HFIconDescriptor <NSObject, NAEquatable, NAHashable>

@required

- (NSString *)identifier;
- (bool)shouldForceLTR;

@optional

- (long long)compare:(id <HFIconDescriptor>)arg1;
- (id)iconDescriptorByMergingWithIconDescriptor:(id <HFIconDescriptor>)arg1;

@end
