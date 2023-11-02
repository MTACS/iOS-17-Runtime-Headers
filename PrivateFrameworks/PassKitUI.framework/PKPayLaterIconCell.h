
@interface PKPayLaterIconCell : PKDashboardCollectionViewCell {
    bool  _appearInactive;
    bool  _hasCircleBorder;
    UIImage * _icon;
    UIView * _imageView;
    double  _minimumHeight;
    UIView * _view;
}

@property (nonatomic) bool appearInactive;
@property (nonatomic) bool hasCircleBorder;
@property (nonatomic) double minimumHeight;

- (void).cxx_destruct;
- (void)_applyInactiveAppearance;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (void)_setupImageView;
- (bool)appearInactive;
- (bool)hasCircleBorder;
- (void)layoutSubviews;
- (double)minimumHeight;
- (void)prepareForReuse;
- (void)setAppearInactive:(bool)arg1;
- (void)setHasCircleBorder:(bool)arg1;
- (void)setIcon:(id)arg1 animated:(bool)arg2;
- (void)setIconDate:(id)arg1 animated:(bool)arg2;
- (void)setMinimumHeight:(double)arg1;
- (void)setView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
