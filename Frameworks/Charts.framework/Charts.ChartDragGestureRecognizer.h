
@interface Charts.ChartDragGestureRecognizer : UIGestureRecognizer {
    void currentLocations;
    void initialFirstTouch;
    void initialSecondTouch;
    void isDirectTouch;
    void minimumPressDuration;
    void startLocations;
    void timer;
}

- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
