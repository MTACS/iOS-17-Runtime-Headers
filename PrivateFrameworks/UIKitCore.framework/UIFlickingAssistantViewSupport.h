
@interface UIFlickingAssistantViewSupport : UIKeyboardMotionSupport <_UIGeometryChangeObserver> {
    long long  _draggingState;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initalTouchPoint;
    bool  _isCompact;
    long long  _lastMinimizedPosition;
    UIPanGestureRecognizer * _panRecognizer;
    long long  _position;
    UIInputViewSetPlacement * _remotePlacement;
    bool  _shouldNotifyCompletion;
    long long  _visualState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long draggingState;
@property (nonatomic, readonly) bool handlingFlickGesture;
@property (readonly) unsigned long long hash;
@property (setter=setCompact:, nonatomic) bool isCompact;
@property (nonatomic, retain) UIInputViewSetPlacement *remotePlacement;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_connectController:(id)arg1;
- (void)_disconnectingController:(id)arg1;
- (void)_geometryChanged:(const struct { int x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CATransform3D { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; double x_6_1_5; double x_6_1_6; double x_6_1_7; double x_6_1_8; double x_6_1_9; double x_6_1_10; double x_6_1_11; double x_6_1_12; double x_6_1_13; double x_6_1_14; double x_6_1_15; double x_6_1_16; } x6; id x7; id x8; id x9; id x10; }*)arg1 forAncestor:(id)arg2;
- (void)_initalizePosition;
- (void)_updateKeyboardLayoutGuideForAssistantFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updatedController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })assistantFrame;
- (unsigned long long)assistantPosition;
- (struct CGPoint { double x1; double x2; })barOriginFromTouchPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)didUpdateTransition;
- (long long)draggingState;
- (bool)handlingFlickGesture;
- (bool)isCompact;
- (bool)isInputAssistantItemHidden;
- (bool)isRTL;
- (struct CGPoint { double x1; double x2; })keyboardOriginFromAssistantViewPosition:(long long)arg1;
- (void)panGestureHandler:(id)arg1;
- (struct CGPoint { double x1; double x2; })projectedLandingPointForGestureRecognizerEnd:(id)arg1;
- (id)remotePlacement;
- (void)setCompact:(bool)arg1;
- (void)setDraggingState:(long long)arg1;
- (void)setPositionAndVisualStateByPersistentLocation:(bool)arg1 minimize:(bool)arg2;
- (void)setRemotePlacement:(id)arg1;
- (void)transitToDraggingVisualState:(long long)arg1 withTouchLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)updateTransition:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;

@end
