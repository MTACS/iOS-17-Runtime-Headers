
@interface MetalContext : NSObject {
    NSMutableArray * _bufferCache;
    NSLock * _bufferCacheLock;
    <MTLDepthStencilState> * _depthStencilState;
    <MTLTexture> * _fontTexture;
    FramebufferDescriptor * _framebufferDescriptor;
    double  _lastBufferCachePurge;
    NSMutableDictionary * _renderPipelineStateCache;
}

@property (nonatomic, retain) NSMutableArray *bufferCache;
@property (nonatomic, retain) NSLock *bufferCacheLock;
@property (nonatomic, retain) <MTLDepthStencilState> *depthStencilState;
@property (nonatomic, retain) <MTLTexture> *fontTexture;
@property (nonatomic, retain) FramebufferDescriptor *framebufferDescriptor;
@property (nonatomic) double lastBufferCachePurge;
@property (nonatomic, retain) NSMutableDictionary *renderPipelineStateCache;

- (void).cxx_destruct;
- (id)_renderPipelineStateForFramebufferDescriptor:(id)arg1 device:(id)arg2;
- (id)bufferCache;
- (id)bufferCacheLock;
- (id)depthStencilState;
- (id)dequeueReusableBufferOfLength:(unsigned long long)arg1 device:(id)arg2;
- (void)emptyRenderPipelineStateCache;
- (void)enqueueReusableBuffer:(id)arg1;
- (id)fontTexture;
- (id)framebufferDescriptor;
- (id)init;
- (double)lastBufferCachePurge;
- (void)makeDeviceObjectsWithDevice:(id)arg1;
- (void)makeFontTextureWithDevice:(id)arg1;
- (void)renderDrawData:(struct ImDrawData { bool x1; struct ImDrawList {} **x2; int x3; int x4; int x5; struct ImVec2 { float x_6_1_1; float x_6_1_2; } x6; struct ImVec2 { float x_7_1_1; float x_7_1_2; } x7; struct ImVec2 { float x_8_1_1; float x_8_1_2; } x8; struct ImGuiViewport {} *x9; }*)arg1 commandBuffer:(id)arg2 commandEncoder:(id)arg3;
- (id)renderPipelineStateCache;
- (id)renderPipelineStateForFrameAndDevice:(id)arg1;
- (void)setBufferCache:(id)arg1;
- (void)setBufferCacheLock:(id)arg1;
- (void)setDepthStencilState:(id)arg1;
- (void)setFontTexture:(id)arg1;
- (void)setFramebufferDescriptor:(id)arg1;
- (void)setLastBufferCachePurge:(double)arg1;
- (void)setRenderPipelineStateCache:(id)arg1;
- (void)setupRenderState:(struct ImDrawData { bool x1; struct ImDrawList {} **x2; int x3; int x4; int x5; struct ImVec2 { float x_6_1_1; float x_6_1_2; } x6; struct ImVec2 { float x_7_1_1; float x_7_1_2; } x7; struct ImVec2 { float x_8_1_1; float x_8_1_2; } x8; struct ImGuiViewport {} *x9; }*)arg1 commandBuffer:(id)arg2 commandEncoder:(id)arg3 renderPipelineState:(id)arg4 vertexBuffer:(id)arg5 vertexBufferOffset:(unsigned long long)arg6;

@end
