
@interface UIColor : NSObject <LPCSSText, LPHTMLAttributeText, NSCopying, NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, TSDPathPainter, UIColorJSExports, UIItemProviderReading, UIItemProviderWriting> {
    NSString * _cachedStyleString;
    NSString * _systemColorName;
}

@property (nonatomic, readonly) struct CGColor { }*CGColor;
@property (nonatomic, readonly) id CGColorRef;
@property (nonatomic, readonly) CIColor *CIColor;
@property (nonatomic, readonly) bool PG_wantsVibrancyEffect;
@property (nonatomic, readonly) bool SBPIP_wantsVibrancyEffect;
@property (nonatomic, readonly) NSString *_accessibilityNameWithLuma;
@property (setter=_icaxSetCachedApproximateColorDescription:, nonatomic, retain) NSString *_icaxCachedApproximateColorDescription;
@property (setter=_pkaxSetCachedApproximateColorDescription:, nonatomic, retain) NSString *_pkaxCachedApproximateColorDescription;
@property (nonatomic, readonly) NSString *accessibilityName;
@property (nonatomic, readonly) double alphaComponent;
@property (getter=ams_isDark, nonatomic, readonly) bool ams_dark;
@property (getter=ams_isLight, nonatomic, readonly) bool ams_light;
@property (nonatomic, readonly) double ams_luminance;
@property (nonatomic, readonly, copy) UIColor *asc_highlightedColor;
@property (nonatomic, readonly) double brightness;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double defaultBrightnessAdjustment;
@property (readonly, copy) NSString *description;
@property (getter=_isDynamic, nonatomic, readonly) bool dynamic;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *ic_colorString;
@property (nonatomic, readonly) bool ic_isBlack;
@property (nonatomic, readonly) bool ic_isWhite;
@property (nonatomic, readonly, copy) UIColor *ic_resolvedColor;
@property (nonatomic, readonly, copy) UIColor *ic_resolvedColorForLightUserInterfaceStyle;
@property (nonatomic, readonly, copy) UIColor *ic_resolvedColorForNoteEditor;
@property (nonatomic, readonly) NSString *icaxApproximateColorDescription;
@property (nonatomic, readonly) NSString *icaxDescriptionWithLuma;
@property (nonatomic, readonly) double icaxLuma;
@property (nonatomic, readonly, copy) UIColor *invert;
@property (getter=_isDynamicTintColor, nonatomic, readonly) bool isDynamicTintColor;
@property (nonatomic, readonly) NSString *pkaxApproximateColorDescription;
@property (nonatomic, readonly) NSString *pkaxDescriptionWithLuma;
@property (nonatomic, readonly) double pkaxLuma;
@property (nonatomic, readonly, copy) NSData *safari_colorDataForSerialization;
@property (nonatomic, readonly) double safari_grayscaleComponent;
@property (nonatomic, readonly) bool safari_isOffWhite;
@property (nonatomic, readonly) double safari_luminance;
@property (nonatomic, readonly) bool safari_meetsThresholdForDarkAppearance;
@property (nonatomic, readonly, copy) NSArray *safari_rgbColorComponents;
@property (nonatomic, readonly) UIColor *safari_sRGBColor;
@property (nonatomic, readonly) double safari_saturation;
@property (nonatomic, readonly, copy) NSString *sb_RGBHexString;
@property (nonatomic, readonly) double sbh_colorfulness;
@property (nonatomic, readonly) UIColor *sf_darkenedColor;
@property (nonatomic, readonly) bool sf_isDarkColor;
@property (readonly) Class superclass;
@property (getter=_systemColorName, setter=_setSystemColorName:, nonatomic, retain) NSString *systemColorName;
@property (nonatomic, readonly) NSString *ttriAccessibilityColorDescription;
@property (nonatomic, readonly) UIColor *undynamicColor;
@property (nonatomic, readonly) UIColor *vk_colorWith20PercentOpacity;
@property (nonatomic, readonly) UIColor *vk_colorWith40PercentOpacity;
@property (nonatomic, readonly) UIColor *vk_colorWith60PercentOpacity;
@property (nonatomic, readonly) UIColor *vk_colorWith80PercentOpacity;
@property (nonatomic, readonly) UIColor *vk_colorWithMaxSaturation;
@property (nonatomic, readonly, copy) UIColor *vk_resolvedColor;
@property (nonatomic, readonly, copy) NSString *wk_colorHexString;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)__darkSystemColorForColor:(id)arg1;
+ (id)__halfTransparentBlackColor;
+ (id)__halfTransparentWhiteColor;
+ (id)__tintColor;
+ (id)_accessibilityButtonShapesBackgroundColorOnDark;
+ (id)_accessibilityButtonShapesBackgroundColorOnLight;
+ (id)_accessibilityButtonShapesDisabledBackgroundColorOnDark;
+ (id)_accessibilityButtonShapesNoBlendModeBackgroundColorOnDark;
+ (id)_accessibilityButtonShapesNoBlendModeBackgroundColorOnLight;
+ (id)_accessibilityDarkenedColorForColor:(id)arg1;
+ (id)_accessibilityLightenedColorForColor:(id)arg1;
+ (id)_alertControllerDimmingViewColor;
+ (id)_alternateSystemInteractionTintColor;
+ (id)_apiColorNames;
+ (id)_appKeyColor;
+ (id)_appKeyColorOrDefaultTint;
+ (id)_barHairlineShadowColor;
+ (id)_barStyleBlackHairlineShadowColor;
+ (id)_carSystemFocusColor;
+ (id)_carSystemFocusLabelColor;
+ (id)_carSystemFocusPrimaryColor;
+ (id)_carSystemFocusSecondaryColor;
+ (id)_carSystemPrimaryColor;
+ (id)_carSystemQuaternaryColor;
+ (id)_carSystemSecondaryColor;
+ (id)_carSystemTertiaryColor;
+ (id)_composedColorFromSourceColor:(id)arg1 destinationColor:(id)arg2 tintColor:(id)arg3 alpha:(double)arg4;
+ (id)_contentBackgroundColor;
+ (id)_controlForegroundColor;
+ (id)_controlHighlightColor;
+ (id)_controlShadowColor;
+ (id)_controlVibrantBottomBackgroundColor;
+ (id)_controlVibrantTopBackgroundColor;
+ (id)_convertColorPickerColor:(id)arg1 fromUserInterfaceStyle:(long long)arg2 to:(long long)arg3;
+ (id)_dimmingViewColor;
+ (id)_disabledColorForColor:(id)arg1;
+ (id)_disambiguated_due_to_CIImage_colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)_disambiguated_due_to_CIImage_colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)_dynamicCatalogColorForNibEncodingWithName:(id)arg1 genericColor:(id)arg2;
+ (id)_dynamicColorWithColorsByTraitCollection:(id)arg1;
+ (id)_dynamicTestColor;
+ (id)_externalBarBackgroundColor;
+ (id)_externalSystemDarkGrayColor;
+ (id)_externalSystemExtraDarkGrayColor;
+ (id)_externalSystemGrayColor;
+ (id)_externalSystemMidGrayColor;
+ (id)_externalSystemSuperDarkGrayColor;
+ (id)_externalSystemWhiteColor;
+ (id)_fillColor;
+ (id)_focusedCarSystemColor:(id)arg1;
+ (id)_grayColorForFontSize:(double)arg1;
+ (id)_groupTableHeaderFooterTextColor;
+ (id)_labelColor;
+ (id)_linkColor;
+ (double)_luminanceWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (id)_markedTextBackgroundColor;
+ (id)_monochromeCellImageTintColor;
+ (id)_opaqueSeparatorColor;
+ (id)_pageControlIndicatorColor;
+ (id)_pageControlPlatterIndicatorColor;
+ (id)_placeholderTextColor;
+ (id)_plainTableHeaderFooterTextColor;
+ (id)_quaternaryFillColor;
+ (id)_quaternaryLabelColor;
+ (id)_searchBarBackgroundColor;
+ (id)_searchFieldDisabledBackgroundColor;
+ (id)_searchFieldPlaceholderTextClearButtonColor;
+ (id)_secondaryFillColor;
+ (id)_secondaryLabelColor;
+ (id)_secondarySystemBackgroundColor;
+ (id)_secondarySystemGroupedBackgroundColor;
+ (id)_separatorColor;
+ (id)_sidebarBackgroundColor;
+ (id)_splitViewBorderColor;
+ (id)_swiftColor;
+ (id)_swipedSidebarCellBackgroundColor;
+ (id)_switchOffColor;
+ (id)_switchOffImageColor;
+ (id)_systemBackgroundColor;
+ (id)_systemBackgroundSectionCellColor;
+ (id)_systemBackgroundSectionColor;
+ (id)_systemBlueColor2;
+ (id)_systemChromeShadowColor;
+ (id)_systemColorForColor:(id)arg1 withName:(id)arg2;
+ (id)_systemColorSelectorTable;
+ (id)_systemColorWithName:(id)arg1;
+ (id)_systemColorWithUnvalidatedName:(id)arg1;
+ (id)_systemDestructiveTintColor;
+ (id)_systemGray2Color;
+ (id)_systemGray3Color;
+ (id)_systemGray4Color;
+ (id)_systemGray5Color;
+ (id)_systemGray6Color;
+ (id)_systemGroupBackgroundCellColor;
+ (id)_systemGroupBackgroundColor;
+ (id)_systemGroupedBackgroundColor;
+ (id)_systemInteractionTintColor;
+ (id)_systemMidGrayTintColor;
+ (id)_systemSelectedColor;
+ (id)_tertiaryFillColor;
+ (id)_tertiaryLabelColor;
+ (id)_tertiarySystemBackgroundColor;
+ (id)_tertiarySystemGroupedBackgroundColor;
+ (id)_textFieldBackgroundColor;
+ (id)_textFieldBorderColor;
+ (id)_textFieldDisabledBackgroundColor;
+ (id)_textFieldDisabledBorderColor;
+ (id)_tintColor;
+ (id)_translucentPaperTextureColor;
+ (id)_tvInterfaceStyleDarkContentColor;
+ (id)_tvInterfaceStyleLightContentColor;
+ (id)_tvLabelOpacityAColor;
+ (id)_tvLabelOpacityBColor;
+ (id)_tvLabelOpacityCColor;
+ (id)_unfocusedCarSystemColor:(id)arg1;
+ (id)_vibrantDarkFillDodgeColor;
+ (id)_vibrantLightDividerBurnColor;
+ (id)_vibrantLightDividerDarkeningColor;
+ (id)_vibrantLightFillBurnColor;
+ (id)_vibrantLightFillDarkeningColor;
+ (id)_vibrantLightSectionDelimiterDividerBurnColor;
+ (id)_vibrantLightSectionDelimiterDividerDarkeningColor;
+ (id)_webContentBackgroundColor;
+ (id)_windowBackgroundColor;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)blackColor;
+ (id)blueColor;
+ (id)brownColor;
+ (id)candidateRowBackgroundColor;
+ (id)candidateRowHighlightedColor;
+ (id)classFallbacksForKeyedArchiver;
+ (id)clearColor;
+ (id)colorNamed:(id)arg1;
+ (id)colorNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;
+ (id)colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)colorWithCIColor:(id)arg1;
+ (id)colorWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithDynamicProvider:(id /* block */)arg1;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)cyanColor;
+ (id)darkGrayColor;
+ (id)darkTextColor;
+ (id)externalSystemGreenColor;
+ (id)externalSystemRedColor;
+ (id)externalSystemTealColor;
+ (id)grayColor;
+ (id)greenColor;
+ (id)groupTableViewBackgroundColor;
+ (id)infoTextOverPinStripeTextColor;
+ (void)initialize;
+ (id)insertionPointColor;
+ (id)keyboardFocusIndicatorColor;
+ (id)labelColor;
+ (id)lightGrayColor;
+ (id)lightTextColor;
+ (id)lineSeparatorColor;
+ (id)linkColor;
+ (id)magentaColor;
+ (id)noContentDarkGradientBackgroundColor;
+ (id)noContentLightGradientBackgroundColor;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)opaqueSeparatorColor;
+ (id)orangeColor;
+ (id)pinStripeColor;
+ (id)placeholderTextColor;
+ (id)purpleColor;
+ (id)quaternaryLabelColor;
+ (id)quaternarySystemFillColor;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)redColor;
+ (id)scrollViewTexturedBackgroundColor;
+ (id)secondaryLabelColor;
+ (id)secondarySystemBackgroundColor;
+ (id)secondarySystemFillColor;
+ (id)secondarySystemGroupedBackgroundColor;
+ (id)sectionHeaderBackgroundColor;
+ (id)sectionHeaderBorderColor;
+ (id)sectionHeaderOpaqueBackgroundColor;
+ (id)sectionListBorderColor;
+ (id)selectionGrabberColor;
+ (id)selectionHighlightColor;
+ (id)separatorColor;
+ (bool)supportsSecureCoding;
+ (id)systemBackgroundColor;
+ (id)systemBlackColor;
+ (id)systemBlueColor;
+ (id)systemBrownColor;
+ (id)systemCyanColor;
+ (id)systemDarkBlueColor;
+ (id)systemDarkExtraLightGrayColor;
+ (id)systemDarkExtraLightGrayTintColor;
+ (id)systemDarkGrayColor;
+ (id)systemDarkGrayTintColor;
+ (id)systemDarkGreenColor;
+ (id)systemDarkLightGrayColor;
+ (id)systemDarkLightGrayTintColor;
+ (id)systemDarkLightMidGrayColor;
+ (id)systemDarkLightMidGrayTintColor;
+ (id)systemDarkMidGrayColor;
+ (id)systemDarkMidGrayTintColor;
+ (id)systemDarkOrangeColor;
+ (id)systemDarkPinkColor;
+ (id)systemDarkPurpleColor;
+ (id)systemDarkRedColor;
+ (id)systemDarkTealColor;
+ (id)systemDarkYellowColor;
+ (id)systemExtraLightGrayColor;
+ (id)systemExtraLightGrayTintColor;
+ (id)systemFillColor;
+ (id)systemGray2Color;
+ (id)systemGray3Color;
+ (id)systemGray4Color;
+ (id)systemGray5Color;
+ (id)systemGray6Color;
+ (id)systemGrayColor;
+ (id)systemGrayTintColor;
+ (id)systemGreenColor;
+ (id)systemGroupedBackgroundColor;
+ (id)systemIndigoColor;
+ (id)systemLightGrayColor;
+ (id)systemLightGrayTintColor;
+ (id)systemLightMidGrayColor;
+ (id)systemLightMidGrayTintColor;
+ (id)systemMidGrayColor;
+ (id)systemMidGrayTintColor;
+ (id)systemMintColor;
+ (id)systemOrangeColor;
+ (id)systemPinkColor;
+ (id)systemPurpleColor;
+ (id)systemRedColor;
+ (id)systemTealColor;
+ (id)systemWhiteColor;
+ (id)systemYellowColor;
+ (id)tableBackgroundColor;
+ (id)tableCellBackgroundColor;
+ (id)tableCellBlueTextColor;
+ (id)tableCellDefaultSelectionTintColor;
+ (id)tableCellDisabledBackgroundColor;
+ (id)tableCellFocusedBackgroundColor;
+ (id)tableCellGrayTextColor;
+ (id)tableCellGroupedBackgroundColor;
+ (id)tableCellGroupedBackgroundColorLegacyWhite;
+ (id)tableCellGroupedSelectedBackgroundColor;
+ (id)tableCellHighlightedBackgroundColor;
+ (id)tableCellPlainBackgroundColor;
+ (id)tableCellPlainSelectedBackgroundColor;
+ (id)tableCellValue1BlueColor;
+ (id)tableCellValue2BlueColor;
+ (id)tableCellbackgroundColorCarPlay;
+ (id)tableGroupedSeparatorLightColor;
+ (id)tableGroupedTopShadowColor;
+ (id)tablePlainHeaderFooterBackgroundColor;
+ (id)tablePlainHeaderFooterFloatingBackgroundColor;
+ (id)tableSelectionColor;
+ (id)tableSelectionGradientEndColor;
+ (id)tableSelectionGradientStartColor;
+ (id)tableSeparatorColor;
+ (id)tableSeparatorDarkColor;
+ (id)tableSeparatorLightColor;
+ (id)tableShadowColor;
+ (id)tertiaryLabelColor;
+ (id)tertiarySystemBackgroundColor;
+ (id)tertiarySystemFillColor;
+ (id)tertiarySystemGroupedBackgroundColor;
+ (id)textFieldAtomBlueColor;
+ (id)textFieldAtomPurpleColor;
+ (id)textGrammarIndicatorColor;
+ (id)tintColor;
+ (id)underPageBackgroundColor;
+ (id)viewFlipsideBackgroundColor;
+ (id)whiteColor;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)yellowColor;

