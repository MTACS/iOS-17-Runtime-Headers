
@interface VFXCachedRenderCommandEncoder : NSObject <MTLRenderCommandEncoder> {
    struct Cache { 
        <MTLDepthStencilState> *depthStencilStates; 
        <MTLRenderPipelineState> *renderPipelineState; 
        unsigned long long winding; 
        unsigned long long cullMode; 
        unsigned long long fillMode; 
        unsigned long long clipMode; 
        bool windingChanged; 
        bool cullModeChanged; 
        bool fillModeChanged; 
        bool clipModeChanged; 
        bool inverseWinding; 
        unsigned int stencilReferenceValueFront; 
        unsigned int stencilReferenceValueBack; 
    }  _cache;
    <MTLRenderCommandEncoder> * _encoder;
    struct BindingsCache { 
        struct BufferAndOffset { 
            <MTLBuffer> *buffer; 
            unsigned long long offset; 
        } buffers[32]; 
        <MTLTexture> *textures[32]; 
        <MTLSamplerState> *samplers[16]; 
    }  _fragmentCache;
    struct BindingsCache { 
        struct BufferAndOffset { 
            <MTLBuffer> *buffer; 
            unsigned long long offset; 
        } buffers[32]; 
        <MTLTexture> *textures[32]; 
        <MTLSamplerState> *samplers[16]; 
    }  _vertexCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;
@property (readonly) unsigned long long tileHeight;
@property (readonly) unsigned long long tileWidth;

- (id).cxx_construct;
- (void)applyChangedStates;
- (id)device;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexType:(unsigned long long)arg2 indexBuffer:(id)arg3 indexBufferOffset:(unsigned long long)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(unsigned long long)arg6;
- (void)drawPrimitives:(unsigned long long)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5;
- (void)endEncoding;
- (id)init:(id)arg1;
- (void)insertDebugSignpost:(id)arg1;
- (id)label;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setCullMode:(unsigned long long)arg1;
- (void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3;
- (void)setDepthClipMode:(unsigned long long)arg1;
- (void)setDepthStencilState:(id)arg1;
- (void)setDepthStoreAction:(unsigned long long)arg1;
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setFragmentBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setFragmentSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setFragmentSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setFragmentSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setFrontFacingWinding:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setRenderPipelineState:(id)arg1;
- (void)setScissorRect:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (void)setScissorRects:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 count:(unsigned long long)arg2;
- (void)setStencilFrontReferenceValue:(unsigned int)arg1 backReferenceValue:(unsigned int)arg2;
- (void)setStencilReferenceValue:(unsigned int)arg1;
- (void)setStencilStoreAction:(unsigned long long)arg1;
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;
- (void)setTriangleFillMode:(unsigned long long)arg1;
- (void)setVertexAmplificationCount:(unsigned long long)arg1 viewMappings:(const struct { unsigned int x1; unsigned int x2; }*)arg2;
- (void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setVertexBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setVertexBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setVertexBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setVertexSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setVertexSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setVertexSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setVertexTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setVertexTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setViewport:(struct { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setViewports:(const struct { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg1 count:(unsigned long long)arg2;
- (unsigned long long)tileHeight;
- (unsigned long long)tileWidth;
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3;
- (void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;
- (void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 stages:(unsigned long long)arg4;
- (void)vfx_setLineWidth:(float)arg1;

@end
