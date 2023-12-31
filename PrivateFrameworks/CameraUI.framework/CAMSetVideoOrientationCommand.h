
@interface CAMSetVideoOrientationCommand : CAMCaptureCommand {
    long long  __captureOrientation;
}

@property (nonatomic, readonly) long long _captureOrientation;

- (long long)_captureOrientation;
- (long long)_videoOrientationForCaptureOrientation:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCaptureOrientation:(long long)arg1;
- (id)initWithCoder:(id)arg1;

@end
