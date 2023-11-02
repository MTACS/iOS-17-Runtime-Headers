
@interface UIFont : NSObject <NSCopying, NSSecureCoding>

@property (setter=_setCachedVariantWeight:, nonatomic, retain) NSNumber *_cachedVariantWeight;
@property (nonatomic, readonly) double ascender;
@property (nonatomic, readonly) double capHeight;
@property (setter=cs_setCachedVariantWeight:, nonatomic, retain) NSNumber *cs_cachedVariantWeight;
@property (nonatomic, readonly) double descender;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) bool fcui_hasExuberatedLineHeight;
@property (nonatomic, readonly) UIFontDescriptor *fontDescriptor;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) double leading;
@property (nonatomic, readonly) double lineHeight;
@property (nonatomic, readonly) double maximumPointSizeAfterScaling;
@property (nonatomic, readonly) NAUITextStyleDescriptor *naui_dynamicFontTextStyleDescriptor;
@property (nonatomic, readonly) double pointSize;
@property (nonatomic, readonly) double pointSizeForScaling;
@property (setter=pr_setCachedVariantWeight:, nonatomic, retain) NSNumber *pr_cachedVariantWeight;
@property (nonatomic, readonly, copy) NSString *pr_localizedTimeFontName;
@property (nonatomic, readonly, copy) NSString *pr_postScriptName;
@property (nonatomic, readonly, copy) NSURL *pr_referenceURL;
@property (nonatomic, readonly, copy) NSString *pr_timeFontIdentifier;
@property (nonatomic, readonly) UIFont *pu_fontWithMonospacedNumbers;
@property (nonatomic, readonly) NSString *textStyleForScaling;
@property (nonatomic, readonly) bool unui_hasExuberatedLineHeight;
@property (readonly) UIFont *wa_bold;
@property (nonatomic, readonly) double wf_lineHeight;
@property (nonatomic, readonly) double xHeight;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

+ (void)_evictAllItemsFromFontAndFontDescriptorCaches;
+ (id)_fontWithDescriptor:(id)arg1 size:(double)arg2 textStyleForScaling:(id)arg3 pointSizeForScaling:(double)arg4 maximumPointSizeAfterScaling:(double)arg5 forIB:(bool)arg6 legibilityWeight:(long long)arg7;
+ (id)_fontWithName:(id)arg1 size:(double)arg2;
+ (bool)_isSupportedDynamicFontTextStyle:(id)arg1;
+ (id)_lightSystemFontOfSize:(double)arg1;
+ (id)_opticalBoldSystemFontOfSize:(double)arg1;
+ (id)_opticalSystemFontOfSize:(double)arg1;
+ (double)_pointSize:(double)arg1 scaledLikeTextStyle:(id)arg2 maximumPointSize:(double)arg3 compatibleWithTraitCollection:(id)arg4;
+ (double)_pointSize:(double)arg1 scaledLikeTextStyle:(id)arg2 maximumPointSize:(double)arg3 compatibleWithTraitCollection:(id)arg4 roundSize:(bool)arg5;
+ (id)_preferredFontForTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2;
+ (id)_preferredFontForTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 design:(id)arg3 weight:(double)arg4;
+ (id)_preferredFontForTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 weight:(double)arg3;
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 variant:(long long)arg3;
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 variant:(long long)arg3 compatibleWithTraitCollection:(id)arg4;
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 variant:(long long)arg3 maximumContentSizeCategory:(id)arg4 compatibleWithTraitCollection:(id)arg5;
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 variant:(long long)arg3 maximumContentSizeCategory:(id)arg4 compatibleWithTraitCollection:(id)arg5 pointSize:(double)arg6 pointSizeForScaling:(double)arg7;
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 weight:(double)arg3;
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 weight:(double)arg3 maximumContentSizeCategory:(id)arg4 compatibleWithTraitCollection:(id)arg5;
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 weight:(id)arg3 symbolicTraits:(unsigned int)arg4 maximumContentSizeCategory:(id)arg5 compatibleWithTraitCollection:(id)arg6 pointSize:(double)arg7 pointSizeForScaling:(double)arg8;
+ (id)_preferredFontForTextStyle:(id)arg1 maximumContentSizeCategory:(id)arg2;
+ (id)_preferredFontForTextStyle:(id)arg1 maximumContentSizeCategory:(id)arg2 compatibleWithTraitCollection:(id)arg3;
+ (id)_preferredFontForTextStyle:(id)arg1 maximumPointSize:(double)arg2 compatibleWithTraitCollection:(id)arg3;
+ (id)_preferredFontForTextStyle:(id)arg1 variant:(long long)arg2;
+ (id)_preferredFontForTextStyle:(id)arg1 variant:(long long)arg2 maximumContentSizeCategory:(id)arg3;
+ (id)_preferredFontForTextStyle:(id)arg1 weight:(double)arg2;
+ (double)_readableWidth;
+ (void)_setButtonFontSize:(double)arg1;
+ (void)_setLabelFontSize:(double)arg1;
+ (void)_setSmallSystemFontSize:(double)arg1;
+ (void)_setSystemFontSize:(double)arg1;
+ (id)_sharedFontCache;
+ (id)_sharedZeroPointFont;
+ (id)_supportedDynamicFontStyles;
+ (id)_systemFontOfSize:(double)arg1 width:(id)arg2 traits:(int)arg3;
+ (id)_systemFontsOfSize:(double)arg1 traits:(int)arg2;
+ (id)_thinSystemFontOfSize:(double)arg1;
+ (id)_ultraLightSystemFontOfSize:(double)arg1;
+ (id)boldSystemFontOfSize:(double)arg1;
+ (double)buttonFontSize;
+ (id)classFallbacksForKeyedArchiver;
+ (id)defaultFontForTextStyle:(id)arg1;
+ (id)familyNames;
+ (id)fontNamesForFamilyName:(id)arg1;
+ (id)fontWithDescriptor:(id)arg1 size:(double)arg2;
+ (id)fontWithFamilyName:(id)arg1 traits:(int)arg2 size:(double)arg3;
+ (id)fontWithMarkupDescription:(id)arg1;
+ (id)fontWithName:(id)arg1 size:(double)arg2;
+ (id)fontWithName:(id)arg1 size:(double)arg2 traits:(int)arg3;
+ (id)ib_preferredFontForTextStyle:(id)arg1;
+ (id)italicSystemFontOfSize:(double)arg1;
+ (double)labelFontSize;
+ (id)monospacedDigitSystemFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)monospacedSystemFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)preferredFontForTextStyle:(id)arg1;
+ (id)preferredFontForTextStyle:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)preferredFontForUsage:(id)arg1;
+ (id)preferredFontForUsage:(id)arg1 contentSizeCategoryName:(id)arg2;
+ (double)smallSystemFontSize;
+ (bool)supportsSecureCoding;
+ (id)systemFontOfSize:(double)arg1;
+ (id)systemFontOfSize:(double)arg1 traits:(int)arg2;
+ (id)systemFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)systemFontOfSize:(double)arg1 weight:(double)arg2 design:(id)arg3;
+ (id)systemFontOfSize:(double)arg1 weight:(double)arg2 width:(double)arg3;
+ (double)systemFontSize;
+ (id)userFontOfSize:(double)arg1;

