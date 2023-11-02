
@interface AXMTextDetectorNode : AXMEvaluationNode <NSSecureCoding> {
    NSArray * _sceneLabelsForOCRDocumentTypeDetection;
    AXMSemanticTextFactory * _semanticTextFactory;
    AXMTextSpecialCase * _specialCaseManager;
    AXMTextLayoutManager * _textLayoutManager;
}

@property (nonatomic, retain) NSArray *sceneLabelsForOCRDocumentTypeDetection;
@property (nonatomic, retain) AXMSemanticTextFactory *semanticTextFactory;
@property (nonatomic, retain) AXMTextSpecialCase *specialCaseManager;
@property (nonatomic, retain) AXMTextLayoutManager *textLayoutManager;

+ (id)effectiveLanguagesFromOptions:(id)arg1;
+ (id)filterPreferredDetectionLanguages:(id)arg1 withSupportedDetectionLanguages:(id)arg2;
+ (bool)isSupported;
+ (long long)recognitionLevelFromOptions:(id)arg1;
+ (id)supportedDetectionLanguagesForLevel:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)textDetectionLanguagesFromOptions:(id)arg1;
+ (id)title;

- (void).cxx_destruct;
- (id)_sequencesForObservations:(id)arg1 canvasSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_textDetectionOptions:(id)arg1;
- (double)detectTextSkew:(id)arg1;
- (void)evaluate:(id)arg1 metrics:(id)arg2;
- (void)nodeInitialize;
- (bool)requiresVisionFramework;
- (id)sceneLabelsForOCRDocumentTypeDetection;
- (id)semanticTextFactory;
- (void)setSceneLabelsForOCRDocumentTypeDetection:(id)arg1;
- (void)setSemanticTextFactory:(id)arg1;
- (void)setSpecialCaseManager:(id)arg1;
- (void)setTextLayoutManager:(id)arg1;
- (bool)shouldEvaluate:(id)arg1;
- (id)specialCaseManager;
- (id)textLayoutManager;
- (bool)validateVisionKitSoftLinkSymbols;

@end
