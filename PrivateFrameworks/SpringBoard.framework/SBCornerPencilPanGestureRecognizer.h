
@interface SBCornerPencilPanGestureRecognizer : SBScreenEdgePanGestureRecognizer <PTSettingsKeyObserver> {
    unsigned long long  _corner;
    double  _cornerHorizontalEdgeLength;
    double  _cornerVerticalEdgeLength;
    SBTouchHistory * _touchHistory;
    long long  _touchInterfaceOrientationWhenGestureBegan;
}

@property (nonatomic, readonly) unsigned long long corner;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)_edgesForCorner:(unsigned long long)arg1;
+ (bool)_shouldSupportStylusTouches;
+ (id)interactiveCornerPanGestureRecognizerWithSettings:(id)arg1 corner:(unsigned long long)arg2 target:(id)arg3 action:(SEL)arg4;

- (void).cxx_destruct;
- (void)_SBLogTouchesWithMethodName:(id)arg1 withMethodName:(id)arg2;
- (void)_convertReferenceLocation:(struct CGPoint { double x1; double x2; })arg1 toOrientedLocation:(struct CGPoint { double x1; double x2; }*)arg2 orientedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (struct UIOffset { double x1; double x2; })_edgeOffsets;
- (id)_initWithSettings:(id)arg1 corner:(unsigned long long)arg2 target:(id)arg3 action:(SEL)arg4 type:(long long)arg5 options:(unsigned long long)arg6;
- (bool)_isOrientedLocation:(struct CGPoint { double x1; double x2; })arg1 inCorner:(unsigned long long)arg2 forOrientedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 withEdgeOffsets:(struct UIOffset { double x1; double x2; })arg4;
- (long long)_touchInterfaceOrientation;
- (void)_updateSettingsDerivedValues:(id)arg1;
- (unsigned long long)corner;
- (void)reset;
- (void)setEdges:(unsigned long long)arg1;
- (void)setState:(long long)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)shouldReceiveTouch:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
