
@interface SpatialResampler : NSObject {
    <MTLLibrary> * _defaultLibrary;
    <MTLDeviceSPI> * _device;
    ResamplerShader * _horizontalResampleKernel;
    ResamplerShader * _verticalResampleChromaKernel;
    ResamplerShader * _verticalResampleKernel;
}

- (void).cxx_destruct;
- (void)createKernels;
- (void)encodeSpatialResampleHorizontal:(id)arg1 Input:(id)arg2 Output:(id)arg3;
- (void)encodeSpatialResampleVertical:(id)arg1 Input:(id)arg2 Output:(id)arg3 isChroma:(bool)arg4;
- (void)encodeToCommandBuffer:(id)arg1 input:(struct __IOSurface { }*)arg2 output:(struct __IOSurface { }*)arg3;
- (id)getComputePipeLineStateForShader:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (void)setupTextures:(id)arg1 input:(struct __IOSurface { }*)arg2 output:(struct __IOSurface { }*)arg3;

@end
