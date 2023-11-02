
@interface WFCompactPlatterSashView : UIView {
    <WFCompactAppearanceProvider> * _appearanceProvider;
    WFIcon * _icon;
    WFIconHostingView * _iconView;
    UILabel * _label;
    NSString * _title;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, retain) <WFCompactAppearanceProvider> *appearanceProvider;
@property (nonatomic, readonly) double contentBaseline;
@property (nonatomic, retain) WFIcon *icon;
@property (nonatomic, retain) WFIconHostingView *iconView;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIVisualEffectView *visualEffectView;

+ (id)font;

- (void).cxx_destruct;
- (id)appearanceProvider;
- (double)contentBaseline;
- (id)icon;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviews;
- (void)setAppearanceProvider:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVisualEffectView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (id)visualEffectView;

@end
