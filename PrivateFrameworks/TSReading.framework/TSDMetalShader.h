
@interface TSDMetalShader : NSObject {
    unsigned long long  _bufferIndex;
    long long  _fragmentUniformsIndex;
    unsigned long long  _fragmentUniformsSize;
    NSString * _name;
    MTLRenderPipelineReflection * _pipelineReflectionObject;
    <MTLRenderPipelineState> * _pipelineState;
    long long  _vertexUniformsIndex;
    unsigned long long  _vertexUniformsSize;
}

@property (nonatomic, readonly) unsigned long long bufferIndex;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) MTLRenderPipelineReflection *pipelineReflectionObject;
@property (nonatomic, readonly) <MTLRenderPipelineState> *pipelineState;

- (void).cxx_destruct;
- (unsigned long long)bufferIndex;
- (id)description;
- (id)initCustomShaderWithVertexShader:(id)arg1 fragmentShader:(id)arg2 device:(id)arg3 library:(id)arg4 colorAttachment:(id)arg5;
- (id)initCustomShaderWithVertexShader:(id)arg1 fragmentShader:(id)arg2 device:(id)arg3 library:(id)arg4 colorAttachment:(id)arg5 velocityAttachment:(id)arg6;
- (id)initDefaultBlendShaderWithDevice:(id)arg1 colorAttachment:(id)arg2 velocityAttachment:(id)arg3 motionBlur:(bool)arg4;
- (id)initDefaultBloomShaderWithDevice:(id)arg1 colorAttachment:(id)arg2;
- (id)initDefaultGaussianBlurShaderWithDevice:(id)arg1 colorAttachment:(id)arg2 halfSizedRadius:(bool)arg3;
- (id)initDefaultNeighborMaxBlurShaderWithDevice:(id)arg1 colorAttachment:(id)arg2;
- (id)initDefaultShaderWithVertexShader:(id)arg1 fragmentShader:(id)arg2 device:(id)arg3 colorAttachment:(id)arg4;
- (id)initDefaultSingleDirectionMotionBlurShaderWithDevice:(id)arg1 colorAttachment:(id)arg2;
- (id)initDefaultTextureAndOpacityMotionBlurShaderWithDevice:(id)arg1 colorAttachment:(id)arg2 velocityAttachment:(id)arg3 motionBlur:(bool)arg4;
- (id)initDefaultTextureAndOpacityShaderWithDevice:(id)arg1 colorAttachment:(id)arg2;
- (id)initDefaultTextureMotionBlurShaderWithDevice:(id)arg1 colorAttachment:(id)arg2 velocityAttachment:(id)arg3;
- (id)initDefaultTextureShaderWithDevice:(id)arg1 colorAttachment:(id)arg2;
- (id)initDefaultTileMaxBlurShaderWithDevice:(id)arg1 colorAttachment:(id)arg2;
- (id)initDefaultVelocityCollectionShaderWithDevice:(id)arg1 colorAttachment:(id)arg2;
- (id)initDefaultVelocityVisualizerShaderWithDevice:(id)arg1 colorAttachment:(id)arg2;
- (id)initQuadMotionBlurTextureShaderWithFragmentShader:(id)arg1 device:(id)arg2 library:(id)arg3 colorAttachment:(id)arg4 velocityAttachment:(id)arg5;
- (id)initQuadTextureShaderWithFragmentShader:(id)arg1 device:(id)arg2 library:(id)arg3 colorAttachment:(id)arg4;
- (id)initQuadTextureShaderWithFragmentShader:(id)arg1 device:(id)arg2 library:(id)arg3 colorAttachment:(id)arg4 velocityAttachment:(id)arg5;
- (id)initWithDefaultVertexShader:(id)arg1 fragmentShader:(id)arg2 device:(id)arg3 colorAttachment:(id)arg4 velocityAttachment:(id)arg5 label:(id)arg6 setupUniforms:(bool)arg7;
- (id)name;
- (id)p_createPipelineStateWithRenderPipelineDescriptor:(id)arg1 device:(id)arg2 setupUniforms:(bool)arg3;
- (long long)p_indexOfUniformsFromMetalBindings:(id)arg1 size:(unsigned long long*)arg2 bufferIndex:(unsigned long long*)arg3;
- (void)p_setDefaultVertexUniforms;
- (void)p_setupPipelineStateWithVertexFunction:(id)arg1 fragmentShader:(id)arg2 device:(id)arg3 library:(id)arg4 colorAttachment:(id)arg5 velocityAttachment:(id)arg6 setupUniforms:(bool)arg7;
- (void)p_setupPipelineStateWithVertexShader:(id)arg1 fragmentShader:(id)arg2 device:(id)arg3 library:(id)arg4 colorAttachment:(id)arg5 velocityAttachment:(id)arg6 setupUniforms:(bool)arg7;
- (id)pipelineReflectionObject;
- (id)pipelineState;
- (void)setName:(id)arg1;
- (void)setPipelineStateWithEncoder:(id)arg1;
- (void)setPipelineStateWithEncoder:(id)arg1 fragmentBytes:(const void*)arg2;
- (void)setPipelineStateWithEncoder:(id)arg1 vertexBytes:(const void*)arg2;
- (void)setPipelineStateWithEncoder:(id)arg1 vertexBytes:(const void*)arg2 fragmentBytes:(const void*)arg3;

@end
