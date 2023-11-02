
@interface FigCaptureSessionParsedCameraSourceConfiguration : NSObject {
    NSArray * _cameraCalibrationDataConnectionConfigurations;
    FigCaptureSourceConfiguration * _cameraConfiguration;
    FigDepthDataCaptureConnectionConfiguration * _depthDataConnectionConfiguration;
    NSArray * _metadataObjectConnectionConfigurations;
    NSArray * _movieFileDetectedObjectMetadataConnectionConfigurations;
    NSArray * _pointCloudDataConnectionConfigurations;
    NSArray * _previewDerivedConnectionConfigurations;
    FigVideoCaptureConnectionConfiguration * _stillImageConnectionConfiguration;
    NSArray * _videoCaptureConnectionConfigurations;
    NSArray * _videoDataConnectionConfigurations;
    FigVideoCaptureConnectionConfiguration * _videoPreviewSinkConnectionConfiguration;
    NSArray * _visionDataConnectionConfigurations;
}

@property (nonatomic, readonly) NSArray *cameraCalibrationDataConnectionConfigurations;
@property (nonatomic, readonly) FigCaptureSourceConfiguration *cameraConfiguration;
@property (nonatomic, readonly) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration;
@property (nonatomic, readonly) NSArray *metadataObjectConnectionConfigurations;
@property (nonatomic, readonly) NSArray *movieFileDetectedObjectMetadataConnectionConfigurations;
@property (nonatomic, readonly) NSArray *pointCloudDataConnectionConfigurations;
@property (nonatomic, readonly) NSArray *previewDerivedConnectionConfigurations;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;
@property (nonatomic, readonly) NSArray *videoCaptureConnectionConfigurations;
@property (nonatomic, readonly) NSArray *videoDataConnectionConfigurations;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *videoPreviewSinkConnectionConfiguration;
@property (nonatomic, readonly) NSArray *visionDataConnectionConfigurations;

- (id)cameraCalibrationDataConnectionConfigurations;
- (id)cameraConfiguration;
- (void)dealloc;
- (id)depthDataConnectionConfiguration;
- (id)metadataObjectConnectionConfigurations;
- (id)movieFileDetectedObjectMetadataConnectionConfigurations;
- (id)pointCloudDataConnectionConfigurations;
- (id)previewDerivedConnectionConfigurations;
- (id)stillImageConnectionConfiguration;
- (id)videoCaptureConnectionConfigurations;
- (id)videoDataConnectionConfigurations;
- (id)videoPreviewSinkConnectionConfiguration;
- (id)visionDataConnectionConfigurations;

@end