- (struct __CTFont { }*)CTFont;
- (bool)__isSystemFont;
- (id)_alternateSystemFonts;
- (double)_ascenderDeltaForBehavior:(long long)arg1;
- (struct CGFont { }*)_backingCGSFont;
- (double)_baseLineHeightForFont:(bool)arg1;
- (double)_bodyLeading;
- (unsigned int)_defaultGlyphForChar:(unsigned short)arg1;
- (double)_defaultLineHeightForUILayout;
- (id)_familyName;
- (id)_fontAdjustedForContentSizeCategoryCompatibleWithTraitCollection:(id)arg1;
- (id)_fontAdjustedForCurrentContentSizeCategory;
- (id)_fontScaledByScaleFactor:(double)arg1;
- (id)_fontScaledLikeTextStyle:(id)arg1 maximumPointSize:(double)arg2 compatibleWithTraitCollection:(id)arg3 forIB:(bool)arg4;
- (bool)_getLatin1Glyphs:(const unsigned short**)arg1 advanceWidths:(const double**)arg2;
- (bool)_hasColorGlyphs;
- (bool)_isDefaultFace;
- (bool)_isHiraginoFont;
- (bool)_isTextStyleFont;
- (bool)_isUIFont;
- (id)_kernOverride;
- (double)_leading;
- (double)_scaledValueForValue:(double)arg1;
- (double)_scaledValueForValue:(double)arg1 useLanguageAwareScaling:(bool)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_textMatrixTransformForContext:(id)arg1;
- (id)_textStyle;
- (double)_totalAdvancementForNativeGlyphs:(const unsigned short*)arg1 count:(long long)arg2;
- (struct CGSize { double x1; double x2; })advancementForGlyph:(unsigned short)arg1;
- (void)applyToGraphicsContext:(id)arg1;
- (double)ascender;
- (id)bestMatchingFontForCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 attributes:(id)arg3 actualCoveredLength:(unsigned long long*)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectForFont;
- (double)capHeight;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coveredCharacterSet;
- (double)descender;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)familyName;
- (id)familyNameForCSSFontFamilyValueForWebKit:(bool)arg1;
- (id)fontDescriptor;
- (id)fontName;
- (id)fontWithSize:(double)arg1;
- (void)getAdvancements:(struct CGSize { double x1; double x2; }*)arg1 forCGGlyphs:(const unsigned short*)arg2 count:(unsigned long long)arg3;
- (void)getBoundingRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 forCGGlyphs:(const unsigned short*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)getCaretPositions:(double*)arg1 forGlyph:(unsigned int)arg2 maximumLength:(unsigned long long)arg3;
- (void)getVerticalOriginTranslations:(struct CGSize { double x1; double x2; }*)arg1 forCGGlyphs:(const unsigned short*)arg2 count:(unsigned long long)arg3;
- (unsigned short)glyphWithName:(id)arg1;
- (id)htmlMarkupDescription;
- (unsigned int)hyphenGlyphForLocale:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFamilyName:(id)arg1 traits:(int)arg2 size:(double)arg3;
- (id)initWithMarkupDescription:(id)arg1;
- (id)initWithName:(id)arg1 size:(double)arg2;
- (bool)isFixedPitch;
- (bool)isIBFontMetricsScaledFont;
- (bool)isIBTextStyleFont;
- (bool)isSystemFont;
- (bool)isVertical;
- (id)lastResortFont;
- (double)leading;
- (double)lineHeight;
- (id)markupDescription;
- (id)markupDescriptionForWebKit:(bool)arg1 pointSize:(float)arg2 sizeUnit:(id)arg3;
- (double)maximumPointSizeAfterScaling;
- (unsigned long long)mostCompatibleStringEncoding;
- (unsigned long long)numberOfGlyphs;
- (double)pointSize;
- (double)pointSizeForScaling;
- (double)readableWidth;
- (unsigned long long)renderingMode;
- (id)screenFontWithRenderingMode:(unsigned long long)arg1;
- (void)setInContext:(struct CGContext { }*)arg1;
- (id)textStyleForScaling;
- (int)traits;
- (double)underlinePosition;
- (double)underlineThickness;
- (id)verticalFont;
- (double)xHeight;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

+ (id)avkit_nonScalingFontWithTextStyle:(id)arg1 weight:(double)arg2;
+ (id)boldTimeFontOfSize:(double)arg1;
+ (id)italicTimeFontOfSize:(double)arg1;
+ (id)monospacedTimeFontOfSize:(double)arg1;
+ (id)timeFontOfSize:(double)arg1;
+ (id)timeFontWithFont:(id)arg1;
+ (id)timeFontWithName:(id)arg1 size:(double)arg2;

// Image: /System/Library/Frameworks/ClockKit.framework/ClockKit

+ (id)CLKMonospaceNumbersFeatureSettings;

- (id)CLKFontByApplyingFeatureSettings:(id)arg1;
- (id)CLKFontWithAlternativePunctuation;
- (id)CLKFontWithLocalizedLowerCaseSmallCaps;
- (id)CLKFontWithLocalizedSmallCaps;
- (id)CLKFontWithLooplessThaiFallback;
- (id)CLKFontWithMonospacedNumbers;
- (id)CLKFontWithRareLigaturesAndStylisticSet:(unsigned long long)arg1;
- (id)CLKFontWithStraightSix;
- (id)CLKFontWithStylisticSet:(unsigned long long)arg1;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (bool)_shouldUseDefaultFont;
+ (bool)ab_preferredContentSizeCategoryIsAccessibilityCategory;
+ (id)ab_preferredContentSizeCategoryName;
+ (id)ab_preferredFontForTextStyle:(id)arg1;
+ (id)ab_preferredRowFontForTextStyle:(id)arg1;
+ (void)ab_setIgnoreUserFontSize:(bool)arg1;
+ (id)cnui_bodyFont;
+ (id)cnui_footnoteFont;

