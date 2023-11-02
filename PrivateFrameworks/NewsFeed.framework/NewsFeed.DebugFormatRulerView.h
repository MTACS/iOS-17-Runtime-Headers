
@interface NewsFeed.DebugFormatRulerView : UIView {
    void borderLayer;
    void canvasOffset;
    void contentBounds;
    void contentSize;
    void cornerView;
    void gridView;
    void horizontalRulerEdgeView;
    void metricSelectionFrame;
    void rulerSize;
    void rulersHidden;
    void scale;
    void selectionFrame;
    void verticalRulerEdgeView;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end
