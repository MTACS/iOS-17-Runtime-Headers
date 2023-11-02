
@protocol MKInfoCardTheme <NSObject>

@required

- (UIColor *)buttonHighlightedColor;
- (UIColor *)buttonNormalColor;
- (UIColor *)cardBackgroundColor;
- (UIColor *)disabledActionRowBackgroundColor;
- (UIColor *)disabledActionRowTextColor;
- (UIColor *)headerPrimaryButtonHighlightedColor;
- (UIColor *)headerPrimaryButtonNormalColor;
- (UIColor *)highlightedTintColor;
- (bool)isDarkTheme;
- (NSString *)javaScriptName;
- (UIColor *)lightTextColor;
- (UIColor *)normalActionRowBackgroundColor;
- (UIColor *)normalActionRowBackgroundPressedColor;
- (UIColor *)normalBackgroundColor;
- (UIColor *)ratingBarBackgroundColor;
- (UIColor *)ratingBarEndColor;
- (UIColor *)ratingBarStartColor;
- (UIColor *)rowColor;
- (UIColor *)selectedRowColor;
- (UIColor *)separatorLineColor;
- (UIColor *)tertiaryTextColor;
- (UIColor *)textColor;
- (unsigned long long)themeType;
- (UIColor *)tintColor;
- (UIColor *)transitChevronBackgroundColor;
- (UIColor *)transitDelayedTextColor;
- (UIColor *)transitIncidentBackgroundColor;
- (UIColor *)transitOntimeTextColor;

@end