- (void).cxx_destruct;
- (struct CGColor { }*)CGColor;
- (id)CIColor;
- (id)_accessibilityNameWithLuma;
- (id)_colorBlendedWithColor:(id)arg1;
- (id)_colorBlendedWithColor:(id)arg1 compositingFilter:(id)arg2;
- (id)_colorBlendedWithColors:(id)arg1;
- (double)_colorDifferenceFromColor:(id)arg1;
- (id)_debugCatalogBundleIdentifier;
- (id)_debugName;
- (double)_distanceFrom:(id)arg1;
- (bool)_getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4;
- (bool)_getWhite:(double*)arg1 alpha:(double*)arg2;
- (id)_inverseColor;
- (bool)_isDeepColor;
- (bool)_isDynamic;
- (bool)_isDynamicTintColor;
- (bool)_isOpaque;
- (bool)_isSimilarToColor:(id)arg1 withinPercentage:(double)arg2;
- (double)_luminance;
- (double)_luminanceDifferenceFromColor:(id)arg1;
- (id)_resolvedBackgroundColorWithTraitCollection:(id)arg1;
- (id)_resolvedMaterialWithTraitCollection:(id)arg1;
- (void)_setDebugCatalogBundleIdentifier:(id)arg1;
- (void)_setDebugName:(id)arg1;
- (void)_setSystemColorName:(id)arg1;
- (id)_systemColorName;
- (id)accessibilityName;
- (double)alphaComponent;
- (struct CGColor { }*)cgColor;
- (Class)classForCoder;
- (id)colorSpaceName;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)getHue:(double*)arg1 saturation:(double*)arg2 brightness:(double*)arg3 alpha:(double*)arg4;
- (bool)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4;
- (bool)getWhite:(double*)arg1 alpha:(double*)arg2;
- (unsigned long long)hash;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)initWithCIColor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithDynamicProvider:(id /* block */)arg1;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isPatternColor;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)resolvedColorWithTraitCollection:(id)arg1;
- (void)set;
- (void)setFill;
- (void)setStroke;
- (id)styleString;
- (id)writableTypeIdentifiersForItemProvider;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

+ (id)AV_indicatorBackgroundColor;
+ (id)AV_indicatorForegroundColor;
+ (id)avkit_liveContentAccessoryViewColor;

// Image: /System/Library/Frameworks/ClockKit.framework/ClockKit

- (id)JSONObjectRepresentation;
- (id)initWithJSONObjectRepresentation:(id)arg1;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

+ (id)tableViewBackgroundColorOpaque;

- (double)blueComponent;
- (double)brightnessComponent;
- (id)burnWithColor:(id)arg1;
- (double)differenceFromColor:(id)arg1;
- (id)ek_blendWithColor:(id)arg1;
- (double)greenComponent;
- (double)hueComponent;
- (bool)isGreenOrYellow;
- (double)luminance;
- (id)overlayWithColor:(id)arg1;
- (double)redComponent;
- (double)saturationComponent;
- (id)soverWithColor:(id)arg1;

// Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI

+ (id)_inui_colorNamed:(id)arg1 bundle:(id)arg2;

// Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation

+ (id)_lp_colorWithDynamicProvider:(id /* block */)arg1;
+ (id)_lp_colorWithDynamicProvider:(id /* block */)arg1 name:(id)arg2;
+ (id)_lp_quinaryLabelColor;
+ (id)_lp_secondarySystemFillColor;
+ (id)_lp_systemFillColor;

- (id)_lp_CSSText;
- (id)_lp_CSSTextForcingUserInterfaceStyle:(long long)arg1;
- (id)_lp_CSSTextHexFormatForcingUserInterfaceStyle:(long long)arg1;
- (id)_lp_HTMLAttributeText;
- (id)_lp_colorBlendedWithColor:(id)arg1;
- (id)_lp_colorForcingUserInterfaceStyle:(long long)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (bool)_getColorComponent:(double*)arg1 fromSubString:(id)arg2;
+ (id)_mapkit_colorForTransitLine:(id)arg1;
+ (id)_mapkit_colorNamed:(id)arg1;
+ (id)_mapkit_colorNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)_mapkit_userLocationAccuracyRingFillColor;
+ (id)_mapkit_userLocationAccuracyRingStrokeColor;
+ (id)_mapkit_userLocationAccuracyRingStrokeColorSatellite;
+ (id)_maps_colorFromHexString:(id)arg1;
+ (bool)_maps_getRed:(out double*)arg1 green:(out double*)arg2 blue:(out double*)arg3 fromHue:(double)arg4 saturation:(double)arg5 value:(double)arg6;

- (id)_mapkit_blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (bool)_mapkit_getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4;
- (bool)_mapkit_isWhite;
- (id)_maps_hexString;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)colorWithITColor:(struct ITColor { double x1; double x2; double x3; double x4; })arg1;

