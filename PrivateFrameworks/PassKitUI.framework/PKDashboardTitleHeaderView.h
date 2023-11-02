
@interface PKDashboardTitleHeaderView : PKDashboardCollectionViewCell {
    id /* block */  _action;
    UIButton * _actionButton;
    UIColor * _actionColor;
    UIImage * _actionImage;
    unsigned long long  _actionStyle;
    NSString * _actionTitle;
    bool  _isCompactUI;
    bool  _isTemplateLayout;
    UIMenu * _menu;
    bool  _preferTitleWrapOverStackedLayout;
    NSString * _title;
    UIColor * _titleColor;
    UILabel * _titleLabel;
    unsigned long long  _titleStyle;
    double  _topPadding;
    bool  _useCompactTopInset;
    bool  _useLargeBottomInset;
}

@property (nonatomic, copy) id /* block */ action;
@property (nonatomic, copy) UIColor *actionColor;
@property (nonatomic, copy) UIImage *actionImage;
@property (nonatomic) unsigned long long actionStyle;
@property (nonatomic, copy) NSString *actionTitle;
@property (nonatomic, copy) UIMenu *menu;
@property (nonatomic) bool preferTitleWrapOverStackedLayout;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) UIColor *titleColor;
@property (nonatomic) unsigned long long titleStyle;
@property (nonatomic) double topPadding;
@property (nonatomic) bool useCompactTopInset;
@property (nonatomic) bool useLargeBottomInset;

+ (double)defaultHorizontalInset;
+ (double)defaultTableHorizontalInset;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_resetButtonInsets;
- (id /* block */)action;
- (id)actionColor;
- (id)actionImage;
- (unsigned long long)actionStyle;
- (id)actionTitle;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)menu;
- (bool)preferTitleWrapOverStackedLayout;
- (void)prepareForReuse;
- (void)resetFonts;
- (void)setAction:(id /* block */)arg1;
- (void)setActionColor:(id)arg1;
- (void)setActionImage:(id)arg1;
- (void)setActionStyle:(unsigned long long)arg1;
- (void)setActionTitle:(id)arg1;
- (void)setMenu:(id)arg1;
- (void)setPreferTitleWrapOverStackedLayout:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitleStyle:(unsigned long long)arg1;
- (void)setTopPadding:(double)arg1;
- (void)setUseCompactTopInset:(bool)arg1;
- (void)setUseLargeBottomInset:(bool)arg1;
- (bool)shouldShowActionButton;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (id)titleColor;
- (unsigned long long)titleStyle;
- (double)topPadding;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)useCompactTopInset;
- (bool)useLargeBottomInset;

@end
