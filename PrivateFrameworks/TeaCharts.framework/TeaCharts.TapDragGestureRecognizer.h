
@interface TeaCharts.TapDragGestureRecognizer : UIGestureRecognizer {
    void locations;
    void minimumPressDuration;
    void orientation;
    void timer;
    void touches;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
