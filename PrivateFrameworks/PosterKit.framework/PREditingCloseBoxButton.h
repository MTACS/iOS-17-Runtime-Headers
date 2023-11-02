
@interface PREditingCloseBoxButton : PREditingTitledButton {
    UITapGestureRecognizer * _actionTapGestureRecognizer;
}

@property (nonatomic, retain) UITapGestureRecognizer *actionTapGestureRecognizer;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitTestPadding;

- (void).cxx_destruct;
- (id)actionTapGestureRecognizer;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })backgroundInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitTestPadding;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)setActionTapGestureRecognizer:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
