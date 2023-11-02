
@interface _UIGhostView : UIView {
    _UIPortalView * _portalView;
    UIView * _view;
}

@property (nonatomic, readonly) _UIPortalView *portalView;
@property (nonatomic, readonly) UIView *view;

+ (id)ghostViewForView:(id)arg1;

- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithView:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)portalView;
- (void)setHidden:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)view;

@end
