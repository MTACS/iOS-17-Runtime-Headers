
@interface CAMVideoHDRSuspensionCommand : CAMCaptureCommand {
    bool  _videoHDRSuspended;
}

@property (getter=isVideoHDRSuspended, nonatomic, readonly) bool videoHDRSuspended;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoHDRSuspended:(bool)arg1;
- (bool)isVideoHDRSuspended;

@end
