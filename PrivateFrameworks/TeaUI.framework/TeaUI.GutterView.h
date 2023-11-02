
@interface TeaUI.GutterView : UIScrollView {
    void boundsObservers;
    void childScrollView;
    void contentView;
    void gutters;
    void observations;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } contentOffset;

- (void).cxx_destruct;
- (bool)accessibilityScrollToVisibleWithChild:(id)arg1;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;

@end
