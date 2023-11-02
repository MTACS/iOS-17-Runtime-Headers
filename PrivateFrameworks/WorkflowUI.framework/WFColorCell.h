
@interface WFColorCell : UICollectionViewCell {
    NSString * _colorName;
    WFFloatingView * _floatingView;
    UIView * _selectedRingView;
}

@property (nonatomic, copy) NSString *colorName;
@property (nonatomic, readonly) WFFloatingView *floatingView;
@property (nonatomic, retain) WFGradient *gradient;
@property (nonatomic) UIView *selectedRingView;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)colorName;
- (id)floatingView;
- (id)gradient;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (void)layoutSubviews;
- (id)selectedRingView;
- (void)setColorName:(id)arg1;
- (void)setGradient:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectedRingView:(id)arg1;

@end
