
@interface AXMMediaAnalysisTextDetectorNode : AXMEvaluationNode {
    AXMSemanticTextFactory * _semanticTextFactory;
    AXMTextSpecialCase * _specialCaseManager;
    AXMTextLayoutManager * _textLayoutManager;
}

@property (nonatomic, retain) AXMSemanticTextFactory *semanticTextFactory;
@property (nonatomic, retain) AXMTextSpecialCase *specialCaseManager;
@property (nonatomic, retain) AXMTextLayoutManager *textLayoutManager;

+ (bool)isSupported;
+ (long long)recognitionLevelFromOptions:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (id)_sequencesForObservations:(id)arg1 canvasSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_textDetectionOptions:(id)arg1;
- (double)detectTextSkew:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluate:(id)arg1 metrics:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)requiresVisionFramework;
- (id)semanticTextFactory;
- (void)setSemanticTextFactory:(id)arg1;
- (void)setSpecialCaseManager:(id)arg1;
- (void)setTextLayoutManager:(id)arg1;
- (id)specialCaseManager;
- (id)textLayoutManager;

@end
