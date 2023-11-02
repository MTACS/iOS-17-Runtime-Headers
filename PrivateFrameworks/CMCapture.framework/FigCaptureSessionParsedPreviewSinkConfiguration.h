
@interface FigCaptureSessionParsedPreviewSinkConfiguration : NSObject {
    FigCaptureSourceConfiguration * _cameraConfiguration;
    FigDepthDataCaptureConnectionConfiguration * _depthDataConnectionConfiguration;
    FigMetadataObjectCaptureConnectionConfiguration * _metadataObjectConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration * _previewTimeMachineConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration * _sceneClassifierConnectionConfiguration;
    int  _sourceDeviceType;
    FigVideoCaptureConnectionConfiguration * _stillImageConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration * _videoPreviewSinkConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration * _videoThumbnailConnectionConfiguration;
}

@property (nonatomic, readonly) FigCaptureSourceConfiguration *cameraConfiguration;
@property (nonatomic, readonly) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration;
@property (nonatomic, readonly) FigMetadataObjectCaptureConnectionConfiguration *metadataObjectConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *previewTimeMachineConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *sceneClassifierConnectionConfiguration;
@property (nonatomic, readonly) int sourceDeviceType;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *videoPreviewSinkConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *videoThumbnailConnectionConfiguration;

- (id)cameraConfiguration;
- (void)dealloc;
- (id)depthDataConnectionConfiguration;
- (id)metadataObjectConnectionConfiguration;
- (id)previewTimeMachineConnectionConfiguration;
- (id)sceneClassifierConnectionConfiguration;
- (int)sourceDeviceType;
- (id)stillImageConnectionConfiguration;
- (id)videoPreviewSinkConnectionConfiguration;
- (id)videoThumbnailConnectionConfiguration;

@end
