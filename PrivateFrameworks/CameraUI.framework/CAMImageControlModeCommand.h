
@interface CAMImageControlModeCommand : CAMCaptureCommand {
    long long  __captureMode;
    bool  __capturing;
}

@property (nonatomic, readonly) long long _captureMode;
@property (nonatomic, readonly) bool _capturing;

- (long long)_captureMode;
- (bool)_capturing;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCaptureMode:(long long)arg1 capturing:(bool)arg2;
- (id)initWithCoder:(id)arg1;

@end
