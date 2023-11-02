
@interface VideosUI.CollectionHeaderView : UICollectionReusableView {
    void applySafeAreaInsets;
    void buttonView;
    void containerView;
    void contentPeekingTransform;
    void imageView;
    void positionAdjustmentTransform;
    void rendersAsButton;
    void subtitleView;
    void supplementaryViewModel;
    void titleView;
    void viewLayout;
}

@property (nonatomic, readonly) VUIButton *accessibilityButtonView;
@property (nonatomic, readonly) VUIImageView *accessibilityImageView;
@property (nonatomic, readonly) UIView *accessibilitySubtitleView;
@property (nonatomic, readonly) UIView *accessibilityTitleView;

- (void).cxx_destruct;
- (id)accessibilityButtonView;
- (id)accessibilityImageView;
- (id)accessibilitySubtitleView;
- (id)accessibilityTitleView;
- (void)headerTapped;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;

@end
