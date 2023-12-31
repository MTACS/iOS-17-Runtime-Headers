
@interface CAMStartVideoRecordingCommand : CAMCaptureCommand {
    CAMVideoCaptureRequest * __request;
}

@property (nonatomic, readonly) CAMVideoCaptureRequest *_request;

- (void).cxx_destruct;
- (id)_request;
- (long long)_videoOrientationForCaptureOrientation:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequest:(id)arg1;

@end
