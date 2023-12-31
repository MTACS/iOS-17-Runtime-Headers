
@interface CAMPausePairedVideoRecordingCommand : CAMCaptureCommand {
    bool  __recordingPaused;
}

@property (getter=_isRecordingPaused, nonatomic, readonly) bool _recordingPaused;

- (bool)_isRecordingPaused;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordingPaused:(bool)arg1;

@end
