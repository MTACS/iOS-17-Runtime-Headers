
@interface FigCaptureSessionParsedVideoDataSinkConfiguration : NSObject {
    FigCaptureSourceConfiguration * _cameraConfiguration;
    FigMetadataObjectCaptureConnectionConfiguration * _metadataObjectConnectionConfiguration;
    int  _sourceDeviceType;
    FigVideoCaptureConnectionConfiguration * _videoDataConnectionConfiguration;
}

@property (nonatomic, readonly) FigCaptureSourceConfiguration *cameraConfiguration;
@property (nonatomic, readonly) FigMetadataObjectCaptureConnectionConfiguration *metadataObjectConnectionConfiguration;
@property (nonatomic, readonly) int sourceDeviceType;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;

- (id)cameraConfiguration;
- (void)dealloc;
- (id)metadataObjectConnectionConfiguration;
- (int)sourceDeviceType;
- (id)videoDataConnectionConfiguration;

@end
