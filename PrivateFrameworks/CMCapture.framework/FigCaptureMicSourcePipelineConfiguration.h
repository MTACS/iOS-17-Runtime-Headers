
@interface FigCaptureMicSourcePipelineConfiguration : NSObject {
    bool  _audioSourceNodeShouldCallEndInterruption;
    FigCaptureSourceConfiguration * _cameraConfigurationForStereoAudioCapture;
    struct { 
        unsigned int val[8]; 
    }  _clientAuditToken;
    bool  _clientOSVersionSupportsDecoupledIO;
    bool  _configuresAppAudioSession;
    bool  _flipStereoAudioCaptureChannels;
    FigCaptureSourceConfiguration * _micConfiguration;
    NSArray * _micConnectionConfigurations;
    NSString * _sessionPreset;
    BWZoomCommandHandler * _zoomCommandHandlerForStereoAudioCapture;
}

- (void)dealloc;

@end
