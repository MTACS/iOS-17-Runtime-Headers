
@interface PPKQuickLookBannerView : UIView {
    UIButton * _actionButton;
    UIView * _backgroundView;
    UIButton * _closeButton;
    NSArray * _compactSizeConstraints;
    UILayoutGuide * _contentLayoutGuide;
    NSArray * _extraCompactSizeConstraints;
    UIImageView * _imageView;
    NSLayoutConstraint * _imageViewCollapsingConstraint;
    NSArray * _regularSizeConstraints;
    UILabel * _subtitle;
    UILabel * _title;
    NSLayoutConstraint * _titleStackLeadingConstraint;
    UIStackView * _titleStackView;
    bool  _useExtraCompactLayout;
}

@property (nonatomic, retain) UIButton *actionButton;
@property (nonatomic, retain) UIButton *closeButton;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UILabel *subtitle;
@property (nonatomic, retain) UILabel *title;

- (void).cxx_destruct;
- (id)_compactSizeConstraints;
- (id)_extraCompactSizeConstraints;
- (bool)_isUsingAccessibilityContentSizeCategory;
- (long long)_numberOfSubtitleLines;
- (long long)_numberOfTitleLines;
- (id)_regularSizeConstraints;
- (void)_setUseExtraCompactLayout:(bool)arg1;
- (void)_updateImageViewWithConfiguration:(id)arg1;
- (void)_updateUI;
- (bool)_useCompactLayout;
- (id)actionButton;
- (void)clearExistingActions:(id)arg1;
- (id)closeButton;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)populateWithConfiguration:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;

@end
