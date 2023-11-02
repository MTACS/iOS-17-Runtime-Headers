
@interface CAMCTMDescriptionOverlayView : CAMDescriptionOverlayView

- (id)acknowledgmentTextUsingNarrowWidth:(bool)arg1;
- (id)descriptionTextUsingNarrowWidth:(bool)arg1;
- (id)descriptionTitleTextUsingNarrowWidth:(bool)arg1;
- (id)infoTextUsingNarrowWidth:(bool)arg1;
- (id)infoTitleTextUsingNarrowWidth:(bool)arg1;
- (double)maxDescriptionTextWidthForNarrowWidth:(bool)arg1 isLandscape:(bool)arg2 usingFontSizeMultiplier:(double)arg3;
- (double)maxInfoTextWidthForNarrowWidth:(bool)arg1 isLandscape:(bool)arg2 usingFontSizeMultiplier:(double)arg3;
- (id)titleTextUsingNarrowWidth:(bool)arg1;

@end
