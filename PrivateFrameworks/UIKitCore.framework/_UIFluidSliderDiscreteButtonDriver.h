
@interface _UIFluidSliderDiscreteButtonDriver : NSObject <_UIFluidSliderDriving> {
    unsigned long long  __pressedButton;
    <_UIFluidSliderDrivable> * _drivable;
    bool  _enabled;
    bool  _isRepeating;
    BSAbsoluteMachTimer * _releaseTimer;
    BSAbsoluteMachTimer * _repeatTimer;
    double  _stretchAmount;
    unsigned long long  _trackAxis;
    UIView * _view;
}

@property (nonatomic) bool _isRepeating;
@property (nonatomic) unsigned long long _pressedButton;
@property (nonatomic, retain) BSAbsoluteMachTimer *_releaseTimer;
@property (nonatomic, retain) BSAbsoluteMachTimer *_repeatTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (void)_clearReleaseTimer;
- (void)_clearRepeatTimer;
- (void)_handleButton:(unsigned long long)arg1 state:(unsigned long long)arg2;
- (void)_incrementValue;
- (bool)_isRepeating;
- (void)_issueUpdateWithValue:(double)arg1;
- (double)_minimumPressDuration;
- (double)_overflowAmount;
- (unsigned long long)_pressedButton;
- (void)_releaseCurrentlyPressedButton;
- (id)_releaseTimer;
- (double)_repeatCadence;
- (double)_repeatDelay;
- (id)_repeatTimer;
- (double)_trackLength;
- (void)cancel;
- (void)dealloc;
- (id)drivable;
- (bool)enabled;
- (id)name;
- (void)pressDown;
- (void)pressUp;
- (void)releaseDown;
- (void)releaseUp;
- (void)setDrivable:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setStretchAmount:(double)arg1;
- (void)setTrackAxis:(unsigned long long)arg1;
- (void)setView:(id)arg1;
- (void)set_isRepeating:(bool)arg1;
- (void)set_pressedButton:(unsigned long long)arg1;
- (void)set_releaseTimer:(id)arg1;
- (void)set_repeatTimer:(id)arg1;
- (void)stop;
- (double)stretchAmount;
- (unsigned long long)trackAxis;
- (id)view;

@end
