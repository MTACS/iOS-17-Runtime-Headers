
@interface StocksUI.DateRangePickerView : UIScrollView {
    void onChange;
    void segmentedControl;
    void styler;
}

@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic) bool isAccessibilityElement;

- (void).cxx_destruct;
- (bool)accessibilityActivate;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (void)layoutSubviews;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setIsAccessibilityElement:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
