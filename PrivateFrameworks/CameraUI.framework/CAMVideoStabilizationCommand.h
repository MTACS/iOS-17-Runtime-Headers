
@interface CAMVideoStabilizationCommand : CAMCaptureCommand {
    bool  __enabled;
    long long  __strength;
}

@property (getter=_isEnabled, nonatomic, readonly) bool _enabled;
@property (nonatomic, readonly) long long _strength;

- (bool)_isEnabled;
- (long long)_strength;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithAutomaticVideoStabilizationEnabled:(bool)arg1 strength:(long long)arg2;
- (id)initWithCoder:(id)arg1;

@end
