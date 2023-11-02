
@interface FigAudioCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {
    int  _audioCaptureMode;
    int  _builtInMicrophonePosition;
    double  _builtInMicrophoneRequiredSampleRate;
}

@property (nonatomic) int audioCaptureMode;
@property (nonatomic) int builtInMicrophonePosition;
@property (nonatomic) double builtInMicrophoneRequiredSampleRate;

- (int)audioCaptureMode;
- (int)builtInMicrophonePosition;
- (double)builtInMicrophoneRequiredSampleRate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)description;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAudioCaptureMode:(int)arg1;
- (void)setBuiltInMicrophonePosition:(int)arg1;
- (void)setBuiltInMicrophoneRequiredSampleRate:(double)arg1;

@end