- (struct ITColor { double x1; double x2; double x3; double x4; })ITColor;
- (bool)MP_isArtworkColorAnalyzerLightColorForAlgorithm:(long long)arg1;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)mailAutoCompleteTableViewCellBackgroundColorForPopoverDisplay;
+ (id)mailComposeFormatButtonSelectedBackgroundColor;
+ (id)mailComposeHeaderBackgroundColor;
+ (id)mailComposeSuggestionsListTintColor;
+ (id)mailComposeTextViewBackgroundColor;
+ (id)mailGeneralBackgroundColor;
+ (id)mailInteractiveColor;
+ (id)mailMessageContentViewBackgroundColor;
+ (id)mailModernLabelledAddressAtomDefaultTextColor;
+ (id)mailModernLabelledAtomDefaultTextColor;
+ (id)mailPopoverBackgroundCellColor;
+ (id)mailQuickComposeBackgroundColor;
+ (id)mailQuoteColorLevelOne;
+ (id)mailQuoteColorLevelOneCorona;
+ (id)mailQuoteColorLevelThree;
+ (id)mailQuoteColorLevelThreeCorona;
+ (id)mailQuoteColorLevelTwo;
+ (id)mailQuoteColorLevelTwoCorona;
+ (id)mailQuoteColorsForInterfaceStyle:(long long)arg1;
+ (id)mailSecureMIMERegularTextColor;
+ (id)mailSecureMIMEWarningColor;
+ (id)mailSenderAddressPickerColorHighlightedTextColor;
+ (id)mailSenderAddressPickerColorNormalTextColor;
+ (id)mailSenderAddressPickerUnsafeDomainColorTextColor;
+ (id)mailStyleSheetBackground;
+ (id)mailSubtitleGrayColor;
+ (id)mf_colorNamed:(id)arg1;
+ (id)quoteColorsForSupportedInterfaceStyle;

- (double)mf_contrastRatioTo:(id)arg1;
- (double)mf_luminance;

// Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter

+ (id)nc_labelColor;

// Image: /System/Library/Frameworks/PencilKit.framework/PencilKit

+ (id)pk_buttonImageColor;
+ (id)pk_convertColorPickerColor:(id)arg1 fromUserInterfaceStyle:(long long)arg2 to:(long long)arg3;
+ (id)pk_crosshairViewBorderColor;
+ (id)pk_crosshairViewShadowColor;
+ (id)pk_doneButtonBackgroundColor;
+ (id)pk_doneButtonTitleColor;
+ (id)pk_linedPaperLineColor_dark;
+ (id)pk_linedPaperLineColor_light;
+ (id)pk_opacityTitleLabel;
+ (id)pk_opacityValueLabel;
+ (id)pk_paletteBackgroundColor;
+ (id)pk_paletteButtonBackgroundColor;
+ (id)pk_paletteShadowColor;
+ (id)pk_paletteStrokeColor;
+ (id)pk_randomColor;
+ (id)pk_removeActiveToolButtonColor;
+ (id)pk_selectedPickerButtonBackgroundColor;
+ (id)pk_selectedPickerButtonMaskColor;
+ (id)pk_separatorLineColor;
+ (id)pk_textInputDeletionPreviewColor;
+ (id)pk_textInputReserveSpaceColor;
+ (id)pk_thicknessButtonBlack;
+ (id)pk_thicknessButtonBlackUseSystemColor:(bool)arg1;
+ (id)pk_thicknessButtonLightGray;
+ (id)pk_thicknessButtonLightGrayUseSystemColor:(bool)arg1;
+ (id)pk_thicknessButtonWhite;
+ (id)pk_thicknessButtonWhiteUseSystemColor:(bool)arg1;
+ (id)pk_toolDockMaskColor;
+ (id)pk_toolSampleViewBackgroundColor;
+ (id)pk_toolTintColor;
+ (id)pkaxHueNameForValue:(double)arg1;

- (id)_pkaxCachedApproximateColorDescription;
- (id)_pkaxColorDescriptionForHue:(id)arg1 saturation:(id)arg2 lightness:(id)arg3;
- (id)_pkaxLightnessHueFormatString;
- (id)_pkaxLightnessSaturationHueFormatString;
- (id)_pkaxSaturationHueFormatString;
- (void)_pkaxSetCachedApproximateColorDescription:(id)arg1;
- (id)pkaxApproximateColorDescription;
- (id)pkaxDescriptionWithLuma;
- (double)pkaxHue;
- (id)pkaxHueName;
- (id)pkaxLightnessModifier;
- (double)pkaxLuma;
- (double)pkaxSaturation;
- (id)pkaxSaturationModifier;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (id)color:(double)arg1 :(double)arg2 :(double)arg3 :(double)arg4;
+ (id)scn_colorWithC3DColor:(const struct C3DColor4 { union { float x_1_1_1[4]; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_1_1_2; } x1; }*)arg1;
+ (id)scn_colorWithLinearDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)scn_colorWithLinearSRGBRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)scn_colorWithModelIORed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 options:(id)arg5;

- (double)a;
- (double)b;
- (double)g;
- (double)r;
- (struct C3DColor4 { union { float x_1_1_1[4]; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_1_1_2; } x1; })scn_C3DColorIgnoringColorSpace:(bool)arg1 success:(bool*)arg2;
- (void)scn_colorComponentsForModelIO;

// Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit

+ (id)colorWithComponentRGBA:(struct { float x1; float x2; float x3; float x4; })arg1;
+ (id)colorWithVectorRGBA;

- (double)alpha;
- (double)blue;
- (struct { float x1; float x2; float x3; float x4; })componentRGBA;
- (double)green;
- (double)red;
- (void)vectorRGBA;

// Image: /System/Library/Frameworks/SwiftUI.framework/SwiftUI

- (id)initWithColor__swiftUI__:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities

- (double)_atvaccessibilityAlphaComponent;

// Image: /System/Library/PrivateFrameworks/ActivitySharingUI.framework/ActivitySharingUI

+ (id)as_brightCompetitionGold;
+ (id)as_colorForParticipant:(long long)arg1 competition:(id)arg2;
+ (id)as_competitionButtonGold;
+ (id)as_competitionFriendListPlatterGold;
+ (id)as_competitionGraphBackgroundGold;
+ (id)as_competitionNotificationAccentGold;
+ (id)as_competitionNotificationPlatterGold;
+ (id)as_darkCompetitionGold;
+ (id)as_lightCompetitionGold;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

+ (struct CGColorSpace { }*)_getCIELABColorSpace;
+ (id)akBoxBorderColor;
+ (id)akBubbleFillColor;
+ (id)akButtonHoverStateColor;
+ (id)akColorPickerBlue;
+ (id)akColorPickerGreen;
+ (id)akColorPickerOrange;
+ (id)akColorPickerPurple;
+ (id)akColorPickerRed;
+ (id)akColorPickerYellow;
+ (id)akColorWithCIColor:(id)arg1;
+ (id)akColorWithSRGBRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)akColorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)akRowSeparatorColor;
+ (id)akSystemBlueColor;
+ (id)akSystemGreenColor;
+ (id)akSystemPinkColor;
+ (id)akSystemPurpleColor;
+ (id)akSystemRedColor;
+ (id)akSystemYellowColor;
+ (id)im_colorWithSRGBDescription:(id)arg1;

- (double)akAlphaComponent;
- (id)akBlendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (double)akDistanceFromColor:(id)arg1;
- (bool)akHasHueEqualToColor:(id)arg1 withTolerance:(double)arg2;
- (bool)akIsEqualToColor:(id)arg1;
- (id)colorUsingSRGBColorSpace;
- (void)getL:(double*)arg1 a:(double*)arg2 b:(double*)arg3;

// Image: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents

+ (id)_asc_highlightBlendColor;
+ (id)asc_colorWithLightColor:(id)arg1 darkColor:(id)arg2;

- (id)asc_highlightedColor;

// Image: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit

+ (id)appTint;
+ (id)componentBackground;
+ (id)componentBackgroundStandout;
+ (id)darkNavigationBarBlurTint;
+ (id)defaultBackground;
+ (id)defaultButtonBackgroundColor;
+ (id)defaultButtonTitleColor;
+ (id)defaultLine;
+ (id)lightNavigationBarBlurTint;
+ (id)mediaBorder;
+ (id)placeholderBackground;
+ (id)placeholderBackgroundStandout;
+ (id)primaryText;
+ (id)quaternaryText;
+ (id)reviewBackground;
+ (id)secondaryText;
+ (id)tableViewBackground;
+ (id)tableViewCellBackground;
+ (id)tableViewCellChevron;
+ (id)tableViewCellSelectedBackground;
+ (id)tertiaryText;
+ (id)todayCardDefaultBackground;

// Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI

+ (id)aaui_colorWithHexString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI

+ (id)_colorIdentifierDictionary;
+ (id)ams_appTint;
+ (id)ams_clear;
+ (id)ams_colorFromDictionary:(id)arg1;
+ (id)ams_colorFromHexString:(id)arg1;
+ (id)ams_componentBackground;
+ (id)ams_defaultLine;
+ (id)ams_dim;
+ (id)ams_dynamicColorFromDictionary:(id)arg1;
+ (id)ams_dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2;
+ (id)ams_dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2 darkHighContrastColor:(id)arg3;
+ (id)ams_dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2 lightHighContrastColor:(id)arg3;
+ (id)ams_dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2 lightHighContrastColor:(id)arg3 darkHighContrastColor:(id)arg4;
+ (id)ams_mediaBorder;
+ (id)ams_namedColorFromDictionary:(id)arg1;
+ (id)ams_placeholderBackground;
+ (id)ams_primaryBackground;
+ (id)ams_primaryGroupedBackground;
+ (id)ams_primaryText;
+ (id)ams_quaternaryText;
+ (id)ams_rgbColorFromDictionary:(id)arg1;
+ (id)ams_secondaryBackground;
+ (id)ams_secondaryGroupedBackground;
+ (id)ams_secondaryText;
+ (id)ams_shadow;
+ (id)ams_tertiaryText;

- (bool)ams_isDark;
- (bool)ams_isLight;
- (double)ams_luminance;

// Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer

+ (id)colorWithHexValue:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI

+ (id)ak_colorWithServerRGBRepresentation:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit

+ (id)avt_colorWithColor4;

- (void)avt_colorToColor4;

// Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI

- (id)BSColor;

// Image: /System/Library/PrivateFrameworks/BusinessServicesUI.framework/BusinessServicesUI

- (id)initWithHexString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

+ (id)cuik_systemBackgroundColor;

- (void)cuik_getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4;

// Image: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices

+ (id)crsui_dashboardWidgetBackgroundColor;

// Image: /System/Library/PrivateFrameworks/CarouselPreferenceServices.framework/CarouselPreferenceServices

+ (id)cslprf_stingColor;

// Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo

+ (id)CertUIVerifiedColor;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)_ckColor:(id)arg1 forUserInterfaceStyle:(long long)arg2;
+ (id)_ckSecondarySystemBackgroundColor;
+ (id)_ckSecondarySystemGroupedBackgroundColor;
+ (id)_ckSystemBackgroundColor;
+ (id)_ckSystemGroupedBackgroundColor;
+ (id)_ckTertiarySystemBackgroundColor;
+ (id)ckColorNamed:(id)arg1;
+ (id)dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2;

- (bool)ck_isCloseToColor:(id)arg1;
- (bool)ck_isVeryDark;
- (bool)ck_isVeryLight;
- (id)colorByBlendingWithColor:(id)arg1;
- (id)colorByBlendingWithColor:(id)arg1 withFraction:(double)arg2;
- (id)resolvedColorForTraitCollection:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices

+ (id)cps_colorNamed:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DMCEnrollmentProvider.framework/DMCEnrollmentProvider

+ (id)DMCProfileRedColor;
+ (id)DMCProfileSecondaryLabelColor;
+ (id)DMCProfileVerifiedColor;

// Image: /System/Library/PrivateFrameworks/DashBoard.framework/DashBoard

