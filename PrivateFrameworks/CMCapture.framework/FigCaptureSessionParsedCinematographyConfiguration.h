
@interface FigCaptureSessionParsedCinematographyConfiguration : NSObject {
    FigVideoCaptureConnectionConfiguration * _videoPreviewSinkConnectionConfiguration;
}

@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *videoPreviewSinkConnectionConfiguration;

- (void)dealloc;
- (id)videoPreviewSinkConnectionConfiguration;

@end
