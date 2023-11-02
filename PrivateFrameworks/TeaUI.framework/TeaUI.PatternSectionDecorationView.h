
@interface TeaUI.PatternSectionDecorationView : UICollectionReusableView <TeaUI.GutterViewBoundsObserver> {
    void model;
    void patternView;
    void token;
}

- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (void)didMoveToSuperview;
- (void)gutterViewBoundsDidChange;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end
