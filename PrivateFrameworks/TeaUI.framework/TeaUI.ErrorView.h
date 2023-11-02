
@interface TeaUI.ErrorView : UIView {
    void errorPosition;
    void keyboardObserver;
    void label;
    void model;
    void scrollView;
    void styler;
    void visualEffectView;
}

@property (nonatomic, copy) NSArray *accessibilityElements;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) bool isAccessibilityElement;

- (void).cxx_destruct;
- (id)accessibilityElements;
- (id)accessibilityLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (void)layoutSubviews;
- (void)setAccessibilityElements:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setIsAccessibilityElement:(bool)arg1;

@end
