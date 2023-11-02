
@interface PKPaymentPassActionWidgetButton : UIButton {
    PKPaymentPassActionBundle * _actionBundle;
    bool  _usesAccessibilityLayout;
}

@property (nonatomic, retain) PKPaymentPassActionBundle *actionBundle;
@property (nonatomic) bool usesAccessibilityLayout;

+ (double)glyphImageHeight:(bool)arg1;
+ (double)widgetHeightWithAccessibilityLayout:(bool)arg1;

- (void).cxx_destruct;
- (void)_applyStyles;
- (id)actionBundle;
- (id)initWithWidgetViewStyle:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)setActionBundle:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setUsesAccessibilityLayout:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)usesAccessibilityLayout;

@end
