
@interface CAMControlDrawerCustomButton : CAMControlDrawerButton <CAMControlDrawerExpandableButton> {
    bool  __touchInTrackedView;
    <CAMControlDrawerExpandableButtonDelegate> * _delegate;
    bool  _expanded;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _expansionInsets;
}

@property (getter=_isTouchInTrackedView, setter=_setTouchInTrackedView:, nonatomic) bool _touchInTrackedView;
@property (nonatomic) <CAMControlDrawerExpandableButtonDelegate> *delegate;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } expansionInsets;
@property (getter=isSelfExpanding, nonatomic, readonly) bool selfExpanding;

- (void).cxx_destruct;
- (bool)_isTouchInTrackedView;
- (void)_setExpanded:(bool)arg1 animated:(bool)arg2 shouldNotify:(bool)arg3;
- (void)_setTouchInTrackedView:(bool)arg1;
- (bool)_shouldRejectAccessibilityGestureForHUDManager:(id)arg1;
- (bool)_shouldTrackView:(id)arg1 forTouchAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_updateHighlightedView;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)delegate;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })expansionInsets;
- (bool)isExpandable;
- (bool)isExpanded;
- (bool)isSelfExpanding;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setExpanded:(bool)arg1 animated:(bool)arg2;
- (void)setExpansionInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)shouldAccessibilityGestureBeginForHUDManager:(id)arg1;

@end