- (id)undynamicColor;

// Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport

+ (id)colorWithHexValue:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared

- (id)colorSpaceConvertedColor;

// Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera

+ (id)DCExtractedDocumentViewControllerBackgroundColor;
+ (id)colorInBundleWithName:(id)arg1;
+ (id)dc_barColor;
+ (id)dc_darkerAccessibilityColorForColor:(id)arg1;
+ (id)dc_editBackgroundColor;
+ (id)dc_labelBackgroundColor;

- (bool)dc_colorIsLight;
- (id)dc_lighterColor;

// Image: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables

+ (id)_doc_interfaceColorForTag:(long long)arg1 withAlphaComponent:(double)arg2;
+ (id)_doc_underlyingColorForTagColor:(long long)arg1;
+ (id)doc_colorForTagColor:(long long)arg1;
+ (id)doc_secondaryColorForTagColor:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore

+ (id)_doc_safeTintColor:(id)arg1;

- (id)_doc_invertedColor;
- (id)doc_readableFromColor:(id)arg1 fallbackColor:(id)arg2;

// Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI

- (id)invert;

// Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI

+ (id)fmfOrangeColor;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

+ (id)fiui_meditationTeal;
+ (id)fu_platterBlueColor;
+ (id)fu_platterDaliTealColor;
+ (id)fu_platterGreenColor;
+ (id)fu_platterMintColor;
+ (id)fu_platterOrangeColor;
+ (id)fu_platterPinkColor;
+ (id)fu_platterPurpleColor;
+ (id)fu_platterRedColor;
+ (id)fu_platterTealBlueColor;
+ (id)fu_platterWhiteColor;
+ (id)fu_platterYellowColor;
+ (id)fu_systemBlueColor;
+ (id)fu_systemGreenColor;
+ (id)fu_systemGreyColor;
+ (id)fu_systemMintColor;
+ (id)fu_systemOrangeColor;
+ (id)fu_systemPinkColor;
+ (id)fu_systemPurpleColor;
+ (id)fu_systemRedColor;
+ (id)fu_systemTealBlueColor;
+ (id)fu_systemTextGreyColor;
+ (id)fu_systemYellowColor;

// Image: /System/Library/PrivateFrameworks/FocusUI.framework/FocusUI

+ (id)fcui_colorForActivity:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (id)_gkSelectedCellBackgroundColor;
+ (id)_gkSpeechViewTintColor;
+ (id)_gkvisualEffectTintColor;
+ (id)componentBackground;
+ (id)componentBackgroundStandout;
+ (id)darkNavigationBarBlurTint;
+ (id)defaultBackground;
+ (id)defaultButtonBackgroundColor;
+ (id)defaultButtonTitleColor;
+ (id)defaultLine;
+ (id)gk_dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2;
+ (id)gk_dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2 darkHighContrastColor:(id)arg3;
+ (id)gk_dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2 lightHighContrastColor:(id)arg3;
+ (id)gk_dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2 lightHighContrastColor:(id)arg3 darkHighContrastColor:(id)arg4;
+ (id)lightNavigationBarBlurTint;
+ (id)lobbyCardAltBackground;
+ (id)lobbyCardBackground;
+ (id)lobbyCellBackground;
+ (id)lobbyPlayerCellBackground;
+ (id)mediaBorder;
+ (id)placeholderBackground;
+ (id)placeholderBackgroundStandout;
+ (id)tableViewBackground;
+ (id)tableViewCellBackground;
+ (id)tableViewCellChevron;
+ (id)tableViewCellSelectedBackground;
+ (id)todayCardDefaultBackground;

// Image: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore

- (double)_gkLuminance;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesUI.framework/HealthMenstrualCyclesUI

+ (id)_hkmcui_colorWithAssetName:(id)arg1;
+ (id)hkmc_calendarTodayLabelColor;
+ (id)hkmc_cycleFactorsTimeIntervalBackgroundColor;
+ (id)hkmc_cycleHistoryFilterBackgroundColor;
+ (id)hkmc_cycleHistoryFilterLabelColor;
+ (id)hkmc_cycleHistoryGradientFadeColor;
+ (id)hkmc_cycleHistorySectionCellBackgroundColor;
+ (id)hkmc_cycleLogCellBackgroundColor;
+ (id)hkmc_doneButtonLoggingCarouselColor;
+ (id)hkmc_fertileWindowColor;
+ (id)hkmc_fertilityBackgroundColor;
+ (id)hkmc_fertilityBackgroundFadedColor;
+ (id)hkmc_fertilityProjectionColor;
+ (id)hkmc_highContrastCycleFactorsTimeIntervalBackgroundColor;
+ (id)hkmc_highContrastMenstruationBackgroundColor;
+ (id)hkmc_highContrastMenstruationColor;
+ (id)hkmc_highContrastMenstruationLoggingCardGradientAColor;
+ (id)hkmc_highContrastMenstruationLoggingCardGradientBColor;
+ (id)hkmc_highContrastRegularDayColor;
+ (id)hkmc_highContrastSupplementaryDataBackgroundColor;
+ (id)hkmc_highContrastSupplementaryDataTextColor;
+ (id)hkmc_highContrastSupplementaryLoggingCardGradientAColor;
+ (id)hkmc_highContrastSupplementaryLoggingCardGradientBColor;
+ (id)hkmc_loggingCardBackgroundColor;
+ (id)hkmc_menstruationBackgroundColor;
+ (id)hkmc_menstruationCalendarFutureColor;
+ (id)hkmc_menstruationColor;
+ (id)hkmc_menstruationLoggingCardGradientAColor;
+ (id)hkmc_menstruationLoggingCardGradientBColor;
+ (id)hkmc_menstruationProjectionHighColor;
+ (id)hkmc_menstruationProjectionLowColor;
+ (id)hkmc_menstruationSelectionTintColor;
+ (id)hkmc_menstruationTimelineFutureColor;
+ (id)hkmc_ovulationDayColor;
+ (id)hkmc_ovulationDayCycleHistoryColor;
+ (id)hkmc_ovulationDayCycleHistoryFadedColor;
+ (id)hkmc_ovulationDayCycleTimelineColor;
+ (id)hkmc_ovulationDayCycleTimelineReversedColor;
+ (id)hkmc_projectionTextColor;
+ (id)hkmc_regularDayColor;
+ (id)hkmc_supplementaryDataBackgroundColor;
+ (id)hkmc_supplementaryDataColor;
+ (id)hkmc_supplementaryDataSelectionTintColor;
+ (id)hkmc_supplementaryDataTextColor;
+ (id)hkmc_supplementaryDataTextFutureColor;
+ (id)hkmc_supplementaryDataTimelineDisabledColor;
+ (id)hkmc_supplementaryDataTimelineFutureColor;
+ (id)hkmc_supplementaryLoggingCardGradientAColor;
+ (id)hkmc_supplementaryLoggingCardGradientBColor;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

