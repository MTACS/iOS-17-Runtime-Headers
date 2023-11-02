
@interface PKDashboardButtonCollectionViewCell : PKDashboardCollectionViewCell {
    UIActivityIndicatorView * _activityIndicator;
    bool  _enabled;
    bool  _showActivity;
    UILabel * _titleLabel;
}

@property (nonatomic) bool enabled;
@property (nonatomic) bool showActivity;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_resetFonts;
- (void)_updateTextColor;
- (void)createSubviews;
- (bool)enabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setEnabled:(bool)arg1;
- (void)setShowActivity:(bool)arg1;
- (void)setTitle:(id)arg1;
- (bool)showActivity;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;

@end
