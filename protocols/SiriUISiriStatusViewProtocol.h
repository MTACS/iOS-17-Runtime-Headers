
@protocol SiriUISiriStatusViewProtocol <NSObject>

@required

- (<SiriUISiriStatusViewDelegate> *)delegate;
- (double)disabledMicOpacity;
- (void)fadeOutCurrentAura;
- (UIView *)flamesContainerView;
- (bool)flamesViewDeferred;
- (double)flamesViewWidth;
- (void)forceMicVisible:(bool)arg1;
- (bool)isInUITrackingMode;
- (long long)mode;
- (bool)paused;
- (void)setDelegate:(id <SiriUISiriStatusViewDelegate>)arg1;
- (void)setDisabledMicOpacity:(double)arg1;
- (void)setFlamesViewDeferred:(bool)arg1;
- (void)setFlamesViewWidth:(double)arg1;
- (void)setInUITrackingMode:(bool)arg1;
- (void)setMode:(long long)arg1;
- (void)setPaused:(bool)arg1;
- (void)setupOrbIfNeeded;
- (double)statusViewHeight;

@end
