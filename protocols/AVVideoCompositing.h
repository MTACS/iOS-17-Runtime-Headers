
@protocol AVVideoCompositing <NSObject>

@required

- (void)renderContextChanged:(AVVideoCompositionRenderContext *)arg1;
- (NSDictionary *)requiredPixelBufferAttributesForRenderContext;
- (NSDictionary *)sourcePixelBufferAttributes;
- (void)startVideoCompositionRequest:(AVAsynchronousVideoCompositionRequest *)arg1;

@optional

- (void)anticipateRenderingUsingHint:(AVVideoCompositionRenderHint *)arg1;
- (bool)canConformColorOfSourceFrames;
- (void)cancelAllPendingVideoCompositionRequests;
- (void)prerollForRenderingUsingHint:(AVVideoCompositionRenderHint *)arg1;
- (bool)supportsHDRSourceFrames;
- (bool)supportsWideColorSourceFrames;

@end
