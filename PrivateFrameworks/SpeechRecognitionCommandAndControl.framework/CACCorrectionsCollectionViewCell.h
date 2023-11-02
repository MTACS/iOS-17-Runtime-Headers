
@interface CACCorrectionsCollectionViewCell : UICollectionViewCell {
    UILabel * _textLabel;
    NSLayoutConstraint * _widthConstraint;
}

@property (nonatomic, readonly) UILabel *textLabel;
@property (nonatomic, retain) NSLayoutConstraint *widthConstraint;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setWidthConstraint:(id)arg1;
- (id)textLabel;
- (id)widthConstraint;

@end
