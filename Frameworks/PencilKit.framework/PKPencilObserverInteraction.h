
@interface PKPencilObserverInteraction : NSObject <PKHoverControllerDelegate, PKPencilObserverGestureRecognizerDelegate, UIInteraction, UIPencilInteractionDelegate> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentLocation;
    <PKPencilObserverInteractionDelegate> * _delegate;
    PKHoverController * _hoverController;
    struct vector<PKInputPoint, std::allocator<PKInputPoint>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<PKInputPoint *, std::allocator<PKInputPoint>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _inputPoints;
    UIPencilInteraction * _pencilInteraction;
    PKPencilObserverGestureRecognizer * _pencilObserver;
    double  _previousActivePencilMinuteTimestamp;
    bool  _shadowOpacityOverrideIsActive;
    double  _shadowOpacityOverrideValue;
    PKPencilStatisticsManager * _statisticsManager;
    PKPencilShadowView * _systemShadowView;
    double  _timestampForHoverBegan;
    double  _timestampForPencilObserverBegan;
    double  _timestampForShadowOpacityOverrideChange;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) UIView *view;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didMoveToView:(id)arg1;
- (void)disableOpacityOverride;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)hoverController:(id)arg1 didBegin:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg2;
- (void)hoverController:(id)arg1 didUpdate:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg2;
- (void)hoverController:(id)arg1 intentionalHoverWithDuration:(double)arg2;
- (void)hoverControllerDidEnd:(id)arg1;
- (void)pencilInteractionDidTap:(id)arg1;
- (void)pencilObserver:(id)arg1 didBeginAtPoint:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg2;
- (void)pencilObserver:(id)arg1 didMoveToPoint:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg2;
- (void)pencilObserverDidEnd:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)setView:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