- (id)ab_boldFont;
- (id)ab_italicFont;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

+ (id)ek_defaultOccurrencePrimaryTextFontForSizeClass:(long long)arg1;
+ (id)ek_defaultOccurrenceSecondaryTextFont;
+ (id)ek_defaultOccurrenceSmallPrimaryTextFontForSizeClass:(long long)arg1;

// Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI

+ (id)_inui_preferredFontForTextStyle:(id)arg1;

// Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation

- (id)_lp_CSSFontWeight;
- (long long)_lp_symbolWeight;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_contentSizeCategoryInTableViewCellWithContentSizeCategory:(id)arg1;
+ (bool)_mapkit_accessibilityTextEnabled;
+ (bool)_mapkit_ax3TextEnabled;
+ (id)_mapkit_preferredFontForTextStyle:(id)arg1 weight:(double)arg2 grade:(unsigned long long)arg3 contentSizeCategory:(id)arg4 symbolicTraits:(unsigned int)arg5;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)arg1;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)arg1 addingSymbolicTraits:(unsigned int)arg2;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)arg1 weight:(double)arg2;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)arg1 weight:(double)arg2 contentSizeCategory:(id)arg3 symbolicTraits:(unsigned int)arg4;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)arg1 weight:(double)arg2 grade:(unsigned long long)arg3;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)arg1 weight:(double)arg2 grade:(unsigned long long)arg3 contentSizeCategory:(id)arg4 symbolicTraits:(unsigned int)arg5;
+ (id)_mapkit_preferredFontForTextStyleTimeDisplayInTableViewCell:(id)arg1 addingSymbolicTraits:(unsigned int)arg2;
+ (id)_mapkit_preferredFontForTextStyleTimeDisplayInTableViewCell:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 useMonospace:(bool)arg3;

- (id)_mapkit_fontByAddingFeaturesForTabularFigures;
- (id)_mapkit_fontByAddingFeaturesForTimeDisplay;
- (id)_mapkit_fontByAddingFeaturesForTimeDisplayUseMonospace:(bool)arg1;
- (id)_mapkit_fontWithSymbolicTraits:(unsigned int)arg1;
- (id)_mapkit_fontWithWeight:(double)arg1;
- (double)_mapkit_lineHeight;
- (double)_mapkit_scaledValueForValue:(double)arg1;
- (double)_mapkit_scaledValueForValue:(double)arg1 scalingForMacIdiom:(bool)arg2 respectingTraitEnvironment:(id)arg3;
- (id)traitCollectionFromTraitEnvironment:(id)arg1;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (double)mf_defaultComposeFontPixelSize;
+ (id)mf_messageBodyFont;
+ (id)mf_messageHeaderSenderLabelFont;
+ (id)mf_messageHeaderSenderLabelFontForMailActionHeader;
+ (id)mf_messageHeaderSummaryLabelFont;
+ (id)mf_messageHeaderSummaryLabelFontForMailActionHeader;
+ (id)mf_messageHeaderTimestampLabelFont;

- (struct CGPoint { double x1; double x2; })mf_baselinePointFromCaplinePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })mf_baselinePointFromOriginPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })mf_caplinePointFromBaselinePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })mf_caplinePointFromOriginPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })mf_originPointFromBaselinePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })mf_originPointFromCaplinePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })mf_originPointFromMidlinePoint:(struct CGPoint { double x1; double x2; })arg1;

// Image: /System/Library/Frameworks/PDFKit.framework/PDFKit

- (id)convertToFitMaximumHeight:(double)arg1;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

+ (id)_sf_highLegibilityAlternateFont:(id)arg1;
+ (id)_sf_preferredFontForTextStyle:(id)arg1 attributes:(id)arg2;
+ (id)_sf_preferredFontForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2;
+ (id)_sf_preferredFontForTextStyle:(id)arg1 weight:(double)arg2 compatibleWithTraitCollection:(id)arg3;
+ (id)_sf_roundedSystemFontOfSize:(unsigned long long)arg1 weight:(double)arg2;

// Image: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents

+ (id)asc_fontDerivedFromTextStyle:(id)arg1 byApplyingFontWeight:(double)arg2 compatibleWithTraitCollection:(id)arg3;
+ (id)asc_preferredFontForTextStyle:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)asc_preferredFontForTextStyle:(id)arg1 withTraits:(unsigned int)arg2 compatibleWithTraitCollection:(id)arg3;

// Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI

+ (bool)_nui_isAccessibilityEnabled;

// Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI

+ (id)aa_fontForLargeButton;
+ (id)aa_fontForLargerInformationLabel;
+ (id)aa_fontForPageTitle;
+ (id)aa_fontForPrimaryInformationLabel;
+ (id)aa_messageFontForTraitCollection:(id)arg1;
+ (id)aa_titleFontForTraitCollection:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI

+ (id)ak_dynamicFontWithStyle:(id)arg1 traits:(unsigned int)arg2;
+ (id)ak_preferredFontForSize:(double)arg1 weight:(double)arg2;
+ (id)ak_preferredFontForStyle:(id)arg1 weight:(double)arg2;

// Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI

+ (id)bsui_defaultFontForTextStyle:(id)arg1 hiFontStyle:(long long)arg2;
+ (id)bsui_preferredFontForTextStyle:(id)arg1 hiFontStyle:(long long)arg2;
+ (id)bsui_preferredFontForTextStyle:(id)arg1 hiFontStyle:(long long)arg2 contentSizeCategory:(id)arg3;

// Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

+ (id)cuik_preferredBoldFontForTextStyle:(id)arg1;
+ (id)cuik_preferredFontForTextStyle:(id)arg1;

- (id)CUIKFontByApplyingFeatureSettings:(id)arg1;
- (id)CUIKFontWithAlternativePunctuation;
- (id)CUIKFontWithLocalizedSmallCaps:(bool)arg1;
- (double)cuik_scaledValueForValue:(double)arg1;

// Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit

+ (id)jfx_fontWithName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)__ck_emphasizedFontFromFont:(id)arg1;
+ (id)__ck_emphasizedPreferredFontForTextStyle:(id)arg1;
+ (id)__ck_fontForStyle:(id)arg1 weight:(double)arg2;
+ (id)__ck_monospacedPreferredFontForTextStyle:(id)arg1;
+ (id)__ck_preferredFontForStyle:(id)arg1 weight:(double)arg2;
+ (id)__ck_shortDefaultFontForTextStyle:(id)arg1;
+ (id)__ck_shortEmphasizedPreferredFontForTextStyle:(id)arg1;
+ (id)__ck_shortMonospacedPreferredFontForTextStyle:(id)arg1;
+ (id)__ck_shortPreferredFontForTextStyle:(id)arg1;
+ (id)__ck_shortPreferredFontForTextStyle:(id)arg1 size:(double)arg2;
+ (double)_interpolatedAdditionalFontSizeForMainScreen;
+ (id)ck_cui_cameraFontForContentSize:(id)arg1;
+ (id)ck_cui_cameraFontOfSize:(double)arg1;
+ (id)ck_cui_cameraKerningForFont:(id)arg1;
+ (id)ck_cui_cameraModeDialApproximateFontForContentSize:(id)arg1;
+ (id)ck_cui_cameraModeDialFontForContentSize:(id)arg1;
+ (id)ck_cui_cameraPadModeDialFontForContentSize:(id)arg1;
+ (id)ck_cui_cameraTimerFontForContentSize:(id)arg1;

- (id)__ck_fontScaledByUserPreference;
- (id)__ck_fontWithWeight:(double)arg1;

// Image: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI

- (double)_compass_scaledValueForValue:(double)arg1;

// Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI

- (struct CGPoint { double x1; double x2; })cn_baselinePointFromCaplinePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })cn_baselinePointFromOriginPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })cn_caplinePointFromBaselinePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })cn_caplinePointFromOriginPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })cn_originPointFromBaselinePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })cn_originPointFromCaplinePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })cn_originPointFromMidlinePoint:(struct CGPoint { double x1; double x2; })arg1;

// Image: /System/Library/PrivateFrameworks/CoverSheetKit.framework/CoverSheetKit

- (id)cs_cachedVariantWeight;
- (id)cs_fontWithVariantWeight:(unsigned long long)arg1;
- (void)cs_setCachedVariantWeight:(id)arg1;
- (bool)cs_supportsVariantWeights;
- (unsigned long long)cs_variantWeight;
- (struct CSVariantWeightRange { unsigned long long x1; unsigned long long x2; })cs_variantWeightRange;

// Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera

+ (id)dc_preferredFontForTextStyle:(id)arg1 adjustedForDefaultSize:(double)arg2;
+ (id)dc_preferredFontForTextStyle:(id)arg1 adjustedForDefaultSize:(double)arg2 maxSize:(double)arg3;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

+ (id)_fiui_nonBoldedVersionOfFont:(id)arg1 size:(double)arg2;
+ (id)_fu_sausageFontOfSize:(double)arg1 fontWeight:(double)arg2;
+ (id)_fu_sausageFontOfSize:(double)arg1 fontWeight:(double)arg2 centeredColons:(bool)arg3;
+ (id)fiui_nonBoldingRoundedSystemFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)fiui_nonBoldingSystemFontOfSize:(double)arg1;
+ (id)fiui_nonBoldingSystemFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)fu_alternateColonsFeatureSetting;
+ (id)fu_bodyEmphasizeFont;
+ (id)fu_bodyShortFont;
+ (id)fu_boldSausageFontOfSize:(double)arg1;
+ (id)fu_fontByApplyingFeatureSettings:(id)arg1 toFont:(id)arg2;
+ (id)fu_heavySausageFontOfSize:(double)arg1;
+ (id)fu_lightSausageFontOfSize:(double)arg1;
+ (id)fu_lightSausageFontOfSize:(double)arg1 centeredColons:(bool)arg2;
+ (id)fu_mediumFontOfSize:(double)arg1;
+ (id)fu_mediumFontOfSize:(double)arg1 centeredColons:(bool)arg2;
+ (id)fu_mediumSausageFontOfSize:(double)arg1;
+ (id)fu_sausageFontOfSize:(double)arg1;
+ (id)fu_sausageFontOfSize:(double)arg1 centeredColons:(bool)arg2;
+ (id)fu_semiboldSausageFontOfSize:(double)arg1;
+ (id)fu_systemFontOfSize:(double)arg1 centeredColons:(bool)arg2;

- (id)fu_fontWithCenteredColons;
- (id)fu_fontWithSize:(double)arg1;
- (id)fu_fontWithSizeFittingString:(id)arg1 withinWidth:(double)arg2;
- (id)fu_fontWithSizeFittingString:(id)arg1 withinWidth:(double)arg2 accountForGlyphOffset:(bool)arg3;
- (id)fu_fontWithStraightSidedNumbers;
- (id)fu_monospacedFont;
- (id)fu_shortSlashFont;
- (id)fu_smallCapsFont;

// Image: /System/Library/PrivateFrameworks/FocusUI.framework/FocusUI

+ (id)fcui_excessiveLineHeightChars;
+ (double)fcui_exuberatedValueForValue:(double)arg1;

