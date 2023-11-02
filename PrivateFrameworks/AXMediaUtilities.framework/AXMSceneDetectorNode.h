
@interface AXMSceneDetectorNode : AXMEvaluationNode {
    VNSceneClassificationRequest * __sceneClassificationRequest;
    unsigned int  _taxonomyOptions;
}

@property (setter=_setSceneClassificationRequest:, nonatomic, retain) VNSceneClassificationRequest *_sceneClassificationRequest;
@property (nonatomic) unsigned int taxonomyOptions;

+ (bool)isSupported;
+ (id)possibleSceneClassifications;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (id)_sceneClassificationRequest;
- (void)_setSceneClassificationRequest:(id)arg1;
- (bool)_shouldIncludeSceneLabelForOCRDocumenTypeDetection:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluate:(id)arg1 metrics:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setTaxonomyOptions:(unsigned int)arg1;
- (unsigned int)taxonomyOptions;
- (bool)validateVisionKitSoftLinkSymbols;

@end
