
@protocol MKFontManager <NSObject>

@required

- (UIFont *)attributionFont;
- (UIFont *)bodyFont;
- (UIFont *)boldBodyFont;
- (UIFont *)boldSectionHeaderFont;
- (UIFont *)brandTitleFont;
- (UIFont *)iconFontToMatch:(UIFont *)arg1;
- (UIFont *)largeTitleFont;
- (UIFont *)largeTitleFontStatic;
- (UIFont *)largeTitleHeaderFont;
- (UIFont *)lookAroundAttributionButtonFont;
- (UIFont *)lookAroundButtonFont;
- (UIFont *)lookAroundLabelFont;
- (UIFont *)lookAroundSecondaryLabelFont;
- (UIFont *)lookAroundTertiaryLabelFont;
- (UIFont *)mediumBodyFont;
- (UIFont *)mediumTitleFont;
- (UIFont *)ratingCallToActionGlyphFont;
- (UIFont *)ratingCallToActionHeaderLabelFont;
- (UIFont *)ratingCallToActionLabelFont;
- (UIFont *)ratingOverallFont;
- (UIFont *)ratingOverallPercentageFont;
- (UIFont *)recommendSubtitleFont;
- (UIFont *)rowButtonFont;
- (UIFont *)rowGlyphButtonFont;
- (UIFont *)sectionHeaderButtonFont;
- (UIFont *)sectionHeaderFont;
- (UIFont *)semiboldButtonCellFont;
- (UIFont *)smallAttributionFont;
- (UIFont *)subtitleFont;
- (UIFont *)textBlurbFont;

@end
