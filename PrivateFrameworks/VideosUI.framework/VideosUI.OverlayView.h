
@interface VideosUI.OverlayView : VUIBaseView {
    void badgeViewWrappers;
    void gradientLayer;
    void gradientView;
    void hasPageControlDisplayedOnTop;
    void overlayType;
    void padding;
    void progressView;
    void textBadge;
    void titleLabel;
}

@property (nonatomic, readonly) VUILabel *accessibilityTitleLabel;
@property (nonatomic, readonly) bool vuiDebugUI;

- (void).cxx_destruct;
- (id)accessibilityTitleLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)vuiDebugUI;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;

@end
