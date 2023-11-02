
@interface ASVControlsView : UIView <UIAccessibilityHUDGestureDelegate> {
    UIAccessibilityHUDGestureManager * _largeTextHUDGestureManager;
    UIStackView * _stackView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIAccessibilityHUDGestureManager *largeTextHUDGestureManager;
@property (nonatomic, retain) UIStackView *stackView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_buttonAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)largeTextHUDGestureManager;
- (void)setLargeTextHUDGestureManager:(id)arg1;
- (void)setStackView:(id)arg1;
- (id)stackView;

@end
