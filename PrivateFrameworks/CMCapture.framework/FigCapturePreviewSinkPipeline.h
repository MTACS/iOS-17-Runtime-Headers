
@interface FigCapturePreviewSinkPipeline : FigCaptureSinkPipeline {
    bool  _applyPreviewShiftToMomentCapture;
    bool  _cinematicVideoEnabled;
    BWNodeOutput * _depthDataSinkOutput;
    bool  _depthFilterRenderingEnabled;
    BWStreamingFilterNode * _filterNode;
    BWImageQueueSinkNode * _imageQueueSinkNode;
    NSDictionary * _imageQueueUpdatedPayloadToBeSentAfterCommitConfiguration;
    BWNodeOutput * _metadataSinkOutput;
    NSObject<OS_dispatch_queue> * _metalSubmissionAndCompletionQueue;
    BWInferenceNode * _opticalFlowInferenceNode;
    struct FigCaptureVideoTransform { 
        bool mirrored; 
        int rotationDegrees; 
        struct { 
            int width; 
            int height; 
        } dimensions; 
    }  _outputTransform;
    bool  _overCaptureEnabled;
    BWPreviewStabilizationNode * _previewStabilizationNode;
    BWPreviewStitcherNode * _previewStitcher;
    long long  _primaryCaptureRectUniqueID;
    BWPixelTransferNode * _scalerNode;
    BWNodeOutput * _sceneClassifierPipelineUpstreamOutput;
    BWSceneClassifierSinkNode * _sceneClassifierSinkNode;
    BWInferenceNode * _semanticStylePersonSegmentationNode;
    int  _sourceDeviceType;
    NSString * _sourceID;
    BWPreviewTimeMachineSinkNode * _timeMachineSinkNode;
    BWVideoDepthNode * _videoDepthNode;
    double  _videoStabilizationOverscan;
    BWNodeOutput * _videoThumbnailSinkOutput;
    struct FigCaptureVideoTransform { 
        bool mirrored; 
        int rotationDegrees; 
        struct { 
            int width; 
            int height; 
        } dimensions; 
    }  _videoThumbnailSinkOutputTransform;
    BWVideoPIPOverlayNode * _zoomPIPOverlayNode;
}

@property (nonatomic, readonly) BWNodeOutput *depthDataSinkOutput;
@property (nonatomic, readonly) bool depthFilterRenderingEnabled;
@property (nonatomic) bool discardsImageQueueSampleData;
@property bool displaysWidestCameraOnly;
@property (nonatomic, readonly) BWStreamingFilterNode *filterNode;
@property (nonatomic, retain) NSArray *filters;
@property (nonatomic, readonly) BWImageQueueSinkNode *imageQueueSinkNode;
@property (nonatomic, readonly) NSDictionary *imageQueueUpdatedPayloadToBeSentAfterCommitConfiguration;
@property (nonatomic, readonly) BWNodeOutput *metadataSinkOutput;
@property (setter=setMRCSceneObserver:, nonatomic) <BWMRCSceneObserver> *mrcSceneObserver;
@property (nonatomic, readonly) struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; } outputTransform;
@property (nonatomic) float portraitLightingEffectStrength;
@property (readonly) double primaryCaptureRectAspectRatio;
@property (readonly) struct CGPoint { double x1; double x2; } primaryCaptureRectCenter;
@property (readonly) long long primaryCaptureRectUniqueID;
@property (nonatomic, readonly) BWPixelTransferNode *scalerNode;
@property (nonatomic) bool sceneClassifierSuspended;
@property (nonatomic, retain) FigCaptureSemanticStyle *semanticStyle;
@property (nonatomic, readonly) <BWSemanticStyleSceneObserver> *semanticStyleSceneObserver;
@property (nonatomic) float simulatedAperture;
@property (nonatomic, readonly) int sourceDeviceType;
@property (nonatomic, readonly) NSString *sourceID;
@property (nonatomic, readonly) BWPreviewTimeMachineSinkNode *timeMachineSinkNode;
@property (nonatomic, readonly) BWNodeOutput *videoThumbnailSinkOutput;
@property (nonatomic, readonly) struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; } videoThumbnailSinkOutputTransform;

+ (void)initialize;

- (void)dealloc;
- (id)depthDataSinkOutput;
- (bool)depthFilterRenderingEnabled;
- (bool)discardsImageQueueSampleData;
- (bool)displaysWidestCameraOnly;
- (id)filterNode;
- (id)filters;
- (id)imageQueueSinkNode;
- (id)imageQueueUpdatedPayloadToBeSentAfterCommitConfiguration;
- (id)initWithConfiguration:(id)arg1 sourcePreviewOutput:(id)arg2 sourceSemanticMasksOutput:(id)arg3 imageQueueSinkNode:(id)arg4 graph:(id)arg5 name:(id)arg6 inferenceScheduler:(id)arg7 captureDevice:(id)arg8 previewTapDelegate:(id)arg9 zoomPIPOverlayDelegate:(id)arg10;
- (id)metadataSinkOutput;
- (id)mrcSceneObserver;
- (struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; })outputTransform;
- (float)portraitLightingEffectStrength;
- (void)prepareForRenderingWithPreparedPixelBufferPool;
- (double)primaryCaptureRectAspectRatio;
- (struct CGPoint { double x1; double x2; })primaryCaptureRectCenter;
- (long long)primaryCaptureRectUniqueID;
- (id)scalerNode;
- (bool)sceneClassifierSuspended;
- (id)semanticStyle;
- (id)semanticStyleSceneObserver;
- (void)setDiscardsImageQueueSampleData:(bool)arg1;
- (void)setDisplaysWidestCameraOnly:(bool)arg1;
- (void)setFilters:(id)arg1;
- (void)setMRCSceneObserver:(id)arg1;
- (void)setPortraitLightingEffectStrength:(float)arg1;
- (void)setPreviewTapRegistered:(bool)arg1;
- (void)setPrimaryCaptureRectAspectRatio:(double)arg1 center:(struct CGPoint { double x1; double x2; })arg2 fencePortSendRight:(id)arg3 uniqueID:(long long)arg4;
- (void)setSceneClassifierSuspended:(bool)arg1;
- (void)setSemanticStyle:(id)arg1;
- (void)setSemanticStyle:(id)arg1 animated:(bool)arg2;
- (void)setSemanticStyleRenderingSuspended:(bool)arg1 animated:(bool)arg2;
- (void)setSemanticStyleSet:(id)arg1 fencePortSendRight:(id)arg2;
- (void)setSimulatedAperture:(float)arg1;
- (void)setStoppingForModeSwitch:(bool)arg1;
- (void)setVideoStabilizationOverscanCropEnabled:(bool)arg1 momentMovieRecordingEnabled:(bool)arg2;
- (float)simulatedAperture;
- (int)sourceDeviceType;
- (id)sourceID;
- (id)timeMachineSinkNode;
- (id)videoThumbnailSinkOutput;
- (struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; })videoThumbnailSinkOutputTransform;

@end
