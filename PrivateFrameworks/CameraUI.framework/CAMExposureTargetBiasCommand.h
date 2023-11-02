
@interface CAMExposureTargetBiasCommand : CAMCaptureCommand {
    float  __exposureTargetBias;
}

@property (nonatomic, readonly) float _exposureTargetBias;

- (float)_exposureTargetBias;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExposureTargetBias:(float)arg1;

@end
