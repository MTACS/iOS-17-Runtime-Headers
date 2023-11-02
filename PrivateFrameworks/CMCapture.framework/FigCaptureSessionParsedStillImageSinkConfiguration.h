
@interface FigCaptureSessionParsedStillImageSinkConfiguration : NSObject {
    FigVideoCaptureConnectionConfiguration * _movieFileVideoConnectionConfiguration;
    FigPointCloudDataCaptureConnectionConfiguration * _pointCloudDataConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration * _stillImageConnectionConfiguration;
}

@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *movieFileVideoConnectionConfiguration;
@property (nonatomic, readonly) FigPointCloudDataCaptureConnectionConfiguration *pointCloudDataConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;

- (void)dealloc;
- (id)movieFileVideoConnectionConfiguration;
- (id)pointCloudDataConnectionConfiguration;
- (id)stillImageConnectionConfiguration;

@end
