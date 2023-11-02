
@interface WFCompactTitledPlatterView : PLPlatterView {
    <WFCompactAppearanceProvider> * _appearanceProvider;
    <WFCompactTitledPlatterViewDelegate> * _delegate;
    WFCompactPlatterSashView * _sashView;
    bool  _sashVisible;
}

@property (nonatomic, retain) <WFCompactAppearanceProvider> *appearanceProvider;
@property (nonatomic) <WFCompactTitledPlatterViewDelegate> *delegate;
@property (nonatomic, retain) WFIcon *icon;
@property (nonatomic, retain) WFCompactPlatterSashView *sashView;
@property (nonatomic) bool sashVisible;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mainContentFrame;
- (id)appearanceProvider;
- (void)configureSashViewIfNecessary;
- (id)delegate;
- (id)icon;
- (id)initWithRecipe:(long long)arg1;
- (void)layoutHeaderViews;
- (void)layoutSubviews;
- (id)sashView;
- (bool)sashVisible;
- (void)setAppearanceProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setNeedsLayout;
- (void)setSashView:(id)arg1;
- (void)setSashVisible:(bool)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFitsContentWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)title;

@end
