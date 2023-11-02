
@interface MKFontManager : NSObject <MKFontManager> {
    bool  _useSmallFont;
}

@property (nonatomic, readonly) UIFont *attributionFont;
@property (nonatomic, readonly) UIFont *bodyFont;
@property (nonatomic, readonly) UIFont *boldBodyFont;
@property (nonatomic, readonly) UIFont *boldSectionHeaderFont;
@property (nonatomic, readonly) UIFont *brandTitleFont;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIFont *largeTitleFont;
@property (nonatomic, readonly) UIFont *largeTitleFontStatic;
@property (nonatomic, readonly) UIFont *largeTitleHeaderFont;
@property (nonatomic, readonly) UIFont *lookAroundAttributionButtonFont;
@property (nonatomic, readonly) UIFont *lookAroundButtonFont;
@property (nonatomic, readonly) UIFont *lookAroundLabelFont;
@property (nonatomic, readonly) UIFont *lookAroundSecondaryLabelFont;
@property (nonatomic, readonly) UIFont *lookAroundTertiaryLabelFont;
@property (nonatomic, readonly) UIFont *mediumBodyFont;
@property (nonatomic, readonly) UIFont *mediumTitleFont;
@property (nonatomic, readonly) UIFont *ratingCallToActionGlyphFont;
@property (nonatomic, readonly) UIFont *ratingCallToActionHeaderLabelFont;
@property (nonatomic, readonly) UIFont *ratingCallToActionLabelFont;
@property (nonatomic, readonly) UIFont *ratingOverallFont;
@property (nonatomic, readonly) UIFont *ratingOverallPercentageFont;
@property (nonatomic, readonly) UIFont *recommendSubtitleFont;
@property (nonatomic, readonly) UIFont *rowButtonFont;
@property (nonatomic, readonly) UIFont *rowGlyphButtonFont;
@property (nonatomic, readonly) UIFont *sectionHeaderButtonFont;
@property (nonatomic, readonly) UIFont *sectionHeaderFont;
@property (nonatomic, readonly) UIFont *semiboldButtonCellFont;
@property (nonatomic, readonly) UIFont *smallAttributionFont;
@property (nonatomic, readonly) UIFont *subtitleFont;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIFont *textBlurbFont;
@property (nonatomic) bool useSmallFont;

+ (void)setUseSmallFont:(bool)arg1;
+ (id)sharedManager;

- (id)attributionFont;
- (id)bodyFont;
- (id)boldBodyFont;
- (id)boldSectionHeaderFont;
- (id)brandTitleFont;
- (id)iconFontToMatch:(id)arg1;
- (id)largeTitleFont;
- (id)largeTitleFontStatic;
- (id)largeTitleHeaderFont;
- (id)lookAroundAttributionButtonFont;
- (id)lookAroundButtonFont;
- (id)lookAroundLabelFont;
- (id)lookAroundSecondaryLabelFont;
- (id)lookAroundTertiaryLabelFont;
- (id)mediumBodyFont;
- (id)mediumTitleFont;
- (id)ratingCallToActionGlyphFont;
- (id)ratingCallToActionHeaderLabelFont;
- (id)ratingCallToActionLabelFont;
- (id)ratingOverallFont;
- (id)ratingOverallPercentageFont;
- (id)recommendSubtitleFont;
- (id)rowButtonFont;
- (id)rowGlyphButtonFont;
- (id)sectionHeaderButtonFont;
- (id)sectionHeaderFont;
- (id)semiboldButtonCellFont;
- (void)setUseSmallFont:(bool)arg1;
- (id)smallAttributionFont;
- (id)subtitleFont;
- (id)textBlurbFont;
- (bool)useSmallFont;

@end
