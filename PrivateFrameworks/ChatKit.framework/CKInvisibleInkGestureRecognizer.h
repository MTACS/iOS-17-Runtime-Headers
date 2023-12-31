
@interface CKInvisibleInkGestureRecognizer : UIGestureRecognizer {
    UITouch * _firstTouch;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startLocation;
    double  _startTime;
}

@property (nonatomic, retain) UITouch *firstTouch;
@property (nonatomic) struct CGPoint { double x1; double x2; } startLocation;
@property (nonatomic) double startTime;

- (void).cxx_destruct;
- (bool)_hasActiveTouchesInEvent:(id)arg1;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (id)firstTouch;
- (void)reset;
- (void)setFirstTouch:(id)arg1;
- (void)setStartLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStartTime:(double)arg1;
- (bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (bool)shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (struct CGPoint { double x1; double x2; })startLocation;
- (double)startTime;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
