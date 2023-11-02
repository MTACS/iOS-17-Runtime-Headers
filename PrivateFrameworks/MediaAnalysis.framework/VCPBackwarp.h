
@interface VCPBackwarp : NSObject {
    <MTLComputePipelineState> * _backwarpKernel;
    <MTLDevice> * _device;
    <MTLLibrary> * _mtlLibrary;
}

- (void).cxx_destruct;
- (int)configureGPU;
- (int)encodeToCommandBuffer:(id)arg1 input:(id)arg2 output:(id)arg3 flow:(id)arg4 upscaledFlow:(id)arg5;
- (id)initWithDevice:(id)arg1;

@end
