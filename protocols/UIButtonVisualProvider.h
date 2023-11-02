
@protocol UIButtonVisualProvider <NSObject>

@required

+ (bool)requiresNewVisualProviderForChanges;
+ (bool)shouldUpdateContextMenuEnabledOnMenuChanges;
+ (id)visualProviderForButton:(UIButton *)arg1;

- (bool)adjustsFontForContentSizeCategory;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (UIView *)backgroundViewCreateIfNeeded:(bool)arg1;
- (struct { double x1; double x2; })baselineOffsetsAtSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)canBecomeFocused;
- (void)cleanupForVisualProvider:(id <UIButtonVisualProvider>)arg1;
- (UIVisualEffectView *)contentBackdropView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (UIContextMenuConfiguration *)contextMenuInteraction:(UIContextMenuInteraction *)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (UITargetedPreview *)contextMenuInteraction:(UIContextMenuInteraction *)arg1 previewForDismissingMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (UITargetedPreview *)contextMenuInteraction:(UIContextMenuInteraction *)arg1 previewForHighlightingMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (void)contextMenuInteraction:(UIContextMenuInteraction *)arg1 updateStyleForMenuWithConfiguration:(UIContextMenuConfiguration *)arg2 style:(_UIContextMenuStyle *)arg3;
- (void)didChangeFromIdiom:(long long)arg1 onScreen:(UIScreen *)arg2 traverseHierarchy:(bool)arg3;
- (void)didUpdateFocusInContext:(UIFocusUpdateContext *)arg1 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg2;
- (UIView *)effectiveContentView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (UIImageView *)imageViewCreateIfNeeded:(bool)arg1;
- (void)intrinsicContentSizeInvalidatedForChildView:(UIView *)arg1;
- (struct CGSize { double x1; double x2; })intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)isOn;
- (void)layoutSubviews;
- (struct CGPoint { double x1; double x2; })menuAttachmentPointForConfiguration:(UIContextMenuConfiguration *)arg1;
- (UIPreviewParameters *)pointerEffectPreviewParameters;
- (UIPointerEffect *)pointerEffectWithPreview:(UITargetedPreview *)arg1;
- (UIPointerShape *)pointerShapeInContainer:(void *)arg1 proposal:(void *)arg2; // needs 2 arg types, found 6: UIView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, UIPointerShape *, id /* block */, void*
- (void)pointerWillEnter:(id <UIPointerInteractionAnimating>)arg1;
- (void)pointerWillExit:(id <UIPointerInteractionAnimating>)arg1;
- (_UIFocusAnimationConfiguration *)preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(UIFocusUpdateContext *)arg2;
- (<UIHoverEffect> *)preferredHoverEffect;
- (UIShape *)preferredHoverShape;
- (UIImageView *)selectionIndicatorView;
- (void)setAttributedTitle:(NSAttributedString *)arg1 forState:(unsigned long long)arg2;
- (void)setContentHorizontalAlignment:(long long)arg1;
- (void)setContentHuggingPriorities:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentVerticalAlignment:(long long)arg1;
- (void)setContextMenuIsPrimary:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setImage:(UIImage *)arg1 forState:(unsigned long long)arg2;
- (void)setMenu:(UIMenu *)arg1;
- (void)setMenuProvider:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, UIMenu *, id /* block */, id, NSArray *, void*
- (void)setOn:(bool)arg1;
- (void)setPreferredSymbolConfiguration:(UIImageSymbolConfiguration *)arg1 forImageInState:(unsigned long long)arg2;
- (void)setReversesTitleShadowWhenHighlighted:(bool)arg1;
- (void)setRole:(long long)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setShowsTouchWhenHighlighted:(bool)arg1;
- (void)setTitle:(NSString *)arg1 forState:(unsigned long long)arg2;
- (void)tintColorDidChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (UILabel *)titleViewCreateIfNeeded:(bool)arg1;
- (void)touchesBegan;
- (void)touchesEnded;
- (void)traitCollectionDidChange:(UITraitCollection *)arg1;
- (void)updateConstraints;
- (void)updatedAppliedCornerRadius:(double)arg1;
- (void)updatedAppliedCornersAreContinuous:(bool)arg1;
- (bool)useTitleForSelectedIndicatorBounds;
- (UIView *)viewForFirstBaselineLayout;
- (UIView *)viewForLastBaselineLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visualBoundsWithCornerRadius:(double*)arg1;
- (void)willMoveToWindow:(UIWindow *)arg1;

@optional

- (UIButton *)button;
- (void)setButton:(UIButton *)arg1;

@end
