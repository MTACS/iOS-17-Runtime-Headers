
@interface AR2DSkeletonDetectionPostProcessGPU : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
    <MTLBuffer> * _input;
    <MTLBuffer> * _intermediate;
    <MTLBuffer> * _output;
    <MTLComputePipelineState> * _pipelineStateInterpolate;
    <MTLComputePipelineState> * _pipelineStateMaxFilter;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (/* Warning: Unrecognized filer type: ' ' using 'void*' */ void**)process:(struct __IOSurface { }*)arg1 counter:(unsigned int*)arg2 shape:(struct CGSize { double x1; double x2; })arg3;

@end
