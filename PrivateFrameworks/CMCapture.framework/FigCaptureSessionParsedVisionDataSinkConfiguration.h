
@interface FigCaptureSessionParsedVisionDataSinkConfiguration : NSObject {
    FigVideoCaptureConnectionConfiguration * _videoDataConnectionConfiguration;
    FigVisionDataCaptureConnectionConfiguration * _visionDataConnectionConfiguration;
}

@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;
@property (nonatomic, readonly) FigVisionDataCaptureConnectionConfiguration *visionDataConnectionConfiguration;

- (void)dealloc;
- (id)videoDataConnectionConfiguration;
- (id)visionDataConnectionConfiguration;

@end
