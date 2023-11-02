
@interface HealthExperienceUI.CoreTextView : UIView {
    void $__lazy_storage_$_tapRecognizer;
    void attributedText;
    void columns;
    void delegate;
    void gutter;
    void lastTypesettingResult;
    void linkColor;
    void linksEnabled;
    void sizingStrategy;
}

@property (nonatomic) long long accessibilityContainerType;
@property (nonatomic) bool isAccessibilityElement;

- (void).cxx_destruct;
- (long long)accessibilityContainerType;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (void)onLinkTap:(id)arg1;
- (void)setAccessibilityContainerType:(long long)arg1;
- (void)setIsAccessibilityElement:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
