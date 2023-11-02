
@interface SBTopAffordanceDotsView : UIButton <UIPointerInteractionDelegate> {
    SBTopAffordanceDotView * _centerDotView;
    <SBTopAffordanceDotsViewDelegate> * _delegate;
    NSLayoutConstraint * _heightConstraint;
    UIView * _hitTestBlocker;
    NSLayoutConstraint * _hitTestBlockerHeightConstraint;
    NSLayoutConstraint * _hitTestBlockerLeftConstraint;
    NSLayoutConstraint * _hitTestBlockerWidthConstraint;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hitTestEdgeInsets;
    SBTopAffordanceDotView * _leadingDotView;
    NSLayoutConstraint * _leadingSpacingConstraint;
    UIPointerInteraction * _pointerInteraction;
    SBTopAffordanceDotView * _trailingDotView;
    NSLayoutConstraint * _trailingSpacingConstraint;
    NSLayoutConstraint * _widthConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBTopAffordanceDotsViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitTestEdgeInsets;
@property (getter=isPointerInteractionEnabled, nonatomic) bool pointerInteractionEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (id)_dotViews;
- (void)_updateBackgroundColor;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (id)delegate;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitTestEdgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 delegate:(id)arg2;
- (bool)isHighlighted;
- (bool)isPointerInteractionEnabled;
- (struct CGPoint { double x1; double x2; })menuAttachmentPointForConfiguration:(id)arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHitTestEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPointerInteractionEnabled:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
