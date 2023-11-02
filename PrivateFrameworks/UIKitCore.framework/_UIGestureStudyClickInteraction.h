
@interface _UIGestureStudyClickInteraction : NSObject <UIInteraction, _UIClickInteractionDriverDelegate, _UIGestureStudyParticipating> {
    SEL  _action;
    <_UIClickInteractionDriving> * _driver;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalCentroid;
    double  _startTimestamp;
    id  _target;
    bool  _usesForce;
    UIView * _view;
}

@property (nonatomic) SEL action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <_UIClickInteractionDriving> *driver;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSString *eventName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double movement;
@property (nonatomic) struct CGPoint { double x1; double x2; } originalCentroid;
@property (nonatomic) double startTimestamp;
@property (readonly) Class superclass;
@property (nonatomic) id target;
@property (nonatomic) bool usesForce;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (SEL)action;
- (void)clickDriver:(id)arg1 didPerformEvent:(unsigned long long)arg2;
- (void)clickDriver:(id)arg1 shouldBegin:(id /* block */)arg2;
- (id)description;
- (void)didMoveToView:(id)arg1;
- (id)driver;
- (double)duration;
- (id)eventName;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 useForce:(bool)arg3;
- (struct CGPoint { double x1; double x2; })locationInCoordinateSpace:(id)arg1;
- (double)movement;
- (struct CGPoint { double x1; double x2; })originalCentroid;
- (void)setAction:(SEL)arg1;
- (void)setDriver:(id)arg1;
- (void)setOriginalCentroid:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStartTimestamp:(double)arg1;
- (void)setTarget:(id)arg1;
- (void)setUsesForce:(bool)arg1;
- (double)startTimestamp;
- (id)target;
- (bool)usesForce;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
