
@interface ABPK2DDetectionPostprocessGPU : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
    <MTLBuffer> * _input;
    <MTLBuffer> * _intermediate;
    <MTLLibrary> * _library;
    unsigned long long  _nChannels;
    <MTLBuffer> * _output;
    <MTLComputePipelineState> * _pipelineStateInterpolate;
    <MTLComputePipelineState> * _pipelineStateMaxFilter;
}

- (void).cxx_destruct;
- (void)_copyToInputAsFloat16:(float*)arg1 shape:(struct CGSize { double x1; double x2; })arg2;
- (void)dealloc;
- (id)init;
- (id)initWithNumberOfChannels:(unsigned long long)arg1;
- (/* Warning: Unrecognized filer type: ' ' using 'void*' */ void**)process:(struct __IOSurface { }*)arg1 counter:(unsigned int*)arg2 shape:(struct CGSize { double x1; double x2; })arg3;

@end
