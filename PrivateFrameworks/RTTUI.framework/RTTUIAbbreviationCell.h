
@interface RTTUIAbbreviationCell : UICollectionViewCell {
    UILabel * _abbreviation;
    UIView * _abbreviationContainer;
    UILabel * _hint;
    UIVisualEffectView * _hintContainer;
}

@property (nonatomic, retain) UILabel *abbreviation;
@property (nonatomic, retain) UILabel *hint;

- (void).cxx_destruct;
- (id)abbreviation;
- (id)abbreviationText;
- (id)accessibilityIdentifier;
- (bool)accessibilityIgnoresInvertColors;
- (id)accessibilityLabel;
- (void)dealloc;
- (id)hint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (void)layoutSubviews;
- (void)setAbbreviation:(id)arg1;
- (void)setAbbreviationData:(id)arg1;
- (void)setHint:(id)arg1;

@end
