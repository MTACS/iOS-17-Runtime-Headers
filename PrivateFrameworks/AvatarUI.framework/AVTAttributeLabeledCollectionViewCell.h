
@interface AVTAttributeLabeledCollectionViewCell : AVTAttributeCollectionViewCell {
    UILabel * _label;
    UIVisualEffectView * _labelBackgroundView;
    NSString * _labelString;
    double  _labelVerticalSpace;
    bool  _shouldHideLabelBackground;
}

@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) UIVisualEffectView *labelBackgroundView;
@property (nonatomic, copy) NSString *labelString;
@property (nonatomic) double labelVerticalSpace;
@property (nonatomic) bool shouldHideLabelBackground;

+ (id)cellIdentifier;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForAttributeView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (id)labelBackgroundView;
- (id)labelString;
- (double)labelVerticalSpace;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setLabel:(id)arg1;
- (void)setLabelBackgroundView:(id)arg1;
- (void)setLabelString:(id)arg1;
- (void)setLabelVerticalSpace:(double)arg1;
- (void)setShouldHideLabelBackground:(bool)arg1;
- (bool)shouldHideLabelBackground;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateLabelBackgroundAppearance;

@end
