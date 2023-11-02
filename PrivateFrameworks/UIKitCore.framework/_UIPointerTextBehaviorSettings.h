
@interface _UIPointerTextBehaviorSettings : PTSettings {
    double  _regionCaptureMultiplier;
    double  _textLineRegionPadding;
}

@property (nonatomic) double regionCaptureMultiplier;
@property (nonatomic) double textLineRegionPadding;

+ (id)settingsControllerModule;

- (double)regionCaptureMultiplier;
- (void)setDefaultValues;
- (void)setRegionCaptureMultiplier:(double)arg1;
- (void)setTextLineRegionPadding:(double)arg1;
- (double)textLineRegionPadding;

@end
