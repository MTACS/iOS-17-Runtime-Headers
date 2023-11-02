
@interface VCPCorrelation : NSObject {
    <MTLComputePipelineState> * _correlationKernel;
    <MTLDevice> * _device;
    <MTLLibrary> * _mtlLibrary;
}

- (void).cxx_destruct;
- (int)configureGPU;
- (int)encodeToCommandBuffer:(id)arg1 firstInput:(id)arg2 secondInput:(id)arg3 correlation:(id)arg4;
- (id)initWithDevice:(id)arg1;

@end
