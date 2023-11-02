
@interface SBReachabilityGestureRecognizer : UIGestureRecognizer {
    UITouch * _activeTouch;
    bool  _everTranslatedUpwards;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialTouchLocation;
    bool  _movedPastHysteresis;
    SBReachabilitySettings * _settings;
    SBTouchHistory * _touchHistory;
}

@property (nonatomic, retain) UITouch *activeTouch;
@property (nonatomic) bool everTranslatedUpwards;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialTouchLocation;
@property (nonatomic) bool movedPastHysteresis;
@property (nonatomic, retain) SBReachabilitySettings *settings;
@property (nonatomic, retain) SBTouchHistory *touchHistory;

- (void).cxx_destruct;
- (id)activeTouch;
- (bool)everTranslatedUpwards;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { double x1; double x2; })initialTouchLocation;
- (bool)movedPastHysteresis;
- (void)reset;
- (void)setActiveTouch:(id)arg1;
- (void)setEverTranslatedUpwards:(bool)arg1;
- (void)setInitialTouchLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMovedPastHysteresis:(bool)arg1;
- (void)setSettings:(id)arg1;
- (void)setTouchHistory:(id)arg1;
- (id)settings;
- (id)touchHistory;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
