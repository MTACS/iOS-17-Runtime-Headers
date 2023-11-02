
@interface SBGestureSwitcherModifierEvent : SBSwitcherModifierEvent <SBGestureRecognizerTouchHistoryProviding> {
    bool  _canceled;
    NSUUID * _gestureID;
    long long  _gestureType;
    double  _hysteresis;
    double  _lastTouchTimestamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _locationInContainerView;
    bool  _mouseEvent;
    unsigned long long  _phase;
    bool  _pointerTouch;
    SBAppLayout * _selectedAppLayout;
    <SBGestureRecognizerTouchHistoryProviding> * _touchHistoryProvider;
    long long  _touchType;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translationInContainerView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _velocityInContainerView;
}

@property (getter=isCanceled, nonatomic) bool canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSUUID *gestureID;
@property (nonatomic, readonly) long long gestureType;
@property (readonly) unsigned long long hash;
@property (nonatomic) double hysteresis;
@property (nonatomic) double lastTouchTimestamp;
@property (nonatomic) struct CGPoint { double x1; double x2; } locationInContainerView;
@property (getter=isMouseEvent, nonatomic) bool mouseEvent;
@property (nonatomic) unsigned long long phase;
@property (getter=isPointerTouch, nonatomic) bool pointerTouch;
@property (nonatomic, readonly) SBAppLayout *selectedAppLayout;
@property (readonly) Class superclass;
@property (nonatomic, retain) <SBGestureRecognizerTouchHistoryProviding> *touchHistoryProvider;
@property (nonatomic) long long touchType;
@property (nonatomic) struct CGPoint { double x1; double x2; } translationInContainerView;
@property (nonatomic) struct CGPoint { double x1; double x2; } velocityInContainerView;

- (void).cxx_destruct;
- (double)averageTouchPathAngleOverTimeDuration:(double)arg1;
- (struct CGPoint { double x1; double x2; })averageTouchVelocityOverTimeDuration:(double)arg1;
- (void)conformsToSBGestureRecognizerTouchHistoryProviding;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)gestureID;
- (long long)gestureType;
- (double)hysteresis;
- (id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 gestureType:(long long)arg3 phase:(unsigned long long)arg4;
- (bool)isCanceled;
- (bool)isGestureEvent;
- (bool)isMouseEvent;
- (bool)isPointerTouch;
- (double)lastTouchTimestamp;
- (struct CGPoint { double x1; double x2; })locationInContainerView;
- (double)peakSpeed;
- (unsigned long long)phase;
- (id)selectedAppLayout;
- (void)setCanceled:(bool)arg1;
- (void)setHysteresis:(double)arg1;
- (void)setLastTouchTimestamp:(double)arg1;
- (void)setLocationInContainerView:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMouseEvent:(bool)arg1;
- (void)setPhase:(unsigned long long)arg1;
- (void)setPointerTouch:(bool)arg1;
- (void)setTouchHistoryProvider:(id)arg1;
- (void)setTouchType:(long long)arg1;
- (void)setTranslationInContainerView:(struct CGPoint { double x1; double x2; })arg1;
- (void)setVelocityInContainerView:(struct CGPoint { double x1; double x2; })arg1;
- (id)touchHistoryProvider;
- (long long)touchType;
- (struct CGPoint { double x1; double x2; })translationInContainerView;
- (long long)type;
- (struct CGPoint { double x1; double x2; })velocityInContainerView;

@end
