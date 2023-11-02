
@interface _UIDatePickerContainerView : UIView {
    UIView * _contentView;
    bool  _lastHitTestWasPassedThrough;
    _UIPassthroughScrollInteraction * _passthroughInteraction;
    _UIDatePickerOverlayPresentation * _presentation;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) bool lastHitTestWasPassedThrough;
@property (nonatomic, retain) _UIPassthroughScrollInteraction *passthroughInteraction;
@property (nonatomic, retain) _UIDatePickerOverlayPresentation *presentation;

- (void).cxx_destruct;
- (id)contentView;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isTransparentFocusItem;
- (bool)lastHitTestWasPassedThrough;
- (id)passthroughInteraction;
- (id)presentation;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLastHitTestWasPassedThrough:(bool)arg1;
- (void)setPassthroughInteraction:(id)arg1;
- (void)setPresentation:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
