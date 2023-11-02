
@interface FigCaptureSessionParsedMovieFileSinkConfiguration : NSObject {
    FigAudioCaptureConnectionConfiguration * _audioConnectionConfiguration;
    FigMetadataItemCaptureConnectionConfiguration * _cameraDebugInfoMetadataConnectionConfiguration;
    FigDepthDataCaptureConnectionConfiguration * _depthDataConnectionConfiguration;
    NSArray * _detectedObjectMetadataConnectionConfigurations;
    FigVideoCaptureConnectionConfiguration * _sceneClassifierConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration * _stillImageConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration * _videoConnectionConfiguration;
}

@property (nonatomic, readonly) FigAudioCaptureConnectionConfiguration *audioConnectionConfiguration;
@property (nonatomic, readonly) FigMetadataItemCaptureConnectionConfiguration *cameraDebugInfoMetadataConnectionConfiguration;
@property (nonatomic, readonly) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration;
@property (nonatomic, readonly) NSArray *detectedObjectMetadataConnectionConfigurations;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *sceneClassifierConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *videoConnectionConfiguration;

- (id)audioConnectionConfiguration;
- (id)cameraDebugInfoMetadataConnectionConfiguration;
- (void)dealloc;
- (id)depthDataConnectionConfiguration;
- (id)detectedObjectMetadataConnectionConfigurations;
- (id)sceneClassifierConnectionConfiguration;
- (id)stillImageConnectionConfiguration;
- (id)videoConnectionConfiguration;

@end
