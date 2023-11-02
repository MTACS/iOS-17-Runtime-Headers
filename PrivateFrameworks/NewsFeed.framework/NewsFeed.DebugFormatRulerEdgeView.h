
@interface NewsFeed.DebugFormatRulerEdgeView : UIView {
    void canvasOffset;
    void contentBounds;
    void contentView;
    void direction;
    void edge;
    void indicatorView;
    void markerLabels;
    void markerLayer;
    void metricSelectionFrame;
    void metricSelectionView;
    void scale;
    void selectionFrame;
    void selectionView;
}

- (void).cxx_destruct;
- (void)didUpdatePan:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;

@end
