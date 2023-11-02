
@interface FigLearnedMattingMetalStage : NSObject {
    <MTLComputePipelineState> * _clearTextureKernel;
    <MTLComputePipelineState> * _createTileWithScaleKernel;
    FigMetalContext * _metalContext;
    <MTLComputePipelineState> * _pasteTileKernel;
    struct __CVMetalTextureCache { } * _textureCache;
}

- (void).cxx_destruct;
- (int)clearBuffer:(struct __CVBuffer { }*)arg1;
- (int)createTileFrom:(void *)arg1 to:(void *)arg2 withStart:(void *)arg3 commandBuffer:(void *)arg4; // needs 4 arg types, found 3: struct __CVBuffer { }*, struct __CVBuffer { }*, id
- (int)createTileFrom:(void *)arg1 to:(void *)arg2 withStart:(void *)arg3 withScale:(void *)arg4 outCommandBuffer:(void *)arg5; // needs 5 arg types, found 3: struct __CVBuffer { }*, struct __CVBuffer { }*, id*
- (void)dealloc;
- (void)finishProcessing;
- (id)init;
- (id)initWithMetalContext:(id)arg1;
- (int)pasteTileFrom:(void *)arg1 to:(void *)arg2 withStart:(void *)arg3 withNoOverlapStart:(void *)arg4 withNoOverlapEnd:(void *)arg5 outCommandBuffer:(void *)arg6; // needs 6 arg types, found 3: struct __CVBuffer { }*, struct __CVBuffer { }*, id*

@end
