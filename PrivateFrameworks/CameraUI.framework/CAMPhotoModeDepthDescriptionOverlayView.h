
@interface CAMPhotoModeDepthDescriptionOverlayView : CAMDescriptionOverlayView {
    CAMDepthEffectSuggestionButton * __button;
}

@property (nonatomic, readonly) CAMDepthEffectSuggestionButton *_button;

- (void).cxx_destruct;
- (id)_button;
- (void)_handleDidTapButton:(id)arg1;
- (id)acknowledgmentTextUsingNarrowWidth:(bool)arg1;
- (id)attributedDescriptionTextUsingNarrowWidth:(bool)arg1;
- (id)descriptionTitleTextUsingNarrowWidth:(bool)arg1;
- (id)detailTextUsingNarrowWidth:(bool)arg1;
- (id)infoTextUsingNarrowWidth:(bool)arg1;
- (id)infoTitleTextUsingNarrowWidth:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)maxDescriptionTextWidthForNarrowWidth:(bool)arg1 isLandscape:(bool)arg2 usingFontSizeMultiplier:(double)arg3;
- (void)setCustomSubviewsVisible:(bool)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (id)titleTextUsingNarrowWidth:(bool)arg1;

@end
