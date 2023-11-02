
@interface CAMFallbackPrimaryConstituentDeviceCommand : CAMCaptureCommand {
    long long  __deviceSelection;
}

@property (nonatomic, readonly) long long _deviceSelection;

- (long long)_deviceSelection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFallbackPrimaryConstituentDeviceSelection:(long long)arg1;
- (id)initWithSubcommands:(id)arg1;

@end
