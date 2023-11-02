
@interface PVHostApplicationDelegateHandler : NSObject <PVHostApplicationDelegate> {
    bool  _cacheDelegateResponses;
    <PVHostApplicationDelegate> * _hostApplicationDelegate;
}

@property (nonatomic) bool cacheDelegateResponses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <PVHostApplicationDelegate> *hostApplicationDelegate;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)cacheDelegateResponses;
- (id)effectTemplatesBundle;
- (id)effectTemplatesDirectoryName;
- (unsigned int)getMaxGlyphResolution;
- (unsigned int)getNumberOfLinesToLimitTextTo;
- (id)hostApplicationDelegate;
- (id)init;
- (id)preferredDisplayColorSpace;
- (id)preferredExportColorSpace;
- (void)setCacheDelegateResponses:(bool)arg1;
- (void)setHostApplicationDelegate:(id)arg1;
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
