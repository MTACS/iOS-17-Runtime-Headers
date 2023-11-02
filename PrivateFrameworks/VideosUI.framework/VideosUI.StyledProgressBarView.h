
@interface VideosUI.StyledProgressBarView : VUIBaseView {
    void completeTintColor;
    void cornerRadius;
    void gradientEndColor;
    void gradientStartColor;
    void height;
    void padding;
    void progress;
    void progressBarView;
    void progressTintColor;
    void shadowImageView;
    void shouldProgressBarUseRoundCorner;
    void style;
}

@property (nonatomic, readonly) double accessibilityProgress;

- (void).cxx_destruct;
- (double)accessibilityProgress;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;
- (void)vui_setSelected:(bool)arg1 animated:(bool)arg2 withAnimationCoordinator:(id)arg3;

@end
