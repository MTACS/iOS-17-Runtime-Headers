
@interface NTKAstronomyRichComplicationContentView : UIView <CLKUITimeTravel, NUNIAstronomyVistaViewObserver> {
    NUNIAstronomyVistaView * _astronomyVistaView;
    CLLocation * _currentLocation;
    CLKDevice * _device;
    bool  _editing;
    long long  _family;
    unsigned int  _isAnimating;
    unsigned int  _isPaused;
    unsigned int  _isRenderOneFrame;
    NUNIAstronomyLocationDot * _locationDot;
    NTKDelayedBlock * _stopAnimationDelayedBlock;
    NSDate * _timeTravelDate;
    NSDate * _timelineDate;
    unsigned long long  _vista;
}

@property (nonatomic) bool editing;

- (void).cxx_destruct;
- (void)_hideLocationDot;
- (bool)_shouldAnimateWithTemplateUpdateReason:(long long)arg1;
- (void)_showLocationDot;
- (void)_startAnimating;
- (void)_stopAnimating;
- (void)applyPausedUpdate:(bool)arg1;
- (void)astronomyVistaViewContentsAnimationFinished:(id)arg1;
- (void)astronomyVistaViewWillDisplay:(id)arg1 forTime:(double)arg2;
- (bool)editing;
- (void)handleOrdinaryScreenWake;
- (void)handleTemplateMetadata:(id)arg1 reason:(long long)arg2;
- (void)handleWristRaiseScreenWake;
- (id)initForDevice:(id)arg1 family:(long long)arg2 diameter:(double)arg3;
- (void)layoutSubviews;
- (void)prepareWristRaiseAnimation;
- (void)renderSynchronouslyWithImageQueueDiscard:(bool)arg1 inGroup:(id)arg2;
- (void)setEditing:(bool)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(bool)arg2;

@end
