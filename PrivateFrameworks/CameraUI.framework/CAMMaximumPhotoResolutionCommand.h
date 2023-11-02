
@interface CAMMaximumPhotoResolutionCommand : CAMCaptureCommand {
    long long  __maximumPhotoResolution;
}

@property (nonatomic, readonly) long long _maximumPhotoResolution;

- (long long)_maximumPhotoResolution;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMaximumPhotoResolution:(long long)arg1;
- (id)initWithSubcommands:(id)arg1;

@end
