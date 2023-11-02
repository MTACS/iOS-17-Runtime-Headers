
@interface CAMStereoAudioCaptureCommand : CAMCaptureCommand {
    bool  _stereoAudioCaptureEnabled;
}

@property (getter=isStereoAudioCaptureEnabled, nonatomic, readonly) bool stereoAudioCaptureEnabled;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStereoAudioCaptureEnabled:(bool)arg1;
- (bool)isStereoAudioCaptureEnabled;

@end
