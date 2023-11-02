
@interface ChatKit.SendMenuCollectionViewCell : UICollectionViewCell {
    void iconBlurContainerView;
    void iconHeightConstraint;
    void iconImageView;
    void iconImageViewAppearanceAnimationOpacity;
    void iconImageViewScrollViewEdgeBlurFilterRadius;
    void iconImageViewScrollViewEdgeOpacity;
    void iconImageViewSectionHiddenBlurFilterRadius;
    void iconImageViewSectionHiddenOpacity;
    void iconImageViewSendMenuAppearanceAnimationBlurFilterRadius;
    void iconToBottomConstraint;
    void iconToEdgeHorizontalConstraint;
    void iconToLabelHorizontalConstraint;
    void iconToTopConstraint;
    void iconWidthConstraint;
    void selectionStateScale;
    void sendMenuCellDelegate;
    void sendMenuCustomIconLayer;
    void sendMenuItemImageCompositingFilterForDarkMode;
    void sendMenuItemImageCompositingFilterForLightMode;
    void sendMenuItemImageForDarkMode;
    void sendMenuItemImageForLightMode;
    void sendMenuItemImageInsets;
    void titleBlurContainerView;
    void titleLabel;
    void titleLabelAppearanceAnimationOpacity;
    void titleLabelScrollViewEdgeBlurFilterRadius;
    void titleLabelScrollViewEdgeOpacity;
    void titleLabelSectionHiddenBlurFilterRadius;
    void titleLabelSectionHiddenOpacity;
    void titleLabelSendMenuAppearanceAnimationBlurFilterRadius;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } accessibilityFrame;
@property (nonatomic) struct CGPoint { double x1; double x2; } center;

- (void).cxx_destruct;
- (void)_bridgedUpdateConfigurationUsingState:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (struct CGPoint { double x1; double x2; })center;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAccessibilityFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
