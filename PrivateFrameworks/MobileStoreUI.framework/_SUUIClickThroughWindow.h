
@interface _SUUIClickThroughWindow : UIWindow {
    UIView * _interactionView;
}

@property (nonatomic, retain) UIView *interactionView;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)interactionView;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setInteractionView:(id)arg1;

@end