- (double)fcui_drawingHeightForText:(id)arg1 withNumberOfLines:(unsigned long long)arg2 additionalPadding:(double)arg3;
- (double)fcui_effectiveLineHeightForText:(id)arg1;
- (double)fcui_effectiveScaledValueForValue:(double)arg1 hasExuberatedLineHeight:(bool)arg2;
- (bool)fcui_hasExuberatedLineHeight;
- (bool)fcui_hasExuberatedLineHeightForText:(id)arg1;
- (double)fcui_measuringHeightForText:(id)arg1 withNumberOfLines:(unsigned long long)arg2;
- (unsigned long long)fcui_numberOfLinesForText:(id)arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 maximum:(unsigned long long)arg3 drawingContext:(inout id)arg4;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (id)_gkPreferredFontForTextStyle:(id)arg1 design:(id)arg2;
+ (id)_gkPreferredFontForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)_hk_compactFontOfStyle:(id)arg1 weight:(double)arg2 rounded:(bool)arg3;
+ (id)hk_chartActivityValueFont;
+ (id)hk_chartAxisLabelFont;
+ (id)hk_chartCurrentValueDateFont;
+ (id)hk_chartCurrentValueKindFont;
+ (id)hk_chartCurrentValueUnitFont;
+ (id)hk_chartCurrentValueValueFont;
+ (id)hk_chartLollipopKeyFont;
+ (id)hk_chartLollipopValueFont;
+ (id)hk_chartLollipopValueFontSmaller;
+ (id)hk_chartOverlaySectionHeaderAccessoryButtonFont;
+ (id)hk_chartOverlaySectionHeaderFont;
+ (id)hk_chartOverlaySectionItemTitleFont;
+ (id)hk_chartOverlaySectionItemValueAndUnitFont;
+ (id)hk_chrValueCellPrimaryFont;
+ (id)hk_compactFontOfSize:(double)arg1;
+ (id)hk_compactFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)hk_compactFontOfStyle:(id)arg1 weight:(double)arg2;
+ (id)hk_compactRoundedFontOfSize:(double)arg1;
+ (id)hk_compactRoundedFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)hk_compactRoundedFontOfStyle:(id)arg1 weight:(double)arg2;
+ (id)hk_defaultFontWithUIFontTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2 attributes:(id)arg3;
+ (double)hk_fittingScaleFactorForUILabels:(id)arg1 constrainingWidth:(double)arg2;
+ (id)hk_preferredFontForTextStyle:(id)arg1;
+ (id)hk_preferredFontForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2;
+ (id)hk_preferredFontForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2 maximumContentSizeCategory:(id)arg3;
+ (id)hk_preferredFontIgnoringAccessibilitySizeForTextStyle:(id)arg1;
+ (id)hk_preferredFontIgnoringAccessibilitySizeForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2;
+ (id)hk_preferredRoundedFontForTextStyle:(id)arg1;
+ (id)hk_preferredRoundedFontForTextStyle:(id)arg1 additionalSymbolicTraits:(unsigned int)arg2;
+ (id)hk_roundedSystemFontWithSize:(double)arg1 weight:(double)arg2;
+ (id)hk_roundedSystemFontWithSize:(double)arg1 weight:(double)arg2 textStyle:(id)arg3;
+ (id)hk_scalableFontForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2;
+ (id)hk_staticPreferredFontForTextStyle:(id)arg1;
+ (id)hk_staticPreferredFontForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2;
+ (id)hk_titleLabelFontScaledBy:(double)arg1;
+ (id)hk_unitLabelFontScaledBy:(double)arg1;

- (id)_hk_fontByModifyingSymbolicTraits:(id /* block */)arg1;
- (id)hk_fontByAddingSymbolicTraits:(unsigned int)arg1;
- (id)hk_fontByRemovingSymbolicTraits:(unsigned int)arg1;
- (id)hk_monospacedFont;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (double)MPU_scaledValueForValue:(double)arg1;

// Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI

+ (id)MCUIBoldTitleFontWithSize:(double)arg1;

// Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI

+ (id)_mapsui_preferredFontForTextStyle:(id)arg1 maxContentSizeCategory:(id)arg2 weight:(double)arg3 withSymbolicTraits:(unsigned int)arg4;

// Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls

+ (id)mru_ambientSubtitleFont;
+ (id)mru_ambientTimeFont;
+ (id)mru_ambientTitleFont;
+ (id)mru_buttonFont;
+ (id)mru_controlCenterSubtitleFont;
+ (id)mru_controlCenterTitleFont;
+ (id)mru_expandedRouteFont;
+ (id)mru_expandedSubtitleFont;
+ (id)mru_expandedTitleFont;
+ (id)mru_routeFont;
+ (id)mru_routingHeaderFont;
+ (id)mru_routingSubtitleFont;
+ (id)mru_routingTitleFont;
+ (id)mru_subtitleFont;
+ (id)mru_suggestedRouteActivitySubtitleFont;
+ (id)mru_suggestedRouteActivityTitleFont;
+ (id)mru_suggestedRouteBannerSubtitleFont;
+ (id)mru_suggestedRouteBannerTitleFont;
+ (id)mru_suggestionsSubtitleFont;
+ (id)mru_suggestionsTitleFont;
+ (id)mru_timeFont;
+ (id)mru_titleFont;
+ (id)mru_volumeButtonSubtitleFont;
+ (id)mru_volumeButtonTitleFont;
+ (id)mru_volumeTitleFont;

// Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI

+ (id)mtui_defaultTimeDesignatorFont;
+ (double)mtui_defaultTimeDesignatorFontSize;
+ (double)mtui_defaultTimeFontSize;
+ (id)mtui_lightTimeFont;
+ (id)mtui_lightTimeFontOfSize:(double)arg1;
+ (id)mtui_thinTimeFont;
+ (id)mtui_thinTimeFontOfSize:(double)arg1;

- (id)mtui_fontByAddingAttributes:(unsigned long long)arg1;
- (id)mtui_fontByAddingTimeFontAttributes;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI

+ (id)naui_ultraLightMonospacedFontOfSize:(double)arg1;

