
@interface PTDepthConverter : NSObject {
    MTLRenderPassDescriptor * _GBufferRenderPassDescriptor;
    <MTLDepthStencilState> * _depthStencilState;
    <MTLRenderPipelineState> * _disparityToDepth;
    PTMetalContext * _metalContext;
    <MTLRenderPipelineState> * _segmentationToDepth;
    <MTLRenderPipelineState> * _thresholdedDisparityToDepth;
}

- (void).cxx_destruct;
- (int)disparityToDepth:(void *)arg1 inBaseDisparity:(void *)arg2 outDepth:(void *)arg3 depthNearFar:(void *)arg4 disparityBias:(void *)arg5 reverseZ:(void *)arg6; // needs 6 arg types, found 5: id, id, id, float, bool
- (id)initWithMetalContext:(id)arg1;
- (int)segmentationToDepth:(void *)arg1 inSegmentation:(void *)arg2 inAlphaMask:(void *)arg3 outDepth:(void *)arg4 depthNearFar:(void *)arg5 segmentationDepthNearFar:(void *)arg6 reverseZ:(void *)arg7 threshold:(void *)arg8; // needs 8 arg types, found 6: id, id, id, id, bool, float
- (int)thresholdedDisparityToDepth:(void *)arg1 inBaseDisparity:(void *)arg2 outDepth:(void *)arg3 depthNearFar:(void *)arg4 segmentationDepthNearFar:(void *)arg5 disparityThresholdNearFar:(void *)arg6 reverseZ:(void *)arg7 useDisparityBuffer:(void *)arg8; // needs 8 arg types, found 5: id, id, id, bool, id

@end
