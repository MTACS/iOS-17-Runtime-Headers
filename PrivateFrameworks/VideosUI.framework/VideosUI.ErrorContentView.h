
@interface VideosUI.ErrorContentView : VUIBaseView {
    void debugTextView;
    void debugTextView2;
    void descriptionView;
    void layout;
    void titleView;
}

@property (nonatomic, readonly) UIView *accessibilityDescriptionView;
@property (nonatomic, readonly) UIView *accessibilityTitleView;

- (void).cxx_destruct;
- (id)accessibilityDescriptionView;
- (id)accessibilityTitleView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;

@end
