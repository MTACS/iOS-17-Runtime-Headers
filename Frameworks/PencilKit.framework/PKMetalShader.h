
@interface PKMetalShader : NSObject {
    PKMetalShader * _addBlendModeShader;
    PKMetalShader * _addNoAlphaBlendModeShader;
    long long  _blendMode;
    unsigned long long  _colorAttachmentIndex;
    <MTLFunction> * _fragmentFunction;
    PKMetalShader * _invertBlendModeShader;
    PKMetalShader * _linearDodgeBlendModeShader;
    PKMetalShader * _maxBlendModeShader;
    <MTLRenderPipelineState> * _msaaPipelineState;
    unsigned long long  _msaaPipelineStateSampleCount;
    <MTLRenderPipelineState> * _msaaPipelineStateWithColorMaskNone;
    unsigned long long  _msaaPipelineStateWithColorMaskNoneSampleCount;
    PKMetalShader * _multiplyBlendModeShader;
    PKMetalShader * _noBlendModeShader;
    unsigned long long  _numColorAttachments;
    <MTLRenderPipelineState> * _pipelineState;
    <MTLRenderPipelineState> * _pipelineStateWithColorMaskNone;
    MTLRenderPipelineDescriptor * _sharedPipelineDescriptor;
    PKMetalShader * _sourceOverBlendModeShader;
    unsigned long long  _stencilPixelFormat;
    PKMetalShader * _subtractBlendModeShader;
    <MTLFunction> * _vertexFunction;
}

- (void).cxx_destruct;
- (id)init;

@end
