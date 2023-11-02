
@interface CPUINowPlayingButton : UIButton {
    NSString * _bundleIdentifier;
    UIImageView * _focusBackgroundView;
    CPUINowPlayingButtonView * _nowPlayingView;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (bool)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setHighlighted:(bool)arg1;

@end
