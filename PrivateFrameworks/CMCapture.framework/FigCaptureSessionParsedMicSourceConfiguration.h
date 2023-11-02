
@interface FigCaptureSessionParsedMicSourceConfiguration : NSObject {
    FigCaptureSourceConfiguration * _cameraConfigurationForStereoAudioCapture;
    NSArray * _micConnectionConfigurations;
    FigVideoCaptureConnectionConfiguration * _movieFileVideoConnectionConfigurationForStereoAudioCapture;
}

@property (nonatomic, readonly) FigCaptureSourceConfiguration *cameraConfigurationForStereoAudioCapture;
@property (nonatomic, readonly) NSArray *micConnectionConfigurations;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *movieFileVideoConnectionConfigurationForStereoAudioCapture;

- (id)cameraConfigurationForStereoAudioCapture;
- (void)dealloc;
- (id)micConnectionConfigurations;
- (id)movieFileVideoConnectionConfigurationForStereoAudioCapture;

@end
