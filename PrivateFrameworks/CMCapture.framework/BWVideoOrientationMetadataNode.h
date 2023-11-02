
@interface BWVideoOrientationMetadataNode : BWNode {
    struct OpaqueCMBlockBuffer {} * _bbufCache;
    struct opaqueCMFormatDescription { } * _boxedMetadataFormatDescription;
    struct OpaqueCMClock { } * _clock;
    NSObject<OS_dispatch_queue> * _emitSamplesDispatchQueue;
    int  _exifOrientation;
    bool  _flipMetadataHorizontally;
    unsigned int  _localIDOfOrientationMetadata;
    struct OpaqueCMClock { } * _masterClock;
    bool  _physicalMirroringForMovieRecordingEnabled;
    bool  _recordVideoOrientationAndMirroringChanges;
    bool  _recording;
    int  _sourceDeviceType;
    int  _sourcePosition;
    bool  _videoMirrored;
    int  _videoOrientation;
    BWVideoOrientationTimeMachine * _videoOrientationTimeMachine;
}

@property (nonatomic, readonly) BWVideoOrientationTimeMachine *videoOrientationTimeMachine;

+ (void)initialize;

- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)init;
- (struct OpaqueCMClock { }*)masterClock;
- (id)nodeSubType;
- (id)nodeType;
- (bool)physicalMirroringForMovieRecordingEnabled;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (void)setPhysicalMirroringForMovieRecordingEnabled:(bool)arg1;
- (void)setSourceDeviceType:(int)arg1;
- (void)setSourcePosition:(int)arg1;
- (int)sourceDeviceType;
- (int)sourcePosition;
- (void)updateVideoMirrored:(bool)arg1;
- (void)updateVideoOrientation:(int)arg1;
- (id)videoOrientationTimeMachine;

@end