- (id)naui_dynamicFontTextStyleDescriptor;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)ic_attachmentBrowserSeeAllButtonFont;
+ (id)ic_attachmentBrowserTitleFont;
+ (id)ic_fontDescriptorForBodyTextWithContentSizeCategory:(id)arg1 useSingleLineA:(bool)arg2 bold:(bool)arg3;
+ (double)ic_fontSizeForHeaderImport;
+ (double)ic_fontSizeForSubheaderImport;
+ (id)ic_gridViewFolderFont;
+ (id)ic_gridViewNoteSubtitleFont;
+ (id)ic_gridViewNoteTitleFont;
+ (id)ic_gridViewSectionTitleFont;
+ (id)ic_groupInsetHeaderFont;
+ (id)ic_listViewDetailFont;
+ (id)ic_listViewTitleFont;
+ (id)ic_navBarButtonFontUsingSingleLineA:(bool)arg1;
+ (double)ic_pointSizeForBodyTextWithContentSizeCategory:(id)arg1;
+ (double)ic_pointSizeForTextStyle:(id)arg1 contentSizeCategory:(id)arg2;
+ (id)ic_preferredFontForBodyText;
+ (id)ic_preferredFontForBodyTextWithContentSizeCategory:(id)arg1;
+ (id)ic_preferredFontForBodyTextWithContentSizeCategory:(id)arg1 isForPrint:(bool)arg2;
+ (id)ic_preferredFontForBodyTextWithContentSizeCategory:(id)arg1 useSingleLineA:(bool)arg2;
+ (id)ic_preferredFontForBodyTextWithMaximumContentSizeCategory:(id)arg1;
+ (id)ic_preferredFontForCompatibilityBannerText;
+ (id)ic_preferredFontForDateText;
+ (id)ic_preferredFontForDateTextWithZoomFactor:(double)arg1;
+ (id)ic_preferredFontForFixedWidthText;
+ (id)ic_preferredFontForFixedWidthTextWithContentSizeCategory:(id)arg1;
+ (id)ic_preferredFontForHeadingText;
+ (id)ic_preferredFontForHeadingTextWithContentSizeCategory:(id)arg1;
+ (id)ic_preferredFontForHeadingTextWithContentSizeCategory:(id)arg1 isForPrint:(bool)arg2;
+ (id)ic_preferredFontForStyle:(unsigned int)arg1 contentSizeCategory:(id)arg2 isForPrint:(bool)arg3;
+ (id)ic_preferredFontForStyle:(id)arg1 symbolicTraits:(unsigned int)arg2;
+ (id)ic_preferredFontForStyle:(id)arg1 symbolicTraits:(unsigned int)arg2 maxContentSizeCategory:(id)arg3;
+ (id)ic_preferredFontForStyle:(id)arg1 withFontWeight:(double)arg2;
+ (id)ic_preferredFontForStyle:(id)arg1 withFontWeight:(double)arg2 maxContentSizeCategory:(id)arg3;
+ (id)ic_preferredFontForSubheadingText;
+ (id)ic_preferredFontForSubheadingTextWithContentSizeCategory:(id)arg1;
+ (id)ic_preferredFontForSubheadingTextWithContentSizeCategory:(id)arg1 isForPrint:(bool)arg2;
+ (id)ic_preferredFontForTextStyle:(id)arg1 adjustedForDefaultSize:(double)arg2;
+ (id)ic_preferredFontForTextStyle:(id)arg1 adjustedForDefaultSize:(double)arg2 maxSize:(double)arg3;
+ (id)ic_preferredFontForTextStyle:(id)arg1 maxContentSizeCategory:(id)arg2;
+ (id)ic_preferredFontForTitleText;
+ (id)ic_preferredFontForTitleTextWithContentSizeCategory:(id)arg1;
+ (id)ic_preferredFontForTitleTextWithContentSizeCategory:(id)arg1 isForPrint:(bool)arg2;
+ (double)ic_preferredFontSizeWithBaseSize:(double)arg1 withContentSizeCategory:(id)arg2 minSize:(double)arg3 maxSize:(double)arg4;
+ (id)ic_preferredSingleLineAFontForTextStyle:(id)arg1;
+ (id)ic_preferredSystemFontWithBaseSize:(double)arg1 withContentSizeCategory:(id)arg2 minSize:(double)arg3;
+ (id)ic_recentlyDeletedHeaderFont;

- (id)ic_fontByAddingSymbolicTraits:(unsigned int)arg1;
- (id)ic_fontConvertedToSize:(double)arg1;
- (bool)ic_fontHasSingleLineA;
- (id)ic_fontWithRoundedDesign;
- (id)ic_fontWithSingleLineA;
- (id)ic_fontWithSize:(double)arg1;
- (id)ic_fontWithSymbolicBoldTrait;
- (id)ic_fontWithTabularNumbers;
- (id)ic_fontWithoutSingleLineA;
- (bool)ic_hasSymbolicBoldTrait;
- (bool)ic_hasSymbolicItalicTrait;
- (bool)ic_hasSymbolicTrait:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation

+ (bool)pk_loadFontWithFileName:(id)arg1;
+ (bool)pk_loadPeerPaymentCashFont;
+ (bool)pk_loadTextCondensedMediumCashFont;
+ (bool)pk_loadTextCondensedRegularCashFont;
+ (bool)pk_loadTextCondensedSemiboldCashFont;
+ (id)pk_peerPaymentCashFontOfSize:(double)arg1;
+ (id)pk_peerPaymentChiseledCashFontOfSize:(double)arg1;
+ (id)pk_textCondensedMediumCashFontOfSize:(double)arg1;
+ (id)pk_textCondensedRegularCashFontOfSize:(double)arg1;
+ (id)pk_textCondensedSemiboldCashFontOfSize:(double)arg1;

- (id)pk_fixedWidthFont;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_defaultFontForTextStyle:(id)arg1 withSymbolicTraits:(unsigned int)arg2;
+ (id)px_preferredFontForTextStyle:(id)arg1 contentSizeCategory:(id)arg2 withSymbolicTraits:(unsigned int)arg3;
+ (id)px_preferredFontForTextStyle:(id)arg1 maxContentSizeCategory:(id)arg2 withSymbolicTraits:(unsigned int)arg3;
+ (id)px_preferredFontForTextStyle:(id)arg1 withSymbolicTraits:(unsigned int)arg2 options:(unsigned long long)arg3;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

+ (double)pu_scaledValue:(double)arg1 usingFontOfAttributedString:(id)arg2;

- (id)pu_fontWithMonospacedNumbers;

// Image: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI

- (double)MTMPU_scaledValueForValue:(double)arg1;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

+ (id)pr_defaultTimeFont;
+ (id)pr_defaultTimeFontForRole:(id)arg1;
+ (id)pr_defaultTimeFontIdentifier;
+ (id)pr_defaultTimeFontIdentifierForRole:(id)arg1;
+ (id)pr_fontWithName:(id)arg1 forRole:(id)arg2 includingFallbackFonts:(bool)arg3;
+ (id)pr_fontWithPostScriptName:(id)arg1 inBundle:(id)arg2 relativePath:(id)arg3;
+ (id)pr_fontWithPostScriptName:(id)arg1 inBundleAtURL:(id)arg2 relativePath:(id)arg3;
+ (id)pr_fontWithPostScriptName:(id)arg1 inBundleWithIdentifier:(id)arg2 relativePath:(id)arg3;
+ (id)pr_fontWithTimeFontIdentifier:(id)arg1;
+ (id)pr_fontWithTimeFontIdentifier:(id)arg1 forRole:(id)arg2;
+ (id)pr_fontWithTimeFontIdentifier:(id)arg1 forRole:(id)arg2 includingFallbackFonts:(bool)arg3;
+ (id)pr_replacementFallbackFontNamesForRole:(id)arg1;

- (id)pr_cachedVariantWeight;
- (id)pr_defaultFontFallbacks;
- (id)pr_fontFallbacks;
- (id)pr_fontWithDefaultFallbacksForRole:(id)arg1;
- (id)pr_fontWithFallbacks:(id)arg1;
- (id)pr_fontWithFallbacks:(id)arg1 beforeFontContainingName:(id)arg2;
- (id)pr_fontWithVariantWeight:(unsigned long long)arg1 forRole:(id)arg2;
- (bool)pr_isReferenceFileContainedInBundle:(id)arg1;
- (bool)pr_isReferenceFileContainedInDirectoryAtURL:(id)arg1;
- (id)pr_localizedTimeFontName;
- (id)pr_maximumAllowedFontWeightFont;
- (id)pr_minimumAllowedFontWeightFont;
- (id)pr_postScriptName;
- (id)pr_referencePathRelativeToBundle:(id)arg1;
- (id)pr_referencePathRelativeToDirectoryAtURL:(id)arg1;
- (id)pr_referenceURL;
- (id)pr_replaceFallbackFontNames:(id)arg1;
- (void)pr_setCachedVariantWeight:(id)arg1;
- (id)pr_timeFontIdentifier;
- (unsigned long long)pr_variantWeight;
- (struct PRVariantWeightRange { unsigned long long x1; unsigned long long x2; })pr_variantWeightRange;

// Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo

+ (id)pv_fontWithName:(id)arg1 size:(double)arg2 transform:(const struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg3;

// Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI

+ (id)st_fontWithStyle:(id)arg1 traits:(unsigned int)arg2;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

+ (id)_smu_preferredFontForTextStyle:(id)arg1 design:(long long)arg2 variant:(long long)arg3 maximumContentSizeCategory:(id)arg4 compatibleWithTraitCollection:(id)arg5;
+ (id)_smu_preferredFontForTextStyle:(id)arg1 maximumContentSizeCategory:(id)arg2 compatibleWithTraitCollection:(id)arg3;
+ (id)_smu_preferredFontForTextStyle:(id)arg1 variant:(long long)arg2 maximumContentSizeCategory:(id)arg3 compatibleWithTraitCollection:(id)arg4;
+ (id)_stringForSystemDesign:(long long)arg1;
+ (long long)_underlyingVariantForVariant:(long long)arg1;
+ (id)smu_preferredFontForTextStyle:(id)arg1 design:(long long)arg2 variant:(long long)arg3;
+ (id)smu_preferredFontForTextStyle:(id)arg1 design:(long long)arg2 variant:(long long)arg3 compatibleWithTraitCollection:(id)arg4;
+ (id)smu_preferredFontForTextStyle:(id)arg1 variant:(long long)arg2;

- (double)smu_bodyLeading;
- (double)smu_scaledValueForValue:(double)arg1;

// Image: /System/Library/PrivateFrameworks/SiriSharedUI.framework/SiriSharedUI

+ (id)sirisharedui_boldWeightFontWithSize:(double)arg1;
+ (id)sirisharedui_dynamicBodyFont;
+ (id)sirisharedui_dynamicHeaderFont;
+ (id)sirisharedui_dynamicLightWeightBodySizeFont;
+ (id)sirisharedui_dynamicLightWeightBodySubtextSizeFont;
+ (id)sirisharedui_dynamicMediumWeightBodySizeFont;
+ (id)sirisharedui_dynamicMediumWeightBodySubtextSizeFont;
+ (id)sirisharedui_dynamicThinWeightBodySizeFont;
+ (id)sirisharedui_dynamicThinWeightBodySubtextSizeFont;
+ (id)sirisharedui_dynamicTitle0Font;
+ (id)sirisharedui_headerFont;
+ (id)sirisharedui_largeHeaderFontWithSize:(double)arg1;
+ (id)sirisharedui_lightWeightBodySizeFont;
+ (id)sirisharedui_lightWeightBodySubtextSizeFont;
+ (id)sirisharedui_lightWeightFontWithSize:(double)arg1;
+ (id)sirisharedui_mediumWeightBodySizeFont;
+ (id)sirisharedui_mediumWeightBodySubtextSizeFont;
+ (id)sirisharedui_mediumWeightFontWithSize:(double)arg1;
+ (float)sirisharedui_preferredDynamicBodySize;
+ (float)sirisharedui_preferredDynamicBodySubtextSize;
+ (id)sirisharedui_ratingFont;
+ (id)sirisharedui_regularWeightFontWithSize:(double)arg1;
+ (id)sirisharedui_semiboldWeightFontWithSize:(double)arg1;
+ (id)sirisharedui_serverTipFont;
+ (id)sirisharedui_serverTipPrefixFont;
+ (id)sirisharedui_serverUtteranceCorrectionPromptFont;
+ (id)sirisharedui_serverUtteranceFont;
+ (id)sirisharedui_subtitleFont;
+ (id)sirisharedui_thinWeightBodySizeFont;
+ (id)sirisharedui_thinWeightBodySubtextSizeFont;
+ (id)sirisharedui_thinWeightFontWithSize:(double)arg1;
+ (id)sirisharedui_typedTextInputFont;
+ (id)sirisharedui_userUtteranceFont;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

+ (id)siriUI_dynamicSubHeadlineEmphasizedSizeFont;
+ (id)siriUI_dynamicSubHeadlineMediumSizeFont;
+ (id)siriui_dynamicBodyFont;
+ (id)siriui_dynamicHeaderFont;
+ (id)siriui_dynamicLightWeightBodySizeFont;
+ (id)siriui_dynamicLightWeightBodySubtextSizeFont;
+ (id)siriui_dynamicMediumWeightBodySizeFont;
+ (id)siriui_dynamicMediumWeightBodySubtextSizeFont;
+ (id)siriui_dynamicThinWeightBodySizeFont;
+ (id)siriui_dynamicThinWeightBodySubtextSizeFont;
+ (id)siriui_dynamicTitle0Font;
+ (id)siriui_headerFont;
+ (id)siriui_largeHeaderFontWithSize:(double)arg1;
+ (id)siriui_lightWeightBodySizeFont;
+ (id)siriui_lightWeightBodySubtextSizeFont;
+ (id)siriui_lightWeightFontWithSize:(double)arg1;
+ (id)siriui_mediumWeightBodySizeFont;
+ (id)siriui_mediumWeightBodySubtextSizeFont;
+ (id)siriui_mediumWeightFontWithSize:(double)arg1;
+ (float)siriui_preferredDynamicBodySize;
+ (float)siriui_preferredDynamicBodySubtextSize;
+ (id)siriui_ratingFont;
+ (id)siriui_serverTipFont;
+ (id)siriui_serverTipPrefixFont;
+ (id)siriui_serverUtteranceCorrectionPromptFont;
+ (id)siriui_serverUtteranceFont;
+ (id)siriui_subtitleFont;
+ (id)siriui_thinWeightBodySizeFont;
+ (id)siriui_thinWeightBodySubtextSizeFont;
+ (id)siriui_thinWeightFontWithSize:(double)arg1;
+ (id)siriui_typedTextInputFont;
+ (id)siriui_userUtteranceFont;

// Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices

+ (id)sbui_systemAperturePreferredFontForTextStyle:(long long)arg1;
+ (id)sbui_systemAperturePreferredFontForTextStyle:(long long)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)sbui_systemAperturePreferredTextButtonFont;
+ (id)sbui_systemAperturePreferredTextButtonFontCompatibleWithTraitCollection:(id)arg1;

