
@interface FigCaptureStillImageUnifiedBracketingSinkPipeline : FigCaptureSinkPipeline <FigCaptureStillImageSinkPipeline> {
    BWCompressedShotBufferNode * _compressedShotBufferNode;
    unsigned int  _inferencePriority;
    unsigned int  _pipelineStagePriority;
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
- (id)initWithConfiguration:(id)arg1 captureDevice:(id)arg2 sourceOutputsByPortType:(id)arg3 sourceSensorRawOutputsByPortType:(id)arg4 highResStillImageDimensions:(id)arg5 supplementalPointCloudCaptureDevice:(id)arg6 supplementalPointCloudSourceOutput:(id)arg7 captureStatusDelegate:(id)arg8 inferenceScheduler:(id)arg9 cinematicFramingStatesProvider:(id)arg10 graph:(id)arg11 name:(id)arg12;
- (id)portraitHDRStagingNode;
- (id)stillImageCoordinatorNode;
- (id)stillImageSinkNode;

@end
