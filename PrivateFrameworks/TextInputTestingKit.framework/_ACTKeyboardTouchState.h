
@interface _ACTKeyboardTouchState : NSObject {
    bool  _dragged;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialDragPoint;
    TIKeyboardTouchEvent * _lastTouchEvent;
}

@property (nonatomic) bool dragged;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialDragPoint;
@property (nonatomic, retain) TIKeyboardTouchEvent *lastTouchEvent;

- (void).cxx_destruct;
- (bool)dragged;
- (struct CGPoint { double x1; double x2; })initialDragPoint;
- (id)lastTouchEvent;
- (void)setDragged:(bool)arg1;
- (void)setInitialDragPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLastTouchEvent:(id)arg1;

@end
