
@interface HROnboardingInlineExpandedContentView : UIView {
    long long  _currentUserInterfaceStyle;
}

@property (nonatomic) long long currentUserInterfaceStyle;

+ (id)_badgeFont;
+ (double)_badgeFontDistance;
+ (id)_badgeFontTextStyle;
+ (id)_badgeLabelWithLocalizedText:(id)arg1;
+ (id)_bodyFont;
+ (double)_bodyFontDistance;
+ (id)_bodyFontTextStyle;
+ (id)_bodyLabelWithAtrialFibrillationLocalizationKey:(id)arg1;
+ (id)_bodyLabelWithLocalizedText:(id)arg1;
+ (id)_bulletedTextViewWithLocalizationKey:(id)arg1;
+ (id)_headingBodyFont;
+ (double)_headingBodyFontDistance;
+ (id)_headingLabelWithAtrialFibrillationLocalizationKey:(id)arg1;
+ (id)_headingLabelWithLocalizedText:(id)arg1;
+ (double)_headingToBadgeFontDistance;
+ (id)_learnMoreListLabelWithLocalizedText:(id)arg1 URLIdentifier:(long long)arg2 delegate:(id)arg3;
+ (double)_listFontDistance;
+ (id)_listLabelWithAtrialFibrillationLocalizationKey:(id)arg1;
+ (id)_listLabelWithLocalizedText:(id)arg1;
+ (id)_makeViewWithContentItem:(id)arg1;
+ (id)_spacingBetweenItems:(id)arg1;
+ (id)learnMoreAboutAtrialFibrillationExpandedView;
+ (id)viewWithItems:(id)arg1;

- (long long)currentUserInterfaceStyle;
- (void)setCurrentUserInterfaceStyle:(long long)arg1;

@end
