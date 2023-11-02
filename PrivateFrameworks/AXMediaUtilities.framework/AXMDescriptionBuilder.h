
@interface AXMDescriptionBuilder : NSObject {
    AXMVisionFeature * _blurFeature;
    AXMVisionFeature * _brightnessFeature;
    long long  _builderOptions;
    AXMVisionFeature * _captionFeature;
    NSMutableDictionary * _classificationLabelsToLocValuesMap;
    NSMutableArray * _faceFeatures;
    NSMutableArray * _iconClassFeatures;
    bool  _isNSFW;
    NSMutableArray * _mediaAnalysisFaceFeatures;
    AXMVisionFeature * _mediaAnalysisImageCaptionFeature;
    AXMVisionFeature * _primarySensitiveContentFeature;
    bool  _shouldModifyCaptionForSensitiveContent;
    NSMutableString * _speakableDescription;
    NSMutableString * _visualDescription;
}

@property (nonatomic, retain) AXMVisionFeature *blurFeature;
@property (nonatomic, retain) AXMVisionFeature *brightnessFeature;
@property (nonatomic) bool isNSFW;
@property (nonatomic, retain) AXMVisionFeature *primarySensitiveContentFeature;
@property (nonatomic) bool shouldModifyCaptionForSensitiveContent;

+ (id)builderWithOptions:(long long)arg1;

- (void).cxx_destruct;
- (void)_addBlurInformationToDescription:(id)arg1;
- (void)_addBrightnessInformationToDescription:(id)arg1;
- (void)_addCaptionInformationToDescription:(id)arg1 didConsumeDetectedFaceInfo:(bool*)arg2;
- (void)_addClassificationInformationToDescription:(id)arg1;
- (void)_addDetailedFaceInformationToDescription:(id)arg1;
- (void)_addFaceInformationToDescription:(id)arg1;
- (void)_addGenericTemplateForCaptionInformationToDescription:(id)arg1;
- (void)_addIconClassInformationToDescription:(id)arg1;
- (void)_addPersonSummaryToDescription:(id)arg1;
- (void)_appendPauseType:(long long)arg1 toDescriptionIfNeeded:(id)arg2;
- (void)_appendToDescription:(id)arg1 afterPauseType:(long long)arg2 withContents:(id)arg3;
- (id)_ignoredTagsForTags:(id)arg1;
- (id)_initWithOptions:(long long)arg1;
- (id)_knownPersonNames;
- (bool)_shouldPersonalizeCaptionWithKnownPeople;
- (bool)_shouldReplaceCaptionWithGenericTemplate;
- (bool)_shouldSummarizeDetectedPeople;
- (id)_stringForPauseType:(long long)arg1;
- (id)_subsumedTagsForTags:(id)arg1;
- (id)_templateRulesForTag:(id)arg1;
- (bool)_usesTemplateForLowConfidenceAndExplicitFeatures;
- (void)addDetectedClassificationFeatures:(id)arg1;
- (void)addDetectedClassificationLocalizedValue:(id)arg1 forLabel:(id)arg2;
- (void)addDetectedFaces:(id)arg1;
- (void)addDetectedIconClasses:(id)arg1;
- (void)addMediaAnalysisDetectedFaces:(id)arg1;
- (id)blurFeature;
- (id)brightnessFeature;
- (id)buildSpeakableDescription;
- (id)buildVisualDescription;
- (bool)isNSFW;
- (id)primarySensitiveContentFeature;
- (void)setBlurFeature:(id)arg1;
- (void)setBrightnessFeature:(id)arg1;
- (void)setDetectedCaption:(id)arg1;
- (void)setIsNSFW:(bool)arg1;
- (void)setMediaAnalysisDetectedImageCaption:(id)arg1;
- (void)setPrimarySensitiveContentFeature:(id)arg1;
- (void)setShouldModifyCaptionForSensitiveContent:(bool)arg1;
- (bool)shouldModifyCaptionForSensitiveContent;

@end
