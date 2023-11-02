
@interface MediaCoreUI.BackdropHostView : UIView {
    void allowsDisplayCompositing;
    void contentView;
    void image;
    void intensity;
    void isPaused;
    void renderer;
    void useMask;
}

@property (nonatomic) bool accessibilityIgnoresInvertColors;

- (void).cxx_destruct;
- (bool)accessibilityIgnoresInvertColors;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAccessibilityIgnoresInvertColors:(bool)arg1;

@end
