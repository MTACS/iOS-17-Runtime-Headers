
@interface _MLCGPUNeuron : _MLCGPULayer

+ (id)createMPSNeuronDescriptorWith:(id)arg1;
+ (id)layerWithDevice:(id)arg1 descriptor:(id)arg2;
+ (int)mpsNeurontypeFrom:(int)arg1;

- (id)initWithDevice:(id)arg1 descriptor:(id)arg2;

@end
