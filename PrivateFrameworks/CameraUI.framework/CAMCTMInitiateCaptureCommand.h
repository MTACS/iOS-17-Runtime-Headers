
@interface CAMCTMInitiateCaptureCommand : CAMCaptureCommand {
    CAMStillImageCaptureRequest * __settings;
}

@property (nonatomic, readonly) CAMStillImageCaptureRequest *_settings;

- (void).cxx_destruct;
- (id)_momentSettingsWithContext:(id)arg1;
- (id)_settings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettings:(id)arg1;

@end
