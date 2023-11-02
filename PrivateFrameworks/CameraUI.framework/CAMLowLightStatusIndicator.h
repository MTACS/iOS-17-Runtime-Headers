
@interface CAMLowLightStatusIndicator : CAMControlStatusIndicator {
    double  _duration;
    bool  _lowLightDisabled;
    long long  _lowLightMode;
}

@property (nonatomic) double duration;
@property (getter=isLowLightDisabled, nonatomic) bool lowLightDisabled;
@property (nonatomic) long long lowLightMode;

- (bool)canShowValue;
- (double)duration;
- (id)imageNameForAXHUD;
- (id)imageNameForCurrentState;
- (bool)isLowLightDisabled;
- (long long)lowLightMode;
- (void)setDuration:(double)arg1;
- (void)setLowLightDisabled:(bool)arg1;
- (void)setLowLightDisabled:(bool)arg1 animated:(bool)arg2;
- (void)setLowLightMode:(long long)arg1;
- (bool)shouldFillOutlineForCurrentState;
- (bool)shouldShowOutlineForCurrentState;
- (bool)shouldShowSlashForCurrentState;
- (bool)shouldUseActiveTintForCurrentState;
- (bool)shouldUseSlash;
- (id)valueText;

@end
