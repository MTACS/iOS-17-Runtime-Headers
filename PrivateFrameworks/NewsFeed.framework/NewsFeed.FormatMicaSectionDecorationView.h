
@interface NewsFeed.FormatMicaSectionDecorationView : UICollectionReusableView <TeaUI.GutterViewBoundsObserver> {
    void micaView;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  model;
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
