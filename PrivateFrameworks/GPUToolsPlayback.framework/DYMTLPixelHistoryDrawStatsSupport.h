
@interface DYMTLPixelHistoryDrawStatsSupport : NSObject {
    NSMutableArray * _mockColorTextureDescriptors;
    NSMutableArray * _mockColorTextures;
    <MTLTexture> * _mockDepthTexture;
    MTLTextureDescriptor * _mockDepthTextureDescriptor;
    <MTLTexture> * _mockStencilTexture;
    MTLTextureDescriptor * _mockStencilTextureDescriptor;
    <MTLCommandBuffer> * _originalCommandBuffer;
    unsigned long long  _originalCommandEncoderId;
    <DYMTLStatefulRenderCommandEncoder> * _originalEncoder;
    <DYMTLStatefulParallelRenderCommandEncoder> * _originalParallelEncoder;
    MTLRenderPassDescriptor * _pixelHistoryMockRenderPassDescriptor;
    MTLRenderPassDescriptor * _pixelHistoryRenderPassDescriptor;
    <MTLRenderPipelineState> * _pixelHistorySolidRenderPipelineState;
    MTLRenderPassDescriptor * _pixelHistoryVisibilityMockRenderPassDescriptor;
    DYMTLCommonDebugFunctionPlayer * _player;
    <DYMTLStatefulRenderCommandEncoder> * _savedVertexFragmentState;
    <MTLFunction> * _solidCreationFragmentFunction;
    <MTLLibrary> * _solidLibrary;
    <MTLTexture> * _stencilTexture;
    MTLTextureDescriptor * _stencilTextureDescriptor;
    bool  _supports_tessellation;
    <MTLBuffer> * _visibilityResultBuffer;
}

@property (nonatomic, retain) <MTLTexture> *mockDepthTexture;
@property (nonatomic, retain) <MTLTexture> *mockStencilTexture;

