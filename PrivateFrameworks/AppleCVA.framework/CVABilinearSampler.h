
@interface CVABilinearSampler : NSObject {
    <MTLDevice> * _device;
    MTLRenderPassDescriptor * _renderPassDescriptor;
    MTLRenderPipelineDescriptor * _renderPipelineDescriptor;
    <MTLRenderPipelineState> * _renderPipelineState;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*position; 
    }  _vertexData;
}

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 sourceQuad:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3 destinationTexture:(id)arg4 destinationQuad:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg5;
- (id)initWithDevice:(id)arg1;

@end
