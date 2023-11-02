
@interface AXMMediaAnalysisCaptionDetectorNode : AXMEvaluationNode {
    AXMLanguageTranslator * _languageTranslator;
    AXMMediaAnalysisSceneDetectorNode * _sceneDetector;
}

@property (nonatomic) AXMMediaAnalysisSceneDetectorNode *sceneDetector;

+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (void)_addCaptionFeaturesToContext:(id)arg1 metrics:(id)arg2 fromResult:(id)arg3;
- (id)_captionsFromAnalysis:(id)arg1 forType:(unsigned long long)arg2;
- (id)_mediaAnalysisCaptionResultForPHAssetsFromAnalysis:(id)arg1;
- (id)_mediaAnalysisCaptionResultFromResults:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluate:(id)arg1 metrics:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)requiresVisionFramework;
- (id)sceneDetector;
- (void)setSceneDetector:(id)arg1;
- (id)translatedTextForCaption:(id)arg1 withContext:(id)arg2 metrics:(id)arg3;

@end
