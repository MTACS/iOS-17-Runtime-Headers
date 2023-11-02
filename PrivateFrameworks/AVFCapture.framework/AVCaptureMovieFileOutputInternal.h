
@interface AVCaptureMovieFileOutputInternal : NSObject {
    NSArray * availableVideoCodecs;
    NSMutableArray * connectionsThatRecordVideoOrientationAndMirroringChangesAsMetadataTrack;
    bool  depthCaptureEnabled;
    bool  deviceSupportsConstituentDeviceSwitching;
    struct ct_green_tea_logger_s { } * greenTeaLogger;
    NSArray * metadata;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  movieFragmentInterval;
    bool  paused;
    unsigned long long  primaryConstituentDeviceRestrictedSwitchingBehaviorConditions;
    long long  primaryConstituentDeviceSwitchingBehavior;
    bool  primaryConstituentDeviceSwitchingBehaviorForRecordingEnabled;
    bool  recording;
    NSMutableArray * recordingDelegatesArray;
    bool  sendLastVideoPreviewFrame;
    bool  streamingDepthSupported;
    bool  usesVirtualCaptureCard;
    NSString * videoCodec;
    NSDictionary * videoCompressionProperties;
    AVWeakReference * weakReference;
}

- (void)dealloc;
- (id)init;

@end
