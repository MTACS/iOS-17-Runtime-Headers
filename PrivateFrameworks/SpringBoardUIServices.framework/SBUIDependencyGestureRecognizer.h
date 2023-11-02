
@interface SBUIDependencyGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {
    double  _hysteresis;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialSceneReferenceLocation;
    NSSet * _observedControlClasses;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double hysteresis;
@property (nonatomic, copy) NSSet *observedControlClasses;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (bool)_didExceedHysteresisWithTouches:(id)arg1;
- (double)hysteresis;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)observedControlClasses;
- (void)setHysteresis:(double)arg1;
- (void)setObservedControlClasses:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
