
@interface MRMediaControlsVideoPickerFooterView : MPButton {
    UILabel * _customTitleLabel;
    MTVisualStylingProvider * _visualStylingProvider;
}

@property (nonatomic, retain) UILabel *customTitleLabel;
@property (nonatomic, retain) MTVisualStylingProvider *visualStylingProvider;

- (void).cxx_destruct;
- (void)_updateStyle;
- (id)customTitleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setCustomTitleLabel:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setVisualStylingProvider:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabelText;
- (void)traitCollectionDidChange:(id)arg1;
- (id)visualStylingProvider;

@end
