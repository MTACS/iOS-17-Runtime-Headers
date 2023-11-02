
@interface FigCaptureSessionParsedDepthDataSinkConfiguration : NSObject {
    FigDepthDataCaptureConnectionConfiguration * _depthDataConnectionConfiguration;
    FigMetadataObjectCaptureConnectionConfiguration * _metadataObjectConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration * _videoDataConnectionConfiguration;
}

@property (nonatomic, readonly) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration;
@property (nonatomic, readonly) FigMetadataObjectCaptureConnectionConfiguration *metadataObjectConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;

- (void)dealloc;
- (id)depthDataConnectionConfiguration;
- (id)metadataObjectConnectionConfiguration;
- (id)videoDataConnectionConfiguration;

@end
