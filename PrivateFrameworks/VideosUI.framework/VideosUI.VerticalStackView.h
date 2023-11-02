
@interface VideosUI.VerticalStackView : VUIBaseView <UIGestureRecognizerDelegate> {
    void $__lazy_storage_$_expandableView;
    void $__lazy_storage_$_panelView;
    void $__lazy_storage_$_platterContainerView;
    void bottomExpandableGradient;
    void bottomPlatterGradient;
    void footerView;
    void initialExpandableHeight;
    void isPartiallyExpanded;
    void isScrollable;
    void lastExpandableViewFrame;
    void lastPanelFrame;
    void layout;
    void maxExpandableHeight;
    void platterView;
    void scrollDraggedOffset;
    void topPlatterGradient;
}

- (void).cxx_destruct;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;

@end
