
@protocol PVHostApplicationDelegate <NSObject>

@optional

- (NSBundle *)effectTemplatesBundle;
- (NSString *)effectTemplatesDirectoryName;
- (unsigned int)getMaxGlyphResolution;
- (unsigned int)getNumberOfLinesToLimitTextTo;
- (PVColorSpace *)preferredDisplayColorSpace;
- (PVColorSpace *)preferredExportColorSpace;
- (bool)wantsDynamicLineSpacingForDiacritics;
- (bool)wantsExtraLineSpacingForDiacritics;
- (bool)wantsSameAlignmentForAllLinesOfText;
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
- (bool)wantsToIncludeTrailingWhitespaceInParagraphLineWidth;
- (bool)wantsToLimitLinesOfText;
- (bool)wantsToScaleEmojiToCapHeight;
- (bool)wantsToSetTranscriptionsUsingArray;
- (bool)wantsToSkipSuggestedLineBreaksInParagraphLayout;
- (bool)wantsToUseBinarySearchForScalingToBothMargins;
- (bool)wantsToUseCachedTextureForText;

@end
