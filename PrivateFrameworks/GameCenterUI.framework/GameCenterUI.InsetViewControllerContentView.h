
@interface GameCenterUI.InsetViewControllerContentView : GameCenterUI.BackgroundView {
    void collectionView;
    void insetLayoutMarginsFromSafeAreaInset;
    void insetLayoutMarginsFromTopSafeAreaInset;
}

@property (nonatomic) unsigned long long edgesInsettingLayoutMarginsFromSafeArea;

- (void).cxx_destruct;
- (unsigned long long)_edgesPropagatingSafeAreaInsetsToSubviews;
- (unsigned long long)edgesInsettingLayoutMarginsFromSafeArea;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEdgesInsettingLayoutMarginsFromSafeArea:(unsigned long long)arg1;

@end
