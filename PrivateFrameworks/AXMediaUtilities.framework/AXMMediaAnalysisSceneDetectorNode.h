
@interface AXMMediaAnalysisSceneDetectorNode : AXMEvaluationNode {
    MADVISceneClassificationRequest * __sceneClassificationRequest;
    unsigned int  _taxonomyOptions;
}

@property (setter=_setSceneClassificationRequest:, nonatomic, retain) MADVISceneClassificationRequest *_sceneClassificationRequest;
@property (nonatomic) unsigned int taxonomyOptions;

+ (bool)addNSFWResultToContext:(id)arg1 forIdentifier:(id)arg2 confidence:(double)arg3 markAsSensitiveCaptionContent:(bool)arg4;
+ (bool)addSignificantEventResultToContext:(id)arg1 forIdentifier:(id)arg2 confidence:(double)arg3 markAsSensitiveCaptionContent:(bool)arg4;
+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (void)_addNSFWClassificationObservations:(id)arg1 toContext:(id)arg2;
- (void)_addRecognizedObjectObservations:(id)arg1 toContext:(id)arg2;
- (void)_addSaliencyImageObservations:(id)arg1 toContext:(id)arg2;
- (void)_addSceneClassificationObservations:(id)arg1 toContext:(id)arg2;
- (void)_addSceneDetectorFeaturesToContext:(id)arg1 fromResults:(id)arg2;
- (void)_addSignificantEventClassificationObservations:(id)arg1 toContext:(id)arg2;
- (id)_sceneClassificationRequest;
- (void)_setSceneClassificationRequest:(id)arg1;
- (bool)_shouldIncludeSceneLabelForOCRDocumenTypeDetection:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluate:(id)arg1 metrics:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)requiresVisionFramework;
- (void)setTaxonomyOptions:(unsigned int)arg1;
- (unsigned int)taxonomyOptions;

@end