// Image: /System/Library/PrivateFrameworks/StocksUI.framework/StocksUI

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })su_languageAwareOutsetsAtScale:(double)arg1;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

+ (id)tv_fontFromTextStyle:(id)arg1 fontWeight:(id)arg2 fontSize:(double)arg3 symbolicTraits:(unsigned int)arg4;

// Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI

+ (id)ts_preferredFontForTextStyle:(unsigned long long)arg1;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })ts_boundingBoxForString:(id)arg1;
- (double)ts_tightenedLineSpacingForString:(id)arg1;
- (double)ts_tightenedLineSpacingForString:(id)arg1 minimumLineSpacingMultiple:(double)arg2;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

+ (id)telephonyUIBodyShortEmphasizedFont;
+ (id)telephonyUIBodyShortFont;
+ (id)telephonyUIBodyShortItalicFont;
+ (id)telephonyUIFontWithDescriptor:(id)arg1;
+ (id)telephonyUIFootnoteShortFont;
+ (id)telephonyUISubheadlineShortEmphasizedFont;
+ (id)telephonyUISubheadlineShortFont;
+ (id)telephonyUISubheadlineShortSemiboldFont;

- (id)telephonyUIFontByAddingCaseSensitiveLayoutEnabledAttribute;

// Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore

- (double)tf_computeFittedLineHeight;
- (double)tf_estimatedFirstBaseline;

// Image: /System/Library/PrivateFrameworks/TipsUI.framework/TipsUI

+ (id)TPSFontTallScript;
+ (id)TPSFontTallScriptSpecialCaseLanguageCodeTallScript;
+ (id)tps_fontWithSize:(double)arg1 weight:(double)arg2 languageCode:(id)arg3;
+ (id)tps_preferredFontForTextStyle:(id)arg1 symoblicTraits:(unsigned int)arg2 languageCode:(id)arg3;
+ (id)tps_preferredFontForTextStyle:(id)arg1 symoblicTraits:(unsigned int)arg2 weight:(double)arg3 size:(double)arg4 languageCode:(id)arg5;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_normalizedContentSizeCategory:(id)arg1 default:(bool)arg2;
+ (id)_preferredContentSizeCategory:(unsigned long long)arg1;
+ (void)_setDefaultFontSizesForUserInterfaceIdiom:(long long)arg1;
+ (double)defaultFontSize;
+ (id)layoutMetrics;
+ (id)preferredContentSizeCategory;
+ (void)registerLayoutMetrics:(Class)arg1;
+ (double)systemMinimumFontSize;

- (unsigned short)_bulletGlyph;
- (unsigned short)_bulletGlyphWithOriginalFont:(id)arg1 fontForBulletRendering:(id*)arg2;
- (id)_cachedVariantWeight;
- (id)_fontWithVariantWeight:(unsigned long long)arg1;
- (void)_setCachedVariantWeight:(id)arg1;
- (id)_ui_bulletStringWithFont:(id*)arg1;
- (unsigned long long)_variantWeight;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

+ (id)unui_excessiveLineHeightChars;
+ (double)unui_exuberatedValueForValue:(double)arg1;

- (double)unui_drawingHeightForText:(id)arg1 withNumberOfLines:(unsigned long long)arg2 additionalPadding:(double)arg3;
- (double)unui_effectiveLineHeightForText:(id)arg1;
- (double)unui_effectiveScaledValueForValue:(double)arg1 hasExuberatedLineHeight:(bool)arg2;
- (bool)unui_hasExuberatedLineHeight;
- (bool)unui_hasExuberatedLineHeightForText:(id)arg1;
- (double)unui_measuringHeightForText:(id)arg1 withNumberOfLines:(unsigned long long)arg2;
- (unsigned long long)unui_numberOfLinesForText:(id)arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 maximum:(unsigned long long)arg3 drawingContext:(inout id)arg4;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

+ (id)_fontFromTextStyle:(long long)arg1 maximumContentSizeCategory:(id)arg2 fontWeight:(long long)arg3 fontSize:(double)arg4 symbolicTraits:(unsigned int)arg5 fontFeature:(long long)arg6;
+ (id)_uiFontAttributesForFeature:(long long)arg1;
+ (id)uiFontTextStyleFromTextStyle:(long long)arg1;
+ (id)uifontWeightFromFontWeight:(long long)arg1;
+ (id)vui_fontFromTextLayout:(id)arg1;
+ (id)vui_fontFromTextStyle:(long long)arg1 fontWeight:(long long)arg2 fontSize:(double)arg3 symbolicTraits:(unsigned int)arg4;

- (double)baselineHeight;
- (double)bottomMarginWithBaselineMargin:(double)arg1 traitCollection:(id)arg2;
- (double)topMarginToFont:(id)arg1 withBaselineMargin:(double)arg2 traitCollection:(id)arg3;
- (double)topMarginWithBaselineMargin:(double)arg1 traitCollection:(id)arg2;

// Image: /System/Library/PrivateFrameworks/Weather.framework/Weather

- (id)wa_bold;

// Image: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI

+ (bool)wu_systemUsesExuberatedLineHeight;

- (double)wu_scaledValueForValue:(double)arg1;
- (bool)wu_usesExuberatedLineHeight;

// Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI

+ (id)preferredFontForStyle:(id)arg1 weight:(double)arg2;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

+ (id)chicletDescriptionFont;
+ (id)chicletTitleFont;
+ (id)galleryCardDescriptionFont;
+ (id)galleryCollectionSeeAllButtonFont;
+ (id)galleryCollectionSubtitleFont;
+ (id)galleryCollectionTitleFont;
+ (id)gallerySearchCollectionSubtitleFont;
+ (id)gallerySearchCollectionTitleFont;
+ (id)gallerySearchSectionHeaderButtonFont;
+ (id)gallerySearchSectionHeaderFont;
+ (id)gallerySuggestionTextFont;
+ (id)galleryWorkflowDescriptionFont;
+ (id)galleryWorkflowNameFont;
+ (id)setupFlowButtonFont;
+ (id)setupFlowFieldFont;
+ (id)workflowsFooterFont;

- (double)wf_bodyLeading;
- (double)wf_scaledValueForValue:(double)arg1 baseFont:(id)arg2;

// Image: /System/Library/PrivateFrameworks/WorkflowUICore.framework/WorkflowUICore

- (double)wf_lineHeight;

@end
