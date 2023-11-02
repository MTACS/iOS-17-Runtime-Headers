
@interface FigCaptureStillImageSinkPipelineSessionStorage : NSObject {
    FigCaptureCameraSourcePipeline * _cameraSourcePipeline;
    NSDictionary * _colorInfo;
    unsigned long long  _currentUserInitiatedRequestHostTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _currentUserInitiatedRequestPTS;
    long long  _mostRecentBurstSettingsID;
    FigCapturePixelConverter * _pixelConverter;
    FigCaptureSessionPreparedBracket * _preparedBracket;
    struct opaqueCMFormatDescription { } * _previewFormatDescription;
    BWImageQueueSinkNode * _previewSinkNode;
    NSArray * _rawDNGColorCalibrations;
    struct opaqueCMFormatDescription { } * _rawFormatDescription;
    FigVideoCaptureConnectionConfiguration * _stillImageConnectionConfiguration;
    struct opaqueCMFormatDescription { } * _stillImageFormatDescription;
    FigCaptureSinkPipeline<FigCaptureStillImageSinkPipeline> * _stillImageSinkPipeline;
    bool  _stillImagesAreOptimizedForOfflineVideoStabilization;
    bool  _videoStabilizationOverscanCropEnabled;
    float  _videoStabilizationOverscanCropMultiplier;
}

@property (nonatomic, readonly) FigCaptureCameraSourcePipeline *cameraSourcePipeline;
@property (nonatomic, readonly) NSDictionary *colorInfo;
@property (nonatomic) unsigned long long currentUserInitiatedRequestHostTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } currentUserInitiatedRequestPTS;
@property (nonatomic) long long mostRecentBurstSettingsID;
@property (nonatomic, readonly) FigCapturePixelConverter *pixelConverter;
@property (nonatomic, readonly) FigCaptureSessionPreparedBracket *preparedBracket;
@property (nonatomic, readonly) const struct opaqueCMFormatDescription {}**previewFormatDescriptionPtr;
@property (nonatomic, readonly) BWImageQueueSinkNode *previewSinkNode;
@property (nonatomic, retain) NSArray *rawDNGColorCalibrations;
@property (nonatomic, readonly) const struct opaqueCMFormatDescription {}**rawFormatDescriptionPtr;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;
@property (nonatomic, readonly) const struct opaqueCMFormatDescription {}**stillImageFormatDescriptionPtr;
@property (nonatomic, readonly) FigCaptureSinkPipeline<FigCaptureStillImageSinkPipeline> *stillImageSinkPipeline;
@property (nonatomic, readonly) bool stillImagesAreOptimizedForOfflineVideoStabilization;
@property (nonatomic) bool videoStabilizationOverscanCropEnabled;
@property (nonatomic) float videoStabilizationOverscanCropMultiplier;

- (id)cameraSourcePipeline;
- (id)colorInfo;
- (unsigned long long)currentUserInitiatedRequestHostTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentUserInitiatedRequestPTS;
- (void)dealloc;
- (id)initWithStillImageSinkPipeline:(id)arg1 cameraSourcePipeline:(id)arg2 previewSinkNode:(id)arg3 pixelConverter:(id)arg4 colorInfo:(id)arg5 stillImagesAreOptimizedForOfflineVideoStabilization:(bool)arg6 videoStabilizationOverscanCropMultiplier:(float)arg7 preparedBracket:(id)arg8 stillImageConnectionConfiguration:(id)arg9;
- (long long)mostRecentBurstSettingsID;
- (id)pixelConverter;
- (id)preparedBracket;
- (const struct opaqueCMFormatDescription {}**)previewFormatDescriptionPtr;
- (id)previewSinkNode;
- (id)rawDNGColorCalibrations;
- (const struct opaqueCMFormatDescription {}**)rawFormatDescriptionPtr;
- (void)setCurrentUserInitiatedRequestHostTime:(unsigned long long)arg1;
- (void)setCurrentUserInitiatedRequestPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMostRecentBurstSettingsID:(long long)arg1;
- (void)setRawDNGColorCalibrations:(id)arg1;
- (void)setVideoStabilizationOverscanCropEnabled:(bool)arg1;
- (void)setVideoStabilizationOverscanCropMultiplier:(float)arg1;
- (id)stillImageConnectionConfiguration;
- (const struct opaqueCMFormatDescription {}**)stillImageFormatDescriptionPtr;
- (id)stillImageSinkPipeline;
- (bool)stillImagesAreOptimizedForOfflineVideoStabilization;
- (bool)videoStabilizationOverscanCropEnabled;
- (float)videoStabilizationOverscanCropMultiplier;

@end
