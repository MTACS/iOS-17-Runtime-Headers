
@interface PRRenderingBackdropView : PRRenderingView {
    double  _backlightProgress;
    double  _backlightProgressAnimationStartTimestamp;
    double  _backlightProgressFromValue;
    CASpringAnimation * _backlightProgressSpringAnimation;
    CADisplayLink * _displayLink;
    double  _linearBacklightProgress;
    double  _targetBacklightProgress;
}

@property (nonatomic, readonly) double backlightProgress;
@property (nonatomic, readonly) double linearBacklightProgress;
@property (nonatomic) double targetBacklightProgress;

- (void).cxx_destruct;
- (void)_displayLinkFired:(id)arg1;
- (double)backlightProgress;
- (id)initWithOwner:(id)arg1 scene:(id)arg2;
- (void)invalidate;
- (double)linearBacklightProgress;
- (void)setTargetBacklightProgress:(double)arg1;
- (void)setTargetBacklightProgress:(double)arg1 animated:(bool)arg2;
- (double)targetBacklightProgress;
- (void)traitCollectionDidChange:(id)arg1;

@end
