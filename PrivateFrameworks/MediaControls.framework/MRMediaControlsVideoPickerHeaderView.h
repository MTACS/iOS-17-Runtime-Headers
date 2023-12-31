
@interface MRMediaControlsVideoPickerHeaderView : UIView {
    UIImageView * _airPlayIconImageView;
    UILabel * _titleLabel;
    MTVisualStylingProvider * _visualStylingProvider;
}

@property (nonatomic, retain) UIImageView *airPlayIconImageView;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) MTVisualStylingProvider *visualStylingProvider;

- (void).cxx_destruct;
- (void)_updateStyle;
- (id)airPlayIconImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAirPlayIconImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (id)visualStylingProvider;

@end
