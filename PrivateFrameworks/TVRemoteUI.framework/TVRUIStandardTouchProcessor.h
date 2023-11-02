
@interface TVRUIStandardTouchProcessor : NSObject {
    UIView * _debugView;
    NSMutableSet * _endedTouches;
    <_TVRUIEventDelegate> * _eventDelegate;
    TVRButtonHaptic * _haptic;
    double  _previousTimestamp;
    double  _previousVelocity;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startingPoint;
    long long  _startingSwipeDirection;
    NSMutableSet * _startingTouches;
    long long  _touchCnt;
    UIView * _touchpadView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _virtualBoundingBox;
}

@property (nonatomic, retain) UIView *debugView;
@property (nonatomic, retain) NSMutableSet *endedTouches;
@property (nonatomic) <_TVRUIEventDelegate> *eventDelegate;
@property (nonatomic, retain) TVRButtonHaptic *haptic;
@property (nonatomic) double previousTimestamp;
@property (nonatomic) double previousVelocity;
@property (nonatomic) struct CGPoint { double x1; double x2; } startingPoint;
@property (nonatomic) long long startingSwipeDirection;
@property (nonatomic, retain) NSMutableSet *startingTouches;
@property (nonatomic) long long touchCnt;
@property (nonatomic, retain) UIView *touchpadView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } virtualBoundingBox;

- (void).cxx_destruct;
- (long long)_calculateDominantSwipeDirection:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_calculateVirtualBoundingBox:(struct CGPoint { double x1; double x2; })arg1 sizingRatio:(double)arg2 swipeDirection:(long long)arg3;
- (void)_cleanupOnTouchesEnded;
- (void)_configureGestureRecognizersOnView;
- (void)_endAndRestartTouchesManually:(id)arg1;
- (void)_processTouches:(id)arg1;
- (void)_sendSelectButtonPressBegan;
- (void)_sendSelectButtonPressEnded;
- (id)_touchEventForTouch:(id)arg1;
- (struct CGPoint { double x1; double x2; })_virtualTouchLocationForTouchPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)debugView;
- (id)endedTouches;
- (id)eventDelegate;
- (void)handleLongPress:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (id)haptic;
- (id)initWithTouchpadView:(id)arg1;
- (double)previousTimestamp;
- (double)previousVelocity;
- (void)setDebugView:(id)arg1;
- (void)setEndedTouches:(id)arg1;
- (void)setEventDelegate:(id)arg1;
- (void)setHaptic:(id)arg1;
- (void)setPreviousTimestamp:(double)arg1;
- (void)setPreviousVelocity:(double)arg1;
- (void)setStartingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStartingSwipeDirection:(long long)arg1;
- (void)setStartingTouches:(id)arg1;
- (void)setTouchCnt:(long long)arg1;
- (void)setTouchpadView:(id)arg1;
- (void)setVirtualBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })startingPoint;
- (long long)startingSwipeDirection;
- (id)startingTouches;
- (long long)touchCnt;
- (void)touchesBegan:(id)arg1 touches:(id)arg2 withEvent:(id)arg3;
- (void)touchesCancelled:(id)arg1 touches:(id)arg2 withEvent:(id)arg3;
- (void)touchesEnded:(id)arg1 touches:(id)arg2 withEvent:(id)arg3;
- (void)touchesMoved:(id)arg1 touches:(id)arg2 withEvent:(id)arg3;
- (id)touchpadView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })virtualBoundingBox;

@end
