
@interface PKMetalRenderState : NSObject {
    <MTLCommandBuffer> * _commandBuffer;
    NSMutableArray * _commandBuffers;
    <MTLCommandQueue> * _commandQueue;
    <MTLCommandBuffer> * _computeCommandBuffer;
    <MTLComputeCommandEncoder> * _computeEncoder;
    struct PKShaderPipelineConfig { 
        unsigned char framebufferPixelFormats[6]; 
    }  _defaultPipelineConfig;
    unsigned long long  _destinationColorAttachmentIndex;
    <MTLTexture> * _destinationTexture;
    NSMutableSet * _extendedLifetimeObjects;
    bool  _liveRendering;
    <MTLCommandBuffer> * _maskCommandBuffer;
    <MTLRenderCommandEncoder> * _maskRenderEncoder;
    bool  _msaaRendering;
    bool  _needPaintAccumulator;
    bool  _needRenderMask;
    unsigned long long  _numPaintFramebuffers;
    NSMutableSet * _purgeableFramebuffers;
    <MTLRenderCommandEncoder> * _renderEncoder;
    bool  _renderGroupMaskedRendering;
    bool  _renderOnPaper;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _renderTextureTexCoordTransform;
    struct { 
        unsigned long long x; 
        unsigned long long y; 
        unsigned long long width; 
        unsigned long long height; 
    }  _scissorRect;
    <MTLTexture> * _sixChannelContentTexture;
    long long  _sixChannelRenderMode;
    bool  _useAccumulatorsAsPaintFramebuffers;
    unsigned long long  _vertexEncodeCount;
    bool  _waitUntilCompletedOnCommit;
}

+ (void)renderTargetBarrierForRenderEncoder:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;

@end
