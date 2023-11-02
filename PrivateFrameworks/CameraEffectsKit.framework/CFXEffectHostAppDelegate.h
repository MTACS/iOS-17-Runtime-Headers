
@interface CFXEffectHostAppDelegate : NSObject <PVHostApplicationDelegate> {
    <PVHostApplicationDelegate> * _colorSpaceDelegate;
}

@property <PVHostApplicationDelegate> *colorSpaceDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)colorSpaceDelegate;
- (id)effectTemplatesBundle;
- (id)effectTemplatesDirectoryName;
- (unsigned int)getMaxGlyphResolution;
- (unsigned int)getNumberOfLinesToLimitTextTo;
- (id)preferredDisplayColorSpace;
- (id)preferredExportColorSpace;
- (void)setColorSpaceDelegate:(id)arg1;
- (bool)wantsDynamicLineSpacingForDiacritics;
- (bool)wantsExtraLineSpacingForDiacritics;
- (bool)wantsToAdjustTextBoundsHeightUsingCapHeight;
- (bool)wantsToAssertThatLoadedSceneHasAnimateFlagDisabled;
- (bool)wantsToAssertThatTopLevelGroupSpansEntireScene;
- (bool)wantsToCacheTopLevelGroupRender;
- (bool)wantsToComputeTypographicHeightWithoutLastLineLeading;
- (bool)wantsToDownscaleGlyphsToOutputSize;
- (bool)wantsToIgnoreTextBoundsOfNewlinesOfTranscriptions;
- (bool)wantsToIgnoreTextBoundsOfTransparentObjects;
- (bool)wantsToImproveQualityOfDraftQualityText;
- (bool)wantsToIncludeSubstituteFontNameInAttributedString;
- (bool)wantsToIncludeTrackingValueInAttributedString;
- (bool)wantsToLimitLinesOfText;
- (bool)wantsToScaleEmojiToCapHeight;
- (bool)wantsToSetTranscriptionsUsingArray;
- (bool)wantsToSkipSuggestedLineBreaksInParagraphLayout;
- (bool)wantsToUseBinarySearchForScalingToBothMargins;
- (bool)wantsToUseCachedTextureForText;

@end
