
@interface CAMVideoFramerateCommand : CAMCaptureCommand {
    long long  __videoConfiguration;
}

@property (nonatomic, readonly) long long _videoConfiguration;

- (long long)_videoConfiguration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoConfiguration:(long long)arg1;

@end
