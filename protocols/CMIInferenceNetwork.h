
@protocol CMIInferenceNetwork <NSObject>

@required

- (int)allocateInstancesWithDevice:(id <MTLDevice>)arg1 instanceCount:(unsigned long long)arg2 useTextureArrays:(bool)arg3;
- (int)bindIOPortsWithInputNames:(NSArray *)arg1 withOutputNames:(NSArray *)arg2;
- (NSArray *)getInputs;
- (<CMIInferenceNetworkInstance> *)getInstanceWithIndex:(unsigned long long)arg1;
- (NSArray *)getOutputs;

@end
