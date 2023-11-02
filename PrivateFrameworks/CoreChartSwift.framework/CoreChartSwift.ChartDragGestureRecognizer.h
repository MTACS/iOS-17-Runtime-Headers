
@interface CoreChartSwift.ChartDragGestureRecognizer : UIGestureRecognizer {
    void currentLocation;
    void initialTouch;
    void minimumPressDuration;
    void startLocation;
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
