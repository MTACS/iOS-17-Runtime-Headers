
@interface DYMTLTextureRenderer : NSObject {
    <MTLFunction> * _blendingFragmentFunction;
    <MTLFunction> * _blendingFragmentFunction_2dArray;
    MTLDepthStencilDescriptor * _depthStencilDescriptor;
    <MTLDevice> * _device;
    <MTLLibrary> * _library;
    <MTLFunction> * _opaqueFragmentFunction;
    <MTLBuffer> * _positionBuffer;
    MTLRenderPipelineDescriptor * _renderPipelineDescriptor;
    <MTLSamplerState> * _samplerState;
    <MTLBuffer> * _texCoordBuffer;
    struct UniformData { 
        float blendColor[4]; 
        unsigned int layerIndex; 
        unsigned int padding[3]; 
    }  _uniformData;
    <MTLFunction> * _vertexFunction;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)_renderPassPixelFormatFromDescriptor:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (void)renderTexture:(id)arg1 withEncoder:(id)arg2 enableBlending:(bool)arg3 layerIndex:(unsigned int)arg4;
- (void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;

@end
