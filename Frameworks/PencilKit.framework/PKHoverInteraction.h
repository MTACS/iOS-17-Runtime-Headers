
@interface PKHoverInteraction : NSObject <PKHoverControllerDelegate, UIInteraction> {
    <PKHoverInteractionDelegate> * _delegate;
    PKHoverController * _hoverController;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <PKHoverInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKHoverController *hoverController;
@property (readonly) Class superclass;
@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (id)hoverController;
- (void)hoverController:(id)arg1 holdGestureMeanInputPoint:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg2 latestInputPoint:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg3;
- (void)hoverControllerHoldGestureEnded:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)setHoverController:(id)arg1;
- (void)setView:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