+ (id)hrui_allergies;
+ (id)hrui_carePlans;
+ (id)hrui_clinicalDocuments;
+ (id)hrui_clinicalNotes;
+ (id)hrui_clinicalVitals;
+ (id)hrui_conditions;
+ (id)hrui_devices;
+ (id)hrui_healthRecords;
+ (id)hrui_immunizations;
+ (id)hrui_insurance;
+ (id)hrui_labResults;
+ (id)hrui_medications;
+ (id)hrui_procedures;
+ (id)hrui_socialHistory;
+ (id)hrui_tableViewCellHighlightColor;
+ (id)hrui_unreadable;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)_accessibilityColorView;
+ (id)_accessibilityHigherContrastTintColorForColorIfNeeded:(id)arg1;
+ (id)hk_activityCardGradientBottomColor;
+ (id)hk_activityCardGradientTopColor;
+ (id)hk_activityCardGrayColor;
+ (id)hk_activityExerciseGoalLineColor;
+ (id)hk_activityExerciseGoalMetGradientBottomColor;
+ (id)hk_activityExerciseGoalMetGradientTopColor;
+ (id)hk_activityExerciseGoalMissedGradientBottomColor;
+ (id)hk_activityExerciseGoalMissedGradientTopColor;
+ (id)hk_activityKeyColor;
+ (id)hk_activityLegendLabelColor;
+ (id)hk_activityMoveGoalLineColor;
+ (id)hk_activityMoveGoalMetGradientBottomColor;
+ (id)hk_activityMoveGoalMetGradientTopColor;
+ (id)hk_activityMoveGoalMetNonGradientColor;
+ (id)hk_activityMoveGoalMissedGradientBottomColor;
+ (id)hk_activityMoveGoalMissedGradientTopColor;
+ (id)hk_activityMoveGoalMissedNonGradientColor;
+ (id)hk_activitySeparatorDefaultColor;
+ (id)hk_activitySeparatorLollipopColor;
+ (id)hk_activityStandGoalLineColor;
+ (id)hk_activityStandGoalMetGradientBottomColor;
+ (id)hk_activityStandGoalMetGradientTopColor;
+ (id)hk_activityStandGoalMissedGradientBottomColor;
+ (id)hk_activityStandGoalMissedGradientTopColor;
+ (id)hk_alertHeaderBackgroundColor;
+ (id)hk_alertHeaderForegroundColor;
+ (id)hk_allergiesClinicalKeyColor;
+ (id)hk_appErrorColor;
+ (id)hk_appInteractionDisabledColor;
+ (id)hk_appKeyColor;
+ (id)hk_appTintColor;
+ (id)hk_bodyMeasurementsKeyColor;
+ (id)hk_carePlansClinicalKeyColor;
+ (id)hk_chartAxisLabelColor;
+ (id)hk_chartAxisMajorGridColor;
+ (id)hk_chartAxisMinorGridColor;
+ (id)hk_chartBackgroundColor;
+ (id)hk_chartGrayGraphColor;
+ (id)hk_chartGrayTextColor;
+ (id)hk_chartInactiveSeriesColor;
+ (id)hk_chartLightGrayTextColor;
+ (id)hk_chartLollipopBackgroundColor;
+ (id)hk_chartLollipopLabelColor;
+ (id)hk_chartLollipopStickColor;
+ (id)hk_chartLollipopValueColor;
+ (id)hk_chartOverlayBackgroundColor;
+ (id)hk_chartOverlayPillDarkColor;
+ (id)hk_chartOverlayPillLightColor;
+ (id)hk_chartPointLabelBackgroundColor;
+ (id)hk_clinicalDocumentsKeyColor;
+ (id)hk_clinicalNotesClinicalKeyColor;
+ (id)hk_clinicalRecordSeparatorColor;
+ (id)hk_clinicalRecordShowMoreBackgroundColor;
+ (id)hk_clinicalRecordUnitColor;
+ (id)hk_clinicalRecordValueColor;
+ (id)hk_colorNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;
+ (id)hk_conditionsClinicalKeyColor;
+ (id)hk_darkInfoButtonBackgroundColor;
+ (id)hk_darkInfoButtonGlyphColor;
+ (id)hk_defaultGradientBottomColor;
+ (id)hk_defaultGradientTopColor;
+ (id)hk_defaultInfoButtonBackgroundColor;
+ (id)hk_defaultInfoButtonGlyphColor;
+ (id)hk_defaultKeyColor;
+ (id)hk_defaultPrimaryTextColor;
+ (id)hk_defaultQuaternaryTextColor;
+ (id)hk_defaultSecondaryTextColor;
+ (id)hk_defaultTertiaryTextColor;
+ (id)hk_devicesClinicalKeyColor;
+ (id)hk_electrocardiogramCardBackgroundColor;
+ (id)hk_electrocardiogramCardHeaderColor;
+ (id)hk_electrocardiogramCardOnboardingBackgroundColor;
+ (id)hk_electrocardiogramCardOnboardingHeaderColor;
+ (id)hk_electrocardiogramChartBorderColor;
+ (id)hk_electrocardiogramChartMajorGridlineColor;
+ (id)hk_electrocardiogramChartMediumGridlineColor;
+ (id)hk_electrocardiogramChartMinorGridlineColor;
+ (id)hk_electrocardiogramChartVeryMinorGridlineColor;
+ (id)hk_hearingHealthAudioExposureBackground;
+ (id)hk_hearingHealthAudioExposureColorForClassification:(unsigned long long)arg1;
+ (id)hk_hearingHealthAudioExposureLoudFill;
+ (id)hk_hearingHealthAudioExposureOkFill;
+ (id)hk_hearingHealthAudiogramAverageLineColor;
+ (id)hk_hearingHealthAudiogramDisabledLineColor;
+ (id)hk_hearingHealthAudiogramDisabledPointMarkerColor;
+ (id)hk_hearingHealthAudiogramLeftEarAnnotationColor;
+ (id)hk_hearingHealthAudiogramLeftEarDeemphasizedColor;
+ (id)hk_hearingHealthAudiogramLeftEarLineColor;
+ (id)hk_hearingHealthAudiogramLeftEarPointMarkerColor;
+ (id)hk_hearingHealthAudiogramRightEarAnnotationColor;
+ (id)hk_hearingHealthAudiogramRightEarDeemphasizedColor;
+ (id)hk_hearingHealthAudiogramRightEarLineColor;
+ (id)hk_hearingHealthAudiogramRightEarPointMarkerColor;
+ (id)hk_hearingHealthInfoBackground;
+ (id)hk_hearingHealthKeyColor;
+ (id)hk_heartKeyColor;
+ (id)hk_immunizationsClinicalKeyColor;
+ (id)hk_insulinBasalKeyColor;
+ (id)hk_insuranceClinicalKeyColor;
+ (id)hk_labResultsClinicalKeyColor;
+ (id)hk_lightGrayTextColor;
+ (id)hk_medicationDoseEventSkippedColor;
+ (id)hk_medicationDoseEventTakenColor;
+ (id)hk_medicationTrackingKeyColor;
+ (id)hk_medicationsClinicalKeyColor;
+ (id)hk_mindfulnessKeyColor;
+ (id)hk_mobilityKeyColor;
+ (id)hk_nutritionKeyColor;
+ (id)hk_otherKeyColor;
+ (id)hk_otherSecondaryColor;
+ (id)hk_populationChartLevelBackgroundColor;
+ (id)hk_populationChartSeriesColor;
+ (id)hk_populationChartTextColor;
+ (id)hk_proceduresClinicalKeyColor;
+ (id)hk_profileKeyColor;
+ (id)hk_randomColor;
+ (id)hk_reproductiveHealthKeyColor;
+ (id)hk_reproductiveHealthStartOfCycleColor;
+ (id)hk_respiratoryKeyColor;
+ (id)hk_sleepAsleepColor;
+ (id)hk_sleepAsleepCoreColor;
+ (id)hk_sleepAsleepDeepColor;
+ (id)hk_sleepAsleepREMColor;
+ (id)hk_sleepAwakeColor;
+ (id)hk_sleepColorForSleepAnalysis:(long long)arg1;
+ (id)hk_sleepInBedColor;
+ (id)hk_sleepInactiveAsleepColor;
+ (id)hk_sleepInactiveAsleepCoreColor;
+ (id)hk_sleepInactiveAsleepDeepColor;
+ (id)hk_sleepInactiveAsleepREMColor;
+ (id)hk_sleepInactiveAwakeColor;
+ (id)hk_sleepInactiveColorForSleepAnalysis:(long long)arg1;
+ (id)hk_sleepInactiveInBedColor;
+ (id)hk_sleepKeyColor;
+ (id)hk_sleepOverlayTintColor;
+ (id)hk_sleepPrimaryTextColorForSleepAnalysis:(long long)arg1;
+ (id)hk_sleepSecondaryColor;
+ (id)hk_socialHistoryClinicalKeyColor;
+ (id)hk_sourceIconTintColor;
+ (id)hk_stackedBarSeriesUnselectedColor;
+ (id)hk_symptomsKeyColor;
+ (id)hk_unknownCategoryClinicalKeyColor;
+ (id)hk_vitalsClinicalKeyColor;
+ (id)hk_vitalsKeyColor;
+ (id)hk_workoutChartGradientBottomColor;
+ (id)hk_workoutChartGradientTopColor;
+ (id)hk_workoutGradientBottomColor;
+ (id)hk_workoutGradientTopColor;
+ (id)hk_workoutKeyColor;

- (id)_colorWithSaturationAdjustedByPercentage:(double)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_alarmAndTimerControlCellSecondaryColor;
+ (id)hf_homePodControlCellBackgroundColor;
+ (id)hf_keyColor;
+ (id)hf_mediaPlatterBackgroundColor;
+ (id)hf_quickControlBackgroundGrayColor;

- (bool)isEqualToColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)hu_alarmsBackgroundColor;
+ (id)hu_alarmsCellAccessoryColor;
+ (id)hu_alarmsCellHighlightColor;
+ (id)hu_alarmsDisabledTextColor;
+ (id)hu_alarmsPrimaryColor;
+ (id)hu_alarmsPrimaryTextColor;
+ (id)hu_alarmsSwitchTintColor;
+ (id)hu_climateCategoryColor;
+ (id)hu_energyCategoryColor;
+ (id)hu_homePodControlCellBackgroundColor;
+ (id)hu_keyColor;
+ (id)hu_lightingCategoryColor;
+ (id)hu_mediaCategoryColor;
+ (id)hu_mediaPlatterBackgroundColor;
+ (id)hu_quickControlBackgroundGrayColor;
+ (id)hu_securityCategoryColor;
+ (id)hu_waterCategoryColor;

- (id)hu_colorForPrimaryState:(long long)arg1;
- (bool)isEqualToColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer

+ (id)logCyanColor;
+ (id)logPurpleColor;
+ (id)logYellowColor;

// Image: /System/Library/PrivateFrameworks/MailUI.framework/MailUI

+ (id)_mui_mailUIBundleColorNamed:(id)arg1;
+ (id)mailAccountCellTitleColor;
+ (id)mailAppBackgroundColor;
+ (id)mailArchiveActionColor;
+ (id)mailAttachmentsFilterColor;
+ (id)mailCellSelectionStateColorForInterfaceLevel:(long long)arg1;
+ (id)mailConversationViewBackgroundColor;
+ (id)mailConversationViewCollapsedCellBackgroundColor;
+ (id)mailConversationViewCollapsedCellHighlightedBackgroundColor;
+ (id)mailConversationViewCollapsedCellLabelColor;
+ (id)mailConversationViewExpandedCellBackgroundColor;
+ (id)mailConversationViewFindOverlayColor;
+ (id)mailConversationViewFooterBackgroundColor;
+ (id)mailConversationViewNoSelectedMessageViewBackgroundColor;
+ (id)mailDarkGrayColor;
+ (id)mailDestructiveActionColor;
+ (id)mailDestructiveActionSwipeColor;
+ (id)mailDockViewDarkBackgroundColor;
+ (id)mailDockViewLightBackgroundColor;
+ (id)mailDockViewShadowGradientColorLocations;
+ (id)mailDockViewShadowGradientColors;
+ (id)mailDockedPlaceholderViewBackgroundColor;
+ (id)mailExpandedConversationViewCellDateLabelColor;
+ (id)mailFlaggedColor;
+ (id)mailFlaggedColorGray;
+ (id)mailFlaggedColorGreen;
+ (id)mailFlaggedColorIncreasedContrastRed;
+ (id)mailFlaggedColorIndigo;
+ (id)mailFlaggedColorOrange;
+ (id)mailFlaggedColorRed;
+ (id)mailFlaggedColorTeal;
+ (id)mailFlaggedColorYellow;
+ (id)mailFocusBannerTitleColor;
+ (id)mailHeaderSeparatorLayerColor;
+ (id)mailMailboxPickerBackgroundColorForTraitCollection:(id)arg1;
+ (id)mailMessageListBackgroundColor;
+ (id)mailMessageListHighlightColor;
+ (id)mailMessageListPrimarySelectionColor;
+ (id)mailMessageListSecondarySelectionColor;
+ (id)mailMessageListSelectedAnnotationColor;
+ (id)mailMessageListSelectedRecipientColor;
+ (id)mailMessageListSelectedStatusIndicatorColor;
+ (id)mailMessageListSelectedSummaryColor;
+ (id)mailMessageListTertiarySelectionColor;
+ (id)mailMoreButtonGrayColor;
+ (id)mailPreviousDraftPickerHeaderTextColor;
+ (id)mailReadLaterActionColor;
+ (id)mailRemoveFollowUpColor;
+ (id)mailRemoveReminderColor;
+ (id)mailSearchImageBorderColor;
+ (id)mailSecondaryLabelDarkColor;
+ (id)mailSplitViewBackgroundColor;
+ (id)mailSplitViewBorderColor;
+ (id)mailSystemLightGrayColor;
+ (id)mailTiltedTabCloseButtonTintColor;
+ (id)mailTodayFilterColor;
+ (id)mailTransferConversationViewBackgroundColor;
+ (id)mailTransferStackViewBackgroundColor;
+ (id)mailTransparentLightGrayColor;
+ (id)mailUpcomingReminderFilterColor;
+ (id)mailVIPFilterColor;
+ (id)mailVibrantDarkColor;
+ (id)mailVibrantLightColor;
+ (id)mf_colorFromColor:(id)arg1 toColor:(id)arg2 progress:(float)arg3;
+ (id)mf_colorFromFlagColor:(unsigned long long)arg1;

- (bool)mf_isTranslucent;

// Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI

+ (id)_mapsui_accentColor;
+ (id)_mapsui_colorNamed:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls

- (id)adjustedColorByScale:(double)arg1;
- (id)secondaryColorForInterfaceStyle:(long long)arg1;
- (id)tertiaryColorForInterfaceStyle:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

+ (id)safari_labelColorFromNumber:(id)arg1;
+ (id)sf_alternateLabelColor;
+ (id)sf_alternateSecondaryLabelColor;
+ (id)sf_barHairlineOutlineColor;
+ (id)sf_barHairlineShadowColor;
+ (id)sf_colorNamed:(id)arg1;
+ (id)sf_defaultWebContentBackgroundColor;
+ (id)sf_safariAccentColor;
+ (id)sf_secondaryBarHairlineOutlineColor;
+ (id)sf_separateTabBarHighlightColor;
+ (id)sf_tabSeparatorColor;
+ (id)sf_transparentBarHairlineColor;

