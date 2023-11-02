
@protocol FigCaptureStillImageSinkPipeline <NSObject>

@required

+ (NSString *)pipelineBaseName;

- (BWCompressedShotBufferNode *)compressedShotBufferNode;
- (void)enablePrepareTimeAllocationsForDeferredPrepare;
- (NSArray *)nodes;
- (BWPortraitHDRStagingNode *)portraitHDRStagingNode;
- (NSString *)sinkID;
- (BWStillImageCoordinatorNode *)stillImageCoordinatorNode;
- (BWStillImageSampleBufferSinkNode *)stillImageSinkNode;

@end
