
@interface FigCaptureSessionParsedMetadataSinkConfiguration : NSObject {
    FigMetadataObjectCaptureConnectionConfiguration * _metadataObjectConnectionConfiguration;
    NSArray * _movieFileDetectedObjectMetadataConnectionConfigurations;
    FigVideoCaptureConnectionConfiguration * _movieFileVideoConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration * _sceneClassifierConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration * _videoDataConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration * _videoPreviewSinkConnectionConfiguration;
}

@property (nonatomic, readonly) FigMetadataObjectCaptureConnectionConfiguration *metadataObjectConnectionConfiguration;
@property (nonatomic, readonly) NSArray *movieFileDetectedObjectMetadataConnectionConfigurations;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *movieFileVideoConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *sceneClassifierConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *videoPreviewSinkConnectionConfiguration;

- (void)dealloc;
- (id)metadataObjectConnectionConfiguration;
- (id)movieFileDetectedObjectMetadataConnectionConfigurations;
- (id)movieFileVideoConnectionConfiguration;
- (id)sceneClassifierConnectionConfiguration;
- (id)videoDataConnectionConfiguration;
- (id)videoPreviewSinkConnectionConfiguration;

@end
