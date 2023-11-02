
@protocol MPSNNPadding <NSObject, NSSecureCoding>

@required

- (unsigned long long)paddingMethod;

@optional

- (MPSImageDescriptor *)destinationImageDescriptorForSourceImages:(NSArray *)arg1 sourceStates:(NSArray *)arg2 forKernel:(MPSKernel *)arg3 suggestedDescriptor:(MPSImageDescriptor *)arg4;
- (id)inverse;
- (NSString *)label;

@end
