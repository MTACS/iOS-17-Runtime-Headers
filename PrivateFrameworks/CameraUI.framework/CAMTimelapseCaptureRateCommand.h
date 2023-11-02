
@interface CAMTimelapseCaptureRateCommand : CAMCaptureCommand {
    float  __captureRate;
}

@property (nonatomic, readonly) float _captureRate;

- (float)_captureRate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithDefaultTimelapseCaptureRate;
- (id)initWithTimelapseCaptureRate:(float)arg1;

@end