- (void).cxx_destruct;
- (bool)_prepareWithEncoder:(id)arg1 parallelEncoder:(id)arg2 pipelineState:(id)arg3 renderPassDescriptor:(struct DYMTLRenderPassDescriptor { unsigned long long x1; unsigned long long x2; struct DYMTLRenderPassAttachmentDescriptor { unsigned long long x_3_1_1; unsigned long long x_3_1_2; unsigned long long x_3_1_3; unsigned long long x_3_1_4; unsigned long long x_3_1_5; unsigned long long x_3_1_6; unsigned long long x_3_1_7; unsigned long long x_3_1_8; unsigned long long x_3_1_9; unsigned long long x_3_1_10; unsigned long long x_3_1_11; struct DYMTLClearValue { union { struct { double x_1_4_1; double x_1_4_2; double x_1_4_3; double x_1_4_4; } x_1_3_1; double x_1_3_2[4]; } x_12_2_1; } x_3_1_12; bool x_3_1_13; unsigned long long x_3_1_14; unsigned long long x_3_1_15; } x3[8]; struct DYMTLRenderPassAttachmentDescriptor { unsigned long long x_4_1_1; unsigned long long x_4_1_2; unsigned long long x_4_1_3; unsigned long long x_4_1_4; unsigned long long x_4_1_5; unsigned long long x_4_1_6; unsigned long long x_4_1_7; unsigned long long x_4_1_8; unsigned long long x_4_1_9; unsigned long long x_4_1_10; unsigned long long x_4_1_11; struct DYMTLClearValue { union { struct { double x_1_4_1; double x_1_4_2; double x_1_4_3; double x_1_4_4; } x_1_3_1; double x_1_3_2[4]; } x_12_2_1; } x_4_1_12; bool x_4_1_13; unsigned long long x_4_1_14; unsigned long long x_4_1_15; } x4; }*)arg4;
- (bool)_updateTextureDescriptor:(id)arg1 usingEncoder:(id)arg2 renderPassDescriptor:(struct DYMTLRenderPassDescriptor { unsigned long long x1; unsigned long long x2; struct DYMTLRenderPassAttachmentDescriptor { unsigned long long x_3_1_1; unsigned long long x_3_1_2; unsigned long long x_3_1_3; unsigned long long x_3_1_4; unsigned long long x_3_1_5; unsigned long long x_3_1_6; unsigned long long x_3_1_7; unsigned long long x_3_1_8; unsigned long long x_3_1_9; unsigned long long x_3_1_10; unsigned long long x_3_1_11; struct DYMTLClearValue { union { struct { double x_1_4_1; double x_1_4_2; double x_1_4_3; double x_1_4_4; } x_1_3_1; double x_1_3_2[4]; } x_12_2_1; } x_3_1_12; bool x_3_1_13; unsigned long long x_3_1_14; unsigned long long x_3_1_15; } x3[8]; struct DYMTLRenderPassAttachmentDescriptor { unsigned long long x_4_1_1; unsigned long long x_4_1_2; unsigned long long x_4_1_3; unsigned long long x_4_1_4; unsigned long long x_4_1_5; unsigned long long x_4_1_6; unsigned long long x_4_1_7; unsigned long long x_4_1_8; unsigned long long x_4_1_9; unsigned long long x_4_1_10; unsigned long long x_4_1_11; struct DYMTLClearValue { union { struct { double x_1_4_1; double x_1_4_2; double x_1_4_3; double x_1_4_4; } x_1_3_1; double x_1_3_2[4]; } x_12_2_1; } x_4_1_12; bool x_4_1_13; unsigned long long x_4_1_14; unsigned long long x_4_1_15; } x4; }*)arg3;
- (void)collectPixelHistoryStencilDrawStatsAtX:(unsigned long long)arg1 y:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)collectPixelHistoryVisibilityDrawStatsAtCompletion:(id /* block */)arg1;
- (bool)createNumFragmentPassesRenderCommandEncoderInCommandBuffer:(id)arg1 originalRenderPassDescriptor:(id)arg2 originalPipeline:(id)arg3;
- (bool)createNumTotalRenderCommandEncoderInCommandBuffer:(id)arg1 originalPipeline:(id)arg2;
- (bool)createNumVisibleRenderCommandEncoderInCommandBuffer:(id)arg1 originalRenderPassDescriptor:(id)arg2 originalPipeline:(id)arg3 depthStencilDescriptor:(id)arg4 mockDepthStencilTexture:(id)arg5 visibilityResultMode:(unsigned long long)arg6 atX:(unsigned long long)arg7 y:(unsigned long long)arg8;
- (bool)createNumVisibleRenderCommandEncoderInCommandBuffer:(id)arg1 originalRenderPassDescriptor:(id)arg2 originalPipeline:(id)arg3 depthStencilDescriptor:(id)arg4 mockDepthTexture:(id)arg5 visibilityResultMode:(unsigned long long)arg6 atX:(unsigned long long)arg7 y:(unsigned long long)arg8;
- (bool)createNumVisibleRenderCommandEncoderInCommandBuffer:(id)arg1 originalRenderPassDescriptor:(id)arg2 originalPipeline:(id)arg3 depthStencilDescriptor:(id)arg4 mockStencilTexture:(id)arg5 visibilityResultMode:(unsigned long long)arg6 atX:(unsigned long long)arg7 y:(unsigned long long)arg8;
- (id)getSingleUseMockColorTexture:(unsigned long long)arg1 pixelFormat:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (id)getSingleUseMockDepthTextureWithPixelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (id)getSingleUseMockStencilTextureWithPixelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (id)initWithDebugFunctionPlayer:(id)arg1;
- (id)mockDepthTexture;
- (id)mockStencilTexture;
- (bool)prepareWithCommandEncoderId:(unsigned long long)arg1 parallelEncoderId:(unsigned long long)arg2 pipelineId:(unsigned long long)arg3 renderPassDescriptor:(struct DYMTLRenderPassDescriptor { unsigned long long x1; unsigned long long x2; struct DYMTLRenderPassAttachmentDescriptor { unsigned long long x_3_1_1; unsigned long long x_3_1_2; unsigned long long x_3_1_3; unsigned long long x_3_1_4; unsigned long long x_3_1_5; unsigned long long x_3_1_6; unsigned long long x_3_1_7; unsigned long long x_3_1_8; unsigned long long x_3_1_9; unsigned long long x_3_1_10; unsigned long long x_3_1_11; struct DYMTLClearValue { union { struct { double x_1_4_1; double x_1_4_2; double x_1_4_3; double x_1_4_4; } x_1_3_1; double x_1_3_2[4]; } x_12_2_1; } x_3_1_12; bool x_3_1_13; unsigned long long x_3_1_14; unsigned long long x_3_1_15; } x3[8]; struct DYMTLRenderPassAttachmentDescriptor { unsigned long long x_4_1_1; unsigned long long x_4_1_2; unsigned long long x_4_1_3; unsigned long long x_4_1_4; unsigned long long x_4_1_5; unsigned long long x_4_1_6; unsigned long long x_4_1_7; unsigned long long x_4_1_8; unsigned long long x_4_1_9; unsigned long long x_4_1_10; unsigned long long x_4_1_11; struct DYMTLClearValue { union { struct { double x_1_4_1; double x_1_4_2; double x_1_4_3; double x_1_4_4; } x_1_3_1; double x_1_3_2[4]; } x_12_2_1; } x_4_1_12; bool x_4_1_13; unsigned long long x_4_1_14; unsigned long long x_4_1_15; } x4; }*)arg4;
- (void)setMockDepthTexture:(id)arg1;
- (void)setMockStencilTexture:(id)arg1;

@end
