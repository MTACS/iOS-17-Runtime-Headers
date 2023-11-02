
@interface VideosUI.InlinePlaybackView : VUIBaseView {
    void cornerRadius;
    void focusSizeIncrease;
    void imageView;
    void playbackView;
    void transitionAnimationDuration;
}

@property (nonatomic, readonly) UIView *accessibilityImageView;
@property (nonatomic, readonly) UIView *accessibilityPlaybackView;

- (void).cxx_destruct;
- (id)accessibilityImageView;
- (id)accessibilityPlaybackView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;

@end
