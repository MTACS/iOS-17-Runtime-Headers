
@interface CAMLowLightModeCommand : CAMCaptureCommand {
    long long  __lowLightMode;
}

@property (nonatomic, readonly) long long _lowLightMode;

- (long long)_lowLightMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLowLightMode:(long long)arg1;

@end
