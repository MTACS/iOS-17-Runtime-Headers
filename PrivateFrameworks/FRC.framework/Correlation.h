
@interface Correlation : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLComputePipelineState> * _correlationKernel;
    <MTLComputePipelineState> * _correlationSIMDKernel;
    <MTLComputePipelineState> * _correlationWithConcatKernel;
    <MTLComputePipelineState> * _correlationWithConcatSIMDKernel;
    <MTLDevice> * _device;
    bool  _interleaved;
    <MTLLibrary> * _mtlLibrary;
    bool  _useSIMDShuffle;
}

@property (nonatomic) bool useSIMDShuffle;

- (void).cxx_destruct;
- (void)calcCorrelation:(id)arg1 with:(id)arg2 output:(id)arg3;
- (void)dealloc;
- (void)encodeToCommandBuffer:(id)arg1 first:(id)arg2 second:(id)arg3 destination:(id)arg4;
- (id)initWithDevice:(id)arg1 interleaved:(bool)arg2;
- (void)setUseSIMDShuffle:(bool)arg1;
- (void)setupMetal;
- (bool)useSIMDShuffle;

@end
