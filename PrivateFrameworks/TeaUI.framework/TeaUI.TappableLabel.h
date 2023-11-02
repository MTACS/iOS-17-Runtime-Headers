
@interface TeaUI.TappableLabel : TeaUI.TouchInsetsLabel {
    void onTap;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic) bool isAccessibilityElement;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setIsAccessibilityElement:(bool)arg1;

@end
