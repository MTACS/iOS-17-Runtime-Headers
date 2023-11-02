
@interface BackwardDmShader : NSObject {
    bool  _applyYGamma;
    unsigned long long  _colorFormat;
    NSString * _fragmentKernelName;
    bool  _p3CSC;
    <MTLRenderPipelineState> * _renderPipeline;
    bool  _useCustomMatrix;
    NSString * _vertexKernelName;
}

+ (id)createShaderWithVertexName:(id)arg1 fragmentName:(id)arg2 colorFormat:(unsigned long long)arg3 useCustomMatrix:(bool)arg4 p3CSC:(bool)arg5 applyYGamma:(bool)arg6;

- (void).cxx_destruct;
- (id)getRenderPipelineStateForDevice:(id)arg1 Library:(id)arg2;
- (id)getRenderPipelineStateForDevice:(id)arg1 Library:(id)arg2 Constants:(bool*)arg3 ConstantNumber:(unsigned int)arg4;
- (id)initShaderWithVertexName:(id)arg1 fragmentName:(id)arg2 colorFormat:(unsigned long long)arg3 useCustomMatrix:(bool)arg4 p3CSC:(bool)arg5 applyYGamma:(bool)arg6;

@end
