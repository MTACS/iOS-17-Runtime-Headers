
@interface PXRelaxedScreenEdgePanGestureRecognizer : UIPanGestureRecognizer {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeAllowances;
    unsigned long long  _edges;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialTouchLocation;
    double  _minAngleToEdge;
    unsigned long long  _trackingEdge;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeAllowances;
@property (nonatomic) unsigned long long edges;
@property (nonatomic) double minAngleToEdge;
@property (nonatomic) double minTranslation;
@property (nonatomic) unsigned long long trackingEdge;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeAllowances;
- (unsigned long long)edges;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (double)minAngleToEdge;
- (double)minTranslation;
- (void)setEdgeAllowances:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setEdges:(unsigned long long)arg1;
- (void)setMaximumNumberOfTouches:(unsigned long long)arg1;
- (void)setMinAngleToEdge:(double)arg1;
- (void)setMinTranslation:(double)arg1;
- (void)setMinimumNumberOfTouches:(unsigned long long)arg1;
- (void)setTrackingEdge:(unsigned long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (unsigned long long)trackingEdge;
- (double)translationDistanceInView:(id)arg1;

@end
