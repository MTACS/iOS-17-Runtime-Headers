
@interface UIInputSwitcherGestureState : NSObject {
    bool  _didMoveBeyondThreshold;
    struct CGPoint { 
        double x; 
        double y; 
    }  _firstReferencePoint;
    bool  _hideSwitcher;
    double  _lastSeenKeyboardTouchDown;
    double  _touchDown;
}

@property (nonatomic) bool didMoveBeyondThreshold;
@property (nonatomic) struct CGPoint { double x1; double x2; } firstReferencePoint;
@property (nonatomic) bool hideSwitcher;
@property (nonatomic) double lastSeenKeyboardTouchDown;
@property (nonatomic) double touchDown;

- (bool)didMoveBeyondThreshold;
- (struct CGPoint { double x1; double x2; })firstReferencePoint;
- (bool)gestureConflictsWithTypingWindow;
- (bool)hideSwitcher;
- (double)lastSeenKeyboardTouchDown;
- (void)setDidMoveBeyondThreshold:(bool)arg1;
- (void)setFirstReferencePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setHideSwitcher:(bool)arg1;
- (void)setLastSeenKeyboardTouchDown:(double)arg1;
- (void)setTouchDown:(double)arg1;
- (double)touchDown;

@end
