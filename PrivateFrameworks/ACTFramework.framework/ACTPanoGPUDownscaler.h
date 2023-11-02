
@interface ACTPanoGPUDownscaler : NSObject {
    <MTLDevice> * _device;
    <MTLComputePipelineState> * _downsampleState;
    <MTLCommandQueue> * _queue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (int)downsample:(struct __CVBuffer { }*)arg1 to:(struct __CVBuffer { }*)arg2;
- (id)init;
- (id)initWithContext:(id)arg1;

@end