- (id)sf_darkenedColor;
- (bool)sf_isDarkColor;

// Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI

- (bool)suui_isOpaque;

// Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI

+ (id)mtui_backgroundColor;
+ (id)mtui_buttonBackgroundColor;
+ (id)mtui_cellAccessoryColor;
+ (id)mtui_cellHighlightColor;
+ (id)mtui_cellSeparatorColor;
+ (id)mtui_disabledButtonTintColor;
+ (id)mtui_disabledStartButtonTintColor;
+ (id)mtui_disabledTextColor;
+ (id)mtui_foregroundColor;
+ (id)mtui_lapResetButtonTextColor;
+ (id)mtui_lapResetButtonTintColor;
+ (id)mtui_pauseButtonTextColor;
+ (id)mtui_pauseButtonTintColor;
+ (id)mtui_primaryColor;
+ (id)mtui_primaryTextColor;
+ (id)mtui_quaternaryColor;
+ (id)mtui_secondaryColor;
+ (id)mtui_secondaryTextColor;
+ (id)mtui_sleepColor;
+ (id)mtui_startResumeButtonTextColor;
+ (id)mtui_startResumeButtonTintColor;
+ (id)mtui_stopButtonTextColor;
+ (id)mtui_stopButtonTintColor;
+ (id)mtui_stopwatchMajorTickMarkColor;
+ (id)mtui_stopwatchMinorTickMarkColor;
+ (id)mtui_switchTintColor;
+ (id)mtui_tertiaryColor;
+ (id)mtui_tertiaryTextColor;
+ (id)mtui_tintColor;
+ (id)mtui_wakeColor;
+ (id)mtui_worldClockMapLandColor;

// Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer

+ (id)colorWithWebColor:(id)arg1;
+ (id)colorWithWebColorName:(id)arg1;
+ (id)colorWithWebHexTriplet:(id)arg1;
+ (id)colorWithWebRgb:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit

+ (id)ntk_wc_defaultSolarGradientColors;
+ (id)ntk_wc_sunYellowColor;

- (id)ntk_colorByBoostingSaturation:(double)arg1 lightness:(double)arg2;
- (id)ntk_colorWithLightness:(double)arg1;
- (id)ntk_colorWithMinLightness:(double)arg1;
- (id)ntk_colorWithSaturationDelta:(double)arg1 brightnessDelta:(double)arg2;

// Image: /System/Library/PrivateFrameworks/NanoWeatherKitUICompanion.framework/NanoWeatherKitUICompanion

+ (id)nwkui_colorFromHexString:(id)arg1;

- (id)nwkui_hexString;

// Image: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal

+ (id)nss_dynamicColor:(id)arg1 withDarkStyleVariant:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI

+ (id)arrayOfColors;
+ (id)nu_darkStyleDividerColor;
+ (id)nu_defaultSystemTintColor;
+ (id)nu_defaultTitleTextColor;
+ (id)nu_dividerColor;
+ (id)nu_dynamicColor:(id)arg1 withDarkStyleVariant:(id)arg2;
+ (id)nu_dynamicColor:(id)arg1 withDarkStyleVariant:(id)arg2;
+ (id)nu_lightStyleDividerColor;
+ (id)nu_safeColorForIdentifier:(id)arg1;

- (id)nu_colorToCSSRGBA;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)ICBackgroundColor;
+ (id)ICBlockQuoteBackgroundColor;
+ (id)ICDarkenedTintColor;
+ (id)ICDefaultFindBarColor;
+ (id)ICExtractedDocumentViewControllerBackgroundColor;
+ (id)ICFindInNoteHighlightColor;
+ (id)ICGrayTodoButtonColor;
+ (id)ICGrayTodoButtonHighlightColor;
+ (id)ICGroupedBackgroundColor;
+ (id)ICHashtagColor;
+ (id)ICHashtagUnconfirmedColor;
+ (id)ICLearnMoreButtonPressedColor;
+ (id)ICLearnMoreButtonUnpressedColor;
+ (id)ICLearnMoreLinkColor;
+ (id)ICLinkAcceleratorUnconfirmedColor;
+ (id)ICLinkColor;
+ (id)ICListStatusIndicatorColor;
+ (id)ICListTitleTextColor;
+ (id)ICMentionAllColor;
+ (id)ICMentionUnconfirmedColor;
+ (id)ICMonostyledBackgroundColor;
+ (id)ICMonostyledBorderColor;
+ (id)ICMoveActionBackgroundColor;
+ (id)ICNoteEditorToolbarColor;
+ (id)ICPasswordProtectActionColor;
+ (id)ICPinActionColor;
+ (id)ICSelectedAttachmentBrickHighlightColor;
+ (id)ICShareActionBackgroundColor;
+ (id)ICTintColor;
+ (id)ICTintedSelectionColor;
+ (id)ICTodoButtonAccentColor;
+ (id)ICUnknownInlineAttachmentTextColor;
+ (id)ic_attachmentBackgroundColor;
+ (id)ic_attachmentBackgroundColorForTraitCollection:(id)arg1;
+ (id)ic_colorFromString:(id)arg1;
+ (id)ic_colorWith256Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)ic_colorWith256Red:(double)arg1 green:(double)arg2 blue:(double)arg3 unitAlpha:(double)arg4;
+ (id)ic_darkerAccessibilityColorForColor:(id)arg1;
+ (id)ic_dynamicWhiteBlackColor;
+ (id)ic_imageFromColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)ic_lightAttachmentBackgroundColor;
+ (id)ic_noteEditorBackgroundColor;
+ (id)ic_noteEditorLabelColor;
+ (id)ic_noteEditorPreviewColorForceLightContent:(bool)arg1;
+ (id)ic_noteEditorSecondaryLabelColor;
+ (id)ic_notePreviewBackgroundLightContent:(bool)arg1;
+ (id)ic_notesAppYellowColor;
+ (id)ic_notesDefaultTextColor;
+ (id)ic_systemGray2Color;
+ (id)ic_systemGray3Color;
+ (id)ic_systemGray4Color;
+ (id)ic_systemGray5Color;
+ (id)icaxHueNameForValue:(double)arg1;
+ (id)preferredDefaultFontColor;

- (id)_icaxCachedApproximateColorDescription;
- (id)_icaxColorDescriptionForHue:(id)arg1 saturation:(id)arg2 lightness:(id)arg3;
- (void)_icaxSetCachedApproximateColorDescription:(id)arg1;
- (id)ic_colorBlendedWithColor:(id)arg1;
- (id)ic_colorBlendedWithColor:(id)arg1 fraction:(double)arg2;
- (id)ic_colorString;
- (bool)ic_isBlack;
- (bool)ic_isWhite;
- (id)ic_resolvedColor;
- (id)ic_resolvedColorForLightUserInterfaceStyle;
- (id)ic_resolvedColorForNoteEditor;
- (id)icaxApproximateColorDescription;
- (id)icaxDescriptionWithLuma;
- (double)icaxHue;
- (id)icaxHueName;
- (id)icaxLightnessModifier;
- (double)icaxLuma;
- (double)icaxSaturation;
- (id)icaxSaturationModifier;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tsu_darkInsertSwatchBackgroundColor;
+ (id)tsu_darkToolbarBackgroundColor;
+ (id)tsu_darkToolbarTintColor;
+ (id)tsu_darkToolbarTitleColor;
+ (id)tsu_insertPaneBackgroundColor;
+ (id)tsu_keynoteCanvasBackgroundColor;
+ (id)tsu_keynoteCanvasDarkBackgroundColor;
+ (id)tsu_keynoteNavigatorBackgroundColor;
+ (id)tsu_keynoteNavigatorDividerColor;
+ (id)tsu_lightToolbarBackgroundColor;
+ (id)tsu_mediaBrowserNavigationBarTintColor;
+ (id)tsu_mediaBrowserNavigationBarTitleColor;
+ (id)tsu_mediaBrowserPrimaryContentColor;
+ (id)tsu_mediaBrowserSecondaryContentColor;
+ (id)tsu_navigatorSelectionFocusedHighlightColor;
+ (id)tsu_navigatorSelectionHighlightColor;
+ (id)tsu_progressViewTintColor;
+ (id)tsu_progressViewTrackTintColor;
+ (id)tsu_rowItemDividersColor;
+ (id)tsu_sidebarActiveTintColor;
+ (id)tsu_sidebarBackgroundColor;
+ (id)tsu_sidebarCellBackgroundColor;
+ (id)tsu_sidebarInactiveCellTintColor;
+ (id)tsu_sidebarInactiveTintColor;
+ (id)tsu_sidebarNavigationBarBackgroundColor;
+ (id)tsu_sidebarNavigationBarTintColor;
+ (id)tsu_sidebarNavigationBarTitleColor;
+ (id)tsu_sidebarPlaybackButtonTintColor;
+ (id)tsu_sidebarPressedStateColor;
+ (id)tsu_sidebarPrimaryContentColor;
+ (id)tsu_sidebarSecondaryContentColor;
+ (id)tsu_sidebarSegmentedCellTintColor;
+ (id)tsu_sidebarSegmentedControlTintColor;
+ (id)tsu_sidebarTableViewCellTintColor;
+ (id)tsu_sidebarTopTabTextColor;
+ (id)tsu_sliderMaximumTrackTintColor;
+ (id)tsu_sliderMinimumTrackTintColor;
+ (id)tsu_sliderThumbTintColor;
+ (id)tsu_switchOffOutlineColor;
+ (id)tsu_switchOnTintColor;
+ (id)tsu_switchTintColor;
+ (id)tsu_tableViewCellDarkBlueTextColor;

// Image: /System/Library/PrivateFrameworks/PaperBoardUI.framework/PaperBoardUI

+ (id)pbui_wallpaperColorForName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

+ (id)colorWithPKColor:(id)arg1;
+ (id)pkui_blendFromColor:(id)arg1 toColor:(id)arg2 withProgress:(double)arg3;
+ (id)pkui_colorWithHexString:(id)arg1;
+ (id)pkui_osloErrorColor;

- (id)pkui_extendedLinearColor;
- (id)pkui_linearColor;

// Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus

- (bool)PG_wantsVibrancyEffect;

// Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI

+ (id)batteryBodyColor;
+ (id)batteryTextColorLowPower:(bool)arg1;
+ (id)coloredButtonTitleColor;
+ (id)defaultBottomLabelColor;
+ (id)defaultButtonColor;
+ (id)defaultButtonPressedColor;
+ (id)dimmingViewColorWithAlpha:(double)arg1;
+ (id)fingerDrawingInkColor;
+ (id)headlineColor;
+ (id)iconTintColor;
+ (id)platterContainerColor;
+ (id)platterShadowColor;
+ (id)platterStrokeColor;
+ (id)scratchpadBackgroundColor;
+ (id)scratchpadFrameColor;
+ (id)toastLabelTextColor;
+ (id)toolBackgroundColor;
+ (id)tuckViewColorTransparencyEnabled:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI

+ (id)pr_backgroundColor;
+ (id)pr_colorNamed:(id)arg1;
+ (id)pr_darkAccentColor;
+ (id)pr_lightAccentColor;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_alreadyImportedAssetSelectionColor;
+ (id)px_assetExplorerBackgroundColor;
+ (id)px_assetPlaceholderGray;
+ (id)px_colorNamed:(id)arg1;
+ (id)px_dynamicHighlightColor;
+ (id)px_messagesBubbleGray;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

