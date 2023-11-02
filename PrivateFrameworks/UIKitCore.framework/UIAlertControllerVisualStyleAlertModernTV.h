
@interface UIAlertControllerVisualStyleAlertModernTV : UIAlertControllerVisualStyleAlertTV

- (double)_labelHorizontalInsets;
- (double)_marginAboveDetailMessageFirstBaseline;
- (double)_marginBelowDetailMessage;
- (double)_minimumAlertWidthWithContentView:(id)arg1 withCandidateSizes:(id)arg2 preferredSizeForContentContainers:(struct CGSize { double x1; double x2; })arg3;
- (double)_minimumAlertWidthWithTitleLabel:(id)arg1 withCandidateSizes:(id)arg2;
- (double)_minimumSpacingAboveTopmostLabelSafeAscender;
- (double)_titleAndMessageHorizontalInset;
- (double)actionWidthForMinimumActionWidth:(double)arg1 availableWidth:(double)arg2;
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(bool)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(id /* block */)arg7;
- (id)contentBackdropView;
- (bool)contentClipsToBounds;
- (double)contentCornerRadius;
- (bool)contentHasShadow;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsetsForContainerView:(id)arg1;
- (id)contentShadowColor;
- (struct CGSize { double x1; double x2; })contentShadowOffset;
- (double)contentShadowOpacity;
- (double)contentShadowRadius;
- (bool)definesWidthByContentFitting;
- (id)dimmingViewForAlertController:(id)arg1;
- (bool)focusAvoidsNonDefaultActionsIfPossible;
- (double)marginAboveMessageLabelFirstBaseline;
- (double)marginAboveTitleLabelFirstBaseline;
- (double)marginBelowLastLabelLastBaseline;
- (double)marginBelowMessageLabelLastBaseline;
- (double)maximumContentHeight;
- (long long)maximumNumberOfLinesInMessageLabel;
- (long long)maximumNumberOfLinesInTitleLabel;
- (double)maximumWidth;
- (double)maximumWidthForTitleAndMessageContentView;
- (id)messageCompositingFilter;
- (id)messageLabelColor;
- (id)messageLabelFont;
- (double)minimumContentHeight;
- (double)minimumWidthFittingContentView:(id)arg1 titleLabel:(id)arg2 minimumWidthForAllActions:(double)arg3 preferredSizeForContentContainers:(struct CGSize { double x1; double x2; })arg4;
- (long long)permittedActionLayoutDirection;
- (id)preferredActionForActions:(id)arg1 suggestedPreferredAction:(id)arg2;
- (bool)shouldRespectContentViewControllerClippingPreference;
- (id)tintColorForAlertController:(id)arg1;
- (id)titleLabelColor;
- (id)titleLabelFont;

@end
