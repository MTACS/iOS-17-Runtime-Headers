
@interface PKSearchSuggestionCollectionViewCell : PKDashboardCollectionViewCell {
    UIImage * _icon;
    UIImageView * _imageViewIcon;
    bool  _isTemplateLayout;
    UILabel * _labelSuggestion;
    NSString * _suggestion;
}

@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, retain) NSString *suggestion;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)icon;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)resetFonts;
- (void)setIcon:(id)arg1;
- (void)setSuggestion:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)suggestion;
- (void)traitCollectionDidChange:(id)arg1;

@end