- (id)pu_colorWithIncreasedAlpha;
- (id)pu_colorWithIncreasedBrightness;

// Image: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI

+ (id)appTintColor;
+ (id)artworkBorderColor;
+ (id)artworkBorderColorForDarkBackground:(bool)arg1;
+ (id)artworkBorderColorForTheme:(id)arg1;
+ (id)backgroundColor;
+ (id)backgroundColorForTheme:(id)arg1;
+ (id)barsTintColorForTheme:(id)arg1;
+ (id)blueTextColor;
+ (id)buttonBackgroundColorForDarkBackground:(bool)arg1;
+ (id)cellDetailTextColor;
+ (id)cellEmpahsisBackgroundColor;
+ (id)cellEmpahsisSwitchBorderColor;
+ (id)cellEmpahsisTextColor;
+ (id)cellHighlightedColor;
+ (id)cellSecondaryTextColor;
+ (id)cellSelectedBackgroundColor;
+ (id)cellSeparatorColor;
+ (id)cellTextColor;
+ (id)dividerColor;
+ (id)goneDarkColor;
+ (id)markPlayedGrayColor;
+ (id)markUnplayedBlueColor;
+ (id)moreBackgroundColorForTheme:(id)arg1;
+ (id)newEpisodeBackgroundColor;
+ (id)newEpisodeBorderColor;
+ (id)primaryTextColorForDarkBackground:(bool)arg1;
+ (id)primaryTextColorForTheme:(id)arg1;
+ (id)refreshControlTextColor;
+ (id)secondaryTextColorForDarkBackground:(bool)arg1;
+ (id)secondaryTextColorForTheme:(id)arg1;
+ (id)selectedBackgroundColorForTheme:(id)arg1;
+ (id)separatorColorForDarkBackground:(bool)arg1;
+ (id)separatorColorForTheme:(id)arg1;
+ (id)tintColorForTheme:(id)arg1;
+ (id)tvGutterDark;
+ (id)tvGutterLight;
+ (id)unplayedBlueColor;
+ (id)viewDarkBackgroundColor;
+ (id)viewLightBackgroundColor;

- (bool)isBlackColor;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

+ (id)pbf_randomColor;

// Image: /System/Library/PrivateFrameworks/PrivacyDisclosureUI.framework/PrivacyDisclosureUI

+ (id)pdu_colorWithString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/QuickLookUICore.framework/QuickLookUICore

+ (id)_ql_markupBackgroundColor;

// Image: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore

+ (id)ttr_systemBlueColor;
+ (id)ttr_systemBrownColor;
+ (id)ttr_systemGrayColor;
+ (id)ttr_systemGreenColor;
+ (id)ttr_systemOrangeColor;
+ (id)ttr_systemPinkColor;
+ (id)ttr_systemPurpleColor;
+ (id)ttr_systemRedColor;
+ (id)ttr_systemWhiteColor;
+ (id)ttr_systemYellowColor;

- (id)ttriAccessibilityColorDescription;

// Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI

+ (id)_remoteUI_colorWithString:(id)arg1;
+ (id)_remoteUI_colorWithString:(id)arg1 defaultColor:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

+ (id)safari_colorWithRGBColorComponents:(id)arg1;
+ (id)safari_colorWithSerializedColorData:(id)arg1;
+ (id)safari_colorWithWBSNamedColorOption:(id)arg1;

- (id)safari_colorByModifyingBrightnessByMultiplier:(double)arg1;
- (id)safari_colorDataForSerialization;
- (double)safari_contrastRatioWithColor:(id)arg1;
- (double)safari_grayscaleComponent;
- (bool)safari_isOffWhite;
- (double)safari_luminance;
- (bool)safari_meetsThresholdForDarkAppearance;
- (id)safari_rgbColorComponents;
- (id)safari_sRGBColor;
- (double)safari_saturation;

// Image: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore

+ (id)sts_colorFromHexString:(id)arg1 alpha:(double)arg2;
+ (id)sts_defaultBackgroundColor;
+ (id)sts_defaultCellPlaceholderColor;
+ (id)sts_detailViewBackgroundColor;
+ (id)sts_headerViewBackgroundColor;
+ (id)sts_headerZKWSearchButtonAndSearchTextFieldBackgroundColor;
+ (id)sts_magnifyingGlassGrayTintColor;
+ (id)sts_primaryResultTextColor;
+ (id)sts_providerImageColor;
+ (id)sts_searchBarBackgroundColor;
+ (id)sts_searchErrorTextColor;
+ (id)sts_secondaryResultTextColor;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 lightness:(double)arg3 alpha:(double)arg4;

- (void)_getHSBA:(id /* block */)arg1;
- (double)brightness;
- (bool)getHue:(double*)arg1 saturation:(double*)arg2 lightness:(double*)arg3 alpha:(double*)arg4;
- (id)hex;
- (id)initWithJSONObject:(id)arg1 andVersion:(id)arg2;
- (id)invertedBrightness;
- (id)invertedLightness;
- (id)invertedRGB;
- (double)relativeLuminance;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

+ (id)siriui_blendEffectColor;
+ (id)siriui_colorWithAceColor:(id)arg1;
+ (id)siriui_glyphColor;
+ (id)siriui_highlightColor;
+ (id)siriui_insertionPointColor;
+ (id)siriui_keylineColor;
+ (id)siriui_lightHighlightColor;
+ (id)siriui_lightInsertionPointColor;
+ (id)siriui_lightKeylineColor;
+ (id)siriui_lightMaskingColor;
+ (id)siriui_lightMaskingHighlightColor;
+ (id)siriui_lightTextColor;
+ (id)siriui_lightTextHighlightColor;
+ (id)siriui_linkTextColor;
+ (id)siriui_maskingColor;
+ (id)siriui_maskingHighlightColor;
+ (id)siriui_platterGlyphColor;
+ (id)siriui_platterInsertionPointColor;
+ (id)siriui_platterKeylineColor;
+ (id)siriui_platterLinkTextColor;
+ (id)siriui_platterMaskingColor;
+ (id)siriui_platterMaskingHighlightColor;
+ (id)siriui_platterOverlayBackgroundColor;
+ (id)siriui_platterOverlayDarkBackgroundColor;
+ (id)siriui_platterSemiTransparentTextColor;
+ (id)siriui_platterTextColor;
+ (id)siriui_platterTextHighlightColor;
+ (id)siriui_sashOverlayBackgroundColor;
+ (id)siriui_semiTransparentLightTextColor;
+ (id)siriui_semiTransparentTextColor;
+ (id)siriui_snippetBackgroundColor;
+ (id)siriui_tapToEditColor;
+ (id)siriui_tapToEditMaskingColor;
+ (id)siriui_textColor;
+ (id)siriui_textHighlightColor;
+ (id)siriui_transparantButtonColor;
+ (id)siriui_transparantHighlightedButtonColor;

// Image: /System/Library/PrivateFrameworks/SleepHealthUI.framework/SleepHealthUI

+ (id)hkshui_batteryColorForFillFraction:(double)arg1;
+ (id)hkshui_lowBatteryColor;
+ (id)hkshui_lowPowerModeColor;
+ (id)hkshui_normalBatteryColor;
+ (id)hkshui_sleepModeButtonSelectedColor;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

+ (id)sb_colorWithRGBHexString:(id)arg1;

- (bool)SBPIP_wantsVibrancyEffect;
- (id)sb_RGBHexString;

// Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome

- (double)sbh_colorfulness;
- (bool)sbh_isGrayscale;
- (double)sbh_perceivedLightness;

// Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices

+ (id)sbui_inactiveTextColor;
+ (id)sbui_randomColor;
+ (id)sbui_systemColorNamed:(id)arg1;

- (double)sb_brightness;
- (bool)sb_isGrayscale;

// Image: /System/Library/PrivateFrameworks/StocksUI.framework/StocksUI

+ (double)colorComponentLuminance:(double)arg1;

- (double)defaultBrightnessAdjustment;
- (double)relativeLuminance;
- (id)stocksAccessibilityAdjustedDarkerForIncreaseContrast;
- (id)stocksAccessibilityAdjustedForIncreaseContrast;
- (id)stocksAccessibilityAdjustedForIncreaseContrastAdjustingDarker:(bool)arg1;
- (id)stocksAccessibilityAdjustedForIncreaseContrastAgainstWithBackgroundColor:(id)arg1;
- (id)stocksAccessibilityAdjustedLighterForIncreaseContrast;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

- (bool)skui_isOpaque;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

+ (id)tsk_segmentedControlTintColor;
+ (id)tsk_sheetBackgroundColor;

- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (id)checkerboardColorWithColor:(id)arg1 andColor:(id)arg2 squareSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)grayCheckerboardColor;
+ (id)tableViewCellDarkBlueTextColor;
+ (id)transparentGrayCheckerboardColor;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

+ (id)tv_opacityColorForType:(long long)arg1 userInterfaceStyle:(long long)arg2;
+ (id)tvmlkit_keyColor;

- (id)blendWithColor:(id)arg1 percentage:(double)arg2;

// Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI

+ (id)ts_activityIndicatorColor;
+ (id)ts_dynamicColor:(id)arg1 withDarkStyleVariant:(id)arg2;
+ (id)ts_systemDarkTealColor;
+ (id)ts_tableCellDefaultSelectionTintColor;

- (double)ts_luminance;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

+ (id)_tp_bluePillColor;
+ (id)_tp_defaultPillColor;
+ (id)_tp_greenPillColor;
+ (id)dynamicBackgroundColor;
+ (id)dynamicCarFocusedColor;
+ (id)dynamicCarFocusedLabelColor;
+ (id)dynamicCarFocusedPrimaryLabelColor;
+ (id)dynamicCarFocusedSecondaryLabelColor;
+ (id)dynamicCarPrimaryColor;
+ (id)dynamicCarQuaternaryColor;
+ (id)dynamicCarSecondaryColor;
+ (id)dynamicCarTertiaryColor;
+ (id)dynamicLabelColor;
+ (id)dynamicQuaternaryLabelColor;
+ (id)dynamicSecondaryLabelColor;
+ (id)dynamicTertiaryLabelColor;

- (id)colorByAlteringOpacityToPercentage:(float)arg1;
- (id)darkerColorByPercentage:(float)arg1;
- (id)tpImageFromColor;

// Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore

+ (id)dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2;
+ (id)dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2 darkHighContrastColor:(id)arg3;
+ (id)dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2 lightHighContrastColor:(id)arg3;
+ (id)dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2 lightHighContrastColor:(id)arg3 darkHighContrastColor:(id)arg4;

// Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML

+ (void)initializeJSContext:(id)arg1;

- (id)CGColorRef;
- (id)image;

// Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI

