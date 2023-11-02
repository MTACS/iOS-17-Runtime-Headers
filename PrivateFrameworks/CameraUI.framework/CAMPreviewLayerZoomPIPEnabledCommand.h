
@interface CAMPreviewLayerZoomPIPEnabledCommand : CAMCaptureCommand {
    bool  _enabled;
}

@property (getter=isEnabled, nonatomic, readonly) bool enabled;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabled:(bool)arg1;
- (id)initWithSubcommands:(id)arg1;
- (bool)isEnabled;

@end
