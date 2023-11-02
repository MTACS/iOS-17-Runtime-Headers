
@interface SBCornerFingerPanGestureRecognizer : SBScreenEdgePanGestureRecognizer {
    SBCornerFingerGestureClassifier * _classifier;
    unsigned long long  _corner;
    struct CGPoint { 
        double x; 
        double y; 
    }  _firstTouchReferenceLocation;
    SBTouchHistory * _touchHistory;
    long long  _touchInterfaceOrientationWhenGestureBegan;
}

@property (nonatomic, readonly) unsigned long long corner;

- (void).cxx_destruct;
- (void)_SBLogTouchesWithMethodName:(id)arg1 withMethodName:(id)arg2;
- (void)_convertReferenceLocation:(struct CGPoint { double x1; double x2; })arg1 toOrientedLocation:(struct CGPoint { double x1; double x2; }*)arg2 orientedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (struct CGVector { double x1; double x2; })_convertReferenceVector:(struct CGVector { double x1; double x2; })arg1 toCorner:(unsigned long long)arg2 orientation:(long long)arg3;
- (bool)_shouldBegin;
- (long long)_touchInterfaceOrientation;
- (unsigned long long)corner;
- (unsigned long long)edges;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 corner:(unsigned long long)arg3 classifier:(id)arg4;
- (void)reset;
- (void)setEdges:(unsigned long long)arg1;
- (void)setState:(long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