+ (id)vsa_dynamicColorWithLightStyleColor:(id)arg1 darkStyleColor:(id)arg2;
+ (id)vsa_opacityADarkColor;
+ (id)vsa_opacityADynamicColor;
+ (id)vsa_opacityALightColor;
+ (id)vsa_opacityBDarkColor;
+ (id)vsa_opacityBDynamicColor;
+ (id)vsa_opacityBLightColor;
+ (id)vsa_opacityCDarkColor;
+ (id)vsa_opacityCDynamicColor;
+ (id)vsa_opacityCLightColor;
+ (id)vsa_primaryBackgroundColor;
+ (id)vsa_primaryFillColor;
+ (id)vsa_primaryLabelColor;
+ (id)vsa_quaternaryLabelColor;
+ (id)vsa_secondaryBackgroundColor;
+ (id)vsa_secondaryFillColor;
+ (id)vsa_secondaryLabelColor;
+ (id)vsa_tertiaryBackgroundColor;
+ (id)vsa_tertiaryFillColor;
+ (id)vsa_tertiaryLabelColor;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

+ (id)vui_dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2;
+ (id)vui_imageBorderColor;
+ (id)vui_imageHighlightColor;
+ (id)vui_keyBlueHighlightedColor;
+ (id)vui_keyColor;
+ (id)vui_opacityColorWithType:(long long)arg1;
+ (id)vui_opacityColorWithType:(long long)arg1 userInterfaceStyle:(long long)arg2;
+ (id)vui_opaqueSeparatorColor;
+ (id)vui_primaryDynamicBackgroundColor;
+ (id)vui_primaryTextColor;
+ (id)vui_progressBarFillColor;
+ (id)vui_secondaryDynamicBackgroundColor;
+ (id)vui_secondaryTextColor;
+ (id)vui_separatorColor;
+ (id)vui_systemLightGrayColor;
+ (id)vui_tertiaryDynamicBackgroundColor;
+ (id)vui_tertiaryFillColor;
+ (id)vui_windowBackgroundColor;

- (id)vui_blendWithColor:(id)arg1 percentage:(double)arg2;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

+ (id)vk_randomColor;

- (id)vk_colorWith20PercentOpacity;
- (id)vk_colorWith40PercentOpacity;
- (id)vk_colorWith60PercentOpacity;
- (id)vk_colorWith80PercentOpacity;
- (id)vk_colorWithMaxSaturation;
- (id)vk_resolvedColor;

// Image: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit

+ (id)wk_colorWithHexString:(id)arg1;

- (id)wk_colorHexString;
- (id)wk_interpolatedToColor:(id)arg1 progress:(double)arg2;

// Image: /System/Library/PrivateFrameworks/Weather.framework/Weather

+ (id)wa_colorFromHexString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI

+ (id)altTextColor;
+ (id)defaultBgColor;
+ (id)defaultTextColor;
+ (id)listPlatterBgColor;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

+ (id)wf_actionDrawerBackgroundColor;
+ (id)wf_actionDrawerSuggestionImageBackgroundColor;
+ (id)wf_galleryModuleConnectionColor;
+ (id)wf_moduleBorderColor;
+ (id)wf_moduleCellBorderColor;
+ (id)wf_moduleCellColor;
+ (id)wf_moduleCellHighlightedColor;
+ (id)wf_moduleCellRunningColor;
+ (id)wf_moduleCellRunningShadowColor;
+ (id)wf_moduleCellShadowColor;
+ (id)wf_moduleCellTitleColor;
+ (id)wf_moduleCommentCellColor;
+ (id)wf_moduleCommentHeadingButtonColor;
+ (id)wf_moduleCommentParametersBackgroundColor;
+ (id)wf_moduleCommentParametersSeparatorColor;
+ (id)wf_moduleConnectionColor;
+ (id)wf_moduleHeadingButtonColor;
+ (id)wf_moduleSeparatorColor;
+ (id)wf_moduleTintColor;
+ (id)wf_moduleWarningBackgroundColor;
+ (id)wf_moduleWarningTitleColor;
+ (id)wf_modulesViewBodyButtonBackgroundColor;
+ (id)wf_slotTemplateSlotBackgroundColorWithTintColor:(id)arg1;
+ (id)wf_slotTemplateSlotDisabledBackgroundColor;
+ (id)wf_slotTemplateSlotDisabledTitleColor;
+ (id)wf_slotTemplateSlotErrorBackgroundColor;
+ (id)wf_slotTemplateSlotErrorHighlightedBackgroundColor;
+ (id)wf_slotTemplateSlotErrorHighlightedTitleColor;
+ (id)wf_slotTemplateSlotErrorSelectedBackgroundColor;
+ (id)wf_slotTemplateSlotErrorSelectedTitleColor;
+ (id)wf_slotTemplateSlotErrorTitleColor;
+ (id)wf_slotTemplateSlotHighlightedBackgroundColorWithTintColor:(id)arg1;
+ (id)wf_slotTemplateSlotHighlightedTitleColorWithTintColor:(id)arg1;
+ (id)wf_slotTemplateSlotRunningBackgroundColor;
+ (id)wf_slotTemplateSlotRunningTitleColor;
+ (id)wf_slotTemplateSlotSelectedBackgroundColorWithTintColor:(id)arg1;
+ (id)wf_slotTemplateSlotSelectedTitleColorWithTintColor:(id)arg1;
+ (id)wf_slotTemplateSlotTitleColorWithTintColor:(id)arg1;
+ (id)wf_slotTemplateSlotTypingBackgroundColor;
+ (id)wf_slotTemplateSlotTypingTitleColor;
+ (id)wf_workflowEditorColorNamed:(id)arg1;

- (id)wf_desaturatedColorWithMagnitude:(double)arg1;
- (id)wf_disabledColor;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

+ (id)settingsCellDetailTextColor;
+ (id)wf_actionDescriptionColor;
+ (id)wf_galleryBackgroundColor;
+ (id)wf_gallerySearchCollectionColor;
+ (id)wf_gallerySearchCollectionHighlightedColor;
+ (id)wf_gallerySearchSectionHeaderButtonColor;
+ (id)wf_gallerySearchSectionHeaderColor;
+ (id)wf_homeTintColor;
+ (id)wf_libraryCellSelectionColor;
+ (id)wf_settingsBackgroundColor;
+ (id)wf_settingsCellColor;
+ (id)wf_settingsHeaderFooterColor;
+ (id)wf_tableCellDefaultSelectionTintColor;
+ (id)wf_usableColorWithPaletteColor:(unsigned long long)arg1;
+ (id)wf_wizardBackgroundColor;
+ (id)wf_workflowWizardRecordButtonColor;

// Image: /System/Library/PrivateFrameworks/WorkflowUICore.framework/WorkflowUICore

+ (id)wf_accentColor;
+ (id)wf_labelColor;
+ (id)wf_linkColor;
+ (id)wf_opaqueSeparatorColor;
+ (id)wf_placeholderTextColor;
+ (id)wf_quaternaryLabelColor;
+ (id)wf_quaternarySystemFillColor;
+ (id)wf_secondaryLabelColor;
+ (id)wf_secondarySystemBackgroundColor;
+ (id)wf_secondarySystemFillColor;
+ (id)wf_secondarySystemGroupedBackgroundColor;
+ (id)wf_separatorColor;
+ (id)wf_systemBackgroundColor;
+ (id)wf_systemBlueColor;
+ (id)wf_systemFillColor;
+ (id)wf_systemGray2Color;
+ (id)wf_systemGray3Color;
+ (id)wf_systemGray4Color;
+ (id)wf_systemGray5Color;
+ (id)wf_systemGray6Color;
+ (id)wf_systemGrayColor;
+ (id)wf_systemGreenColor;
+ (id)wf_systemGroupedBackgroundColor;
+ (id)wf_systemIndigoColor;
+ (id)wf_systemOrangeColor;
+ (id)wf_systemPinkColor;
+ (id)wf_systemPurpleColor;
+ (id)wf_systemRedColor;
+ (id)wf_systemTealColor;
+ (id)wf_systemYellowColor;
+ (id)wf_tertiaryLabelColor;
+ (id)wf_tertiarySystemBackgroundColor;
+ (id)wf_tertiarySystemFillColor;
+ (id)wf_tertiarySystemGroupedBackgroundColor;

// Image: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices

+ (id)wf_colorNamed:(id)arg1 inBundle:(id)arg2;
+ (id)wf_defaultWidgetConfigurationCardBackgroundColor;

// Image: /System/Library/PrivateFrameworks/WorkoutUI.framework/WorkoutUI

+ (id)drewGradientColorActive;
+ (id)drewGradientColorInactive;
+ (id)drewPlatterGradientColorsWithActiveAppearance:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI

+ (id)icqui_colorWithHexString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

+ (id)colorWithStyleString:(id)arg1;

- (id)initWithStyleString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

+ (id)tsu_insertPaneBackgroundColor;
+ (id)tsu_keynoteCanvasBackgroundColor;
+ (id)tsu_keynoteCanvasDarkBackgroundColor;
+ (id)tsu_keynoteNavigationBarBackgroundColor;
+ (id)tsu_keynoteNavigatorBackgroundColor;
+ (id)tsu_keynoteNavigatorDividerColor;
+ (id)tsu_mediaBrowserChickletDarkColor;
+ (id)tsu_mediaBrowserChickletLightColor;
+ (id)tsu_mediaBrowserChickletTitleDarkColor;
+ (id)tsu_mediaBrowserChickletTitleLightColor;
+ (id)tsu_mediaBrowserNavigationBarTintColor;
+ (id)tsu_mediaBrowserNavigationBarTitleColor;
+ (id)tsu_mediaBrowserPrimaryContentColor;
+ (id)tsu_mediaBrowserSecondaryContentColor;
+ (id)tsu_navigatorSelectionFocusedHighlightColor;
+ (id)tsu_navigatorSelectionHighlightColor;
+ (id)tsu_rowItemDividersColor;
+ (id)tsu_sidebarActiveTintColor;
+ (id)tsu_sidebarBackgroundColor;
+ (id)tsu_sidebarCellBackgroundColor;
+ (id)tsu_sidebarHighContrastBackgroundColor;
+ (id)tsu_sidebarInactiveCellTintColor;
+ (id)tsu_sidebarInactiveTintColor;
+ (id)tsu_sidebarNavigationBarBackgroundColor;
+ (id)tsu_sidebarNavigationBarTintColor;
+ (id)tsu_sidebarNavigationBarTitleColor;
+ (id)tsu_sidebarPlaybackButtonTintColor;
+ (id)tsu_sidebarPopoverDimmingColor;
+ (id)tsu_sidebarPressedStateColor;
+ (id)tsu_sidebarPrimaryContentColor;
+ (id)tsu_sidebarSecondaryContentColor;
+ (id)tsu_sidebarSegmentedCellTintColor;
+ (id)tsu_sidebarSegmentedControlTintColor;
+ (id)tsu_sidebarTableViewCellTintColor;
+ (id)tsu_sidebarTopTabTextColor;
+ (id)tsu_sliderMaximumTrackTintColor;
+ (id)tsu_sliderMinimumTrackTintColor;
+ (id)tsu_sliderThumbTintColor;
+ (id)tsu_styleUpdateButton6ptBlackColor;
+ (id)tsu_styleUpdateButtonDarkColor;
+ (id)tsu_styleUpdateButtonLightColor;
+ (id)tsu_switchOffOutlineColor;
+ (id)tsu_switchOnTintColor;
+ (id)tsu_switchTintColor;
+ (id)tsu_tableViewCellDarkBlueTextColor;

@end
