
@interface __ASCLayoutProxy : NSObject {
    void base;
}

@property (nonatomic, readonly) NSString *description;

+ (id)adLockupLayoutWithTraitCollection:(id)arg1 artworkView:(id)arg2 headingText:(id)arg3 titleText:(id)arg4 subtitleText:(id)arg5 offerText:(id)arg6 offerButton:(id)arg7 starRatingView:(id)arg8 ratingCountLabel:(id)arg9 adTransparencyButton:(id)arg10 editorsChoiceView:(id)arg11 descriptionLabel:(id)arg12;
+ (double)adTransparencyButtonScaledCapInset:(double)arg1 in:(id)arg2;
+ (double)adTransparencyButtonTitlePointSizeProvider:(id)arg1;
+ (double)adTransparencyDeveloperNamePointSizeProvider:(id)arg1;
+ (id)artworkFrom:(id)arg1 and:(id)arg2;
+ (double)axOfferButtonHeightForSize:(id)arg1;
+ (double)containerViewRotationAngleFor:(id)arg1 screenshots:(id)arg2 trailers:(id)arg3;
+ (struct CGSize { double x1; double x2; })estimatedMediaContentSizeFor:(id)arg1 screenshots:(id)arg2 trailers:(id)arg3 fitting:(struct CGSize { double x1; double x2; })arg4 in:(id)arg5;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMarginsFor:(id)arg1 existingLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
+ (double)lockupHeadingPointSizeProvider:(id)arg1;
+ (id)lockupLayoutOfSize:(id)arg1 traitCollection:(id)arg2 artworkView:(id)arg3 headingText:(id)arg4 titleText:(id)arg5 subtitleText:(id)arg6 offerText:(id)arg7 offerButton:(id)arg8;
+ (id)lockupMediaLayoutFor:(id)arg1 screenshots:(id)arg2 trailers:(id)arg3 containerView:(id)arg4 mediaViews:(id)arg5;
+ (struct CGSize { double x1; double x2; })lockupMediaPreferredMediaSizeWithFitting:(struct CGSize { double x1; double x2; })arg1 for:(id)arg2 with:(id)arg3 and:(id)arg4 in:(id)arg5;
+ (id)lockupMediaSizingLayoutFor:(id)arg1 screenshots:(id)arg2 trailers:(id)arg3 containerView:(id)arg4 mediaViews:(id)arg5;
+ (double)lockupSubtitlePointSizeProvider:(id)arg1;
+ (double)lockupTitlePointSizeProvider:(id)arg1;
+ (struct CGSize { double x1; double x2; })mediumLockupEstimatedSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 compatibleWithTraitCollection:(id)arg2;
+ (struct CGSize { double x1; double x2; })mediumOfferButtonLockupEstimatedSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 compatibleWithTraitCollection:(id)arg2;
+ (struct CGSize { double x1; double x2; })miniLockupEstimatedSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 compatibleWithTraitCollection:(id)arg2;
+ (long long)numberOfViewsInLockupMediaLayoutFor:(id)arg1 with:(id)arg2 and:(id)arg3;
+ (double)offerButtonFixedHeightForSize:(id)arg1;
+ (double)offerButtonHeightForSize:(id)arg1;
+ (double)offerButtonRegularWidthForSize:(id)arg1;
+ (id)offerDisclosureLayoutWithDisclosureIndicator:(id)arg1;
+ (id)offerEmptyLayoutWithImageView:(id)arg1 titleView:(id)arg2 subtitleView:(id)arg3;
+ (id)offerIconLayoutForSize:(id)arg1 imageView:(id)arg2 titleView:(id)arg3 subtitleView:(id)arg4 hasTrailingSubtitle:(bool)arg5 shouldTopAlign:(bool)arg6 topPadding:(double)arg7;
+ (double)offerProgressDiameterForSize:(id)arg1;
+ (id)offerTextLayoutForSize:(id)arg1 titleBackgroundView:(id)arg2 titleView:(id)arg3 subtitleView:(id)arg4 hasTrailingSubtitle:(bool)arg5 shouldTopAlign:(bool)arg6 topPadding:(double)arg7 shouldExpandBackground:(bool)arg8;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectWithLayoutDirectionForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inTraitEnvironment:(id)arg2 relativeTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (struct CGSize { double x1; double x2; })smallLockupEstimatedSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 compatibleWithTraitCollection:(id)arg2;
+ (struct CGSize { double x1; double x2; })smallOfferButtonLockupEstimatedSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)traitEnvironmentWithTraitCollection:(id)arg1;
+ (id)tvTextPillOverlayWithBackgroundView:(id)arg1 textView:(id)arg2;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentInsetsInTraitEnvironment:(id)arg1;
- (id)description;
- (id)init;
- (struct CGSize { double x1; double x2; })measuredSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 inTraitEnvironment:(id)arg2;
- (void)placeChildrenRelativeToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inTraitEnvironment:(id)arg2;

@end
