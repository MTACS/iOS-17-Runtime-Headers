
@interface SVTouchForwardingView : UIView {
    double  _lastTouchTimestamp;
    id /* block */  _touchedBlock;
}

@property (nonatomic) double lastTouchTimestamp;
@property (setter=onTouch:, nonatomic, copy) id /* block */ touchedBlock;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (double)lastTouchTimestamp;
- (void)onTouch:(id /* block */)arg1;
- (void)setLastTouchTimestamp:(double)arg1;
- (id /* block */)touchedBlock;

@end
