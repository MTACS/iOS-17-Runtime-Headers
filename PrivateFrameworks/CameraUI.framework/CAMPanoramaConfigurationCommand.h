
@interface CAMPanoramaConfigurationCommand : CAMCaptureCommand {
    CAMPanoramaConfiguration * __configuration;
}

@property (nonatomic, readonly) CAMPanoramaConfiguration *_configuration;

- (void).cxx_destruct;
- (id)_configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

@end
