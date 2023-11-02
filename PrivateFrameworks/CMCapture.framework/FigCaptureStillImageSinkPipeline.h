
@interface FigCaptureStillImageSinkPipeline : FigCaptureSinkPipeline <FigCaptureStillImageSinkPipeline> {
    BWFigVideoCaptureDevice * _captureDevice;
    BWSISNode * _legacySISNode;
    BWPortraitHDRStagingNode * _portraitHDRStagingNode;
    BWStillImageCoordinatorNode * _stillImageCoordinatorNode;
    BWDepthConverterNode * _stillImageDepthConverterNode;
    BWStillImageBravoDisparityNode * _stillImageDisparityNode;
    BWStillImageSampleBufferSinkNode * _stillImageSinkNode;
}

@property (nonatomic, readonly) BWCompressedShotBufferNode *compressedShotBufferNode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *nodes;
@property (nonatomic, readonly) BWPortraitHDRStagingNode *portraitHDRStagingNode;
@property (nonatomic, readonly) NSString *sinkID;
@property (nonatomic, readonly) BWStillImageCoordinatorNode *stillImageCoordinatorNode;
@property (nonatomic, readonly) BWStillImageSampleBufferSinkNode *stillImageSinkNode;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)pipelineBaseName;

- (id)compressedShotBufferNode;
- (void)dealloc;
- (void)enablePrepareTimeAllocationsForDeferredPrepare;
- (id)initWithConfiguration:(id)arg1 captureDevice:(id)arg2 sourceOutputsByPortType:(id)arg3 captureStatusDelegate:(id)arg4 inferenceScheduler:(id)arg5 graph:(id)arg6 name:(id)arg7;
- (id)portraitHDRStagingNode;
- (id)stillImageCoordinatorNode;
- (id)stillImageSinkNode;

@end
