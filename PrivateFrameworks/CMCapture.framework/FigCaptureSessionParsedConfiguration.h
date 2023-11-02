
@interface FigCaptureSessionParsedConfiguration : NSObject {
    NSArray * _audioDataSinkConnectionConfigurations;
    NSArray * _audioFileSinkConnectionConfigurations;
    NSArray * _cameraCalibrationDataSinkConnectionConfigurations;
    int  _continuityCameraClientDeviceClass;
    bool  _continuityCameraIsWired;
    bool  _empty;
    bool  _isMultiCamSession;
    NSArray * _metadataSourceConfigurations;
    NSArray * _parsedCameraSourceConfigurations;
    NSArray * _parsedCinematographyConfigurations;
    NSArray * _parsedDepthDataSinkConfigurations;
    NSArray * _parsedLiDARDepthPipelineConfigurations;
    NSArray * _parsedMetadataSinkConfigurations;
    FigCaptureSessionParsedMicSourceConfiguration * _parsedMicSourceConfiguration;
    NSArray * _parsedMovieFileSinkConfigurations;
    NSArray * _parsedPreviewSinkConfigurations;
    NSArray * _parsedStillImageSinkConfigurations;
    NSArray * _parsedVideoDataSinkConfigurations;
    NSArray * _parsedVisionDataSinkConfigurations;
    NSArray * _pointCloudDataSinkConnectionConfigurations;
    bool  _suppressVideoEffects;
    bool  _useOfflineVISPipeline;
    NSArray * _videoThumbnailSinkConfigurations;
}

@property (nonatomic, readonly) NSArray *audioDataSinkConnectionConfigurations;
@property (nonatomic, readonly) NSArray *audioFileSinkConnectionConfigurations;
@property (nonatomic, readonly) NSArray *cameraCalibrationDataSinkConnectionConfigurations;
@property (nonatomic, readonly) int continuityCameraClientDeviceClass;
@property (nonatomic, readonly) bool continuityCameraIsWired;
@property (nonatomic, readonly) bool empty;
@property (nonatomic, readonly) NSArray *metadataSourceConfigurations;
@property (getter=isMultiCamSession, nonatomic, readonly) bool multiCamSession;
@property (nonatomic, readonly) NSArray *parsedCameraSourceConfigurations;
@property (nonatomic, readonly) NSArray *parsedCinematographyConfigurations;
@property (nonatomic, readonly) NSArray *parsedDepthDataSinkConfigurations;
@property (nonatomic, readonly) NSArray *parsedLiDARDepthPipelineConfigurations;
@property (nonatomic, readonly) NSArray *parsedMetadataSinkConfigurations;
@property (nonatomic, readonly) FigCaptureSessionParsedMicSourceConfiguration *parsedMicSourceConfiguration;
@property (nonatomic, readonly) NSArray *parsedMovieFileSinkConfigurations;
@property (nonatomic, readonly) NSArray *parsedPreviewSinkConfigurations;
@property (nonatomic, readonly) NSArray *parsedStillImageSinkConfigurations;
@property (nonatomic, readonly) NSArray *parsedVideoDataSinkConfigurations;
@property (nonatomic, readonly) NSArray *parsedVisionDataSinkConfigurations;
@property (nonatomic, readonly) NSArray *pointCloudDataSinkConnectionConfigurations;
@property (nonatomic, readonly) bool suppressVideoEffects;
@property (nonatomic, readonly) bool useOfflineVISPipeline;
@property (nonatomic, readonly) NSArray *videoThumbnailSinkConfigurations;

+ (void)initialize;

- (id)audioDataSinkConnectionConfigurations;
- (id)audioFileSinkConnectionConfigurations;
- (id)cameraCalibrationDataSinkConnectionConfigurations;
- (int)continuityCameraClientDeviceClass;
- (bool)continuityCameraIsWired;
- (void)dealloc;
- (bool)empty;
- (id)initWithSessionConfiguration:(id)arg1 clientSetsUserInitiatedCaptureRequestTime:(bool)arg2 restrictions:(id)arg3;
- (bool)isMultiCamSession;
- (id)metadataSourceConfigurations;
- (id)parsedCameraSourceConfigurations;
- (id)parsedCinematographyConfigurations;
- (id)parsedDepthDataSinkConfigurations;
- (id)parsedLiDARDepthPipelineConfigurations;
- (id)parsedMetadataSinkConfigurations;
- (id)parsedMicSourceConfiguration;
- (id)parsedMovieFileSinkConfigurations;
- (id)parsedPreviewSinkConfigurations;
- (id)parsedStillImageSinkConfigurations;
- (id)parsedVideoDataSinkConfigurations;
- (id)parsedVisionDataSinkConfigurations;
- (id)pointCloudDataSinkConnectionConfigurations;
- (bool)suppressVideoEffects;
- (bool)useOfflineVISPipeline;
- (id)videoThumbnailSinkConfigurations;

@end
