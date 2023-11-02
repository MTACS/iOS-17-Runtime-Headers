
@interface VNCoreSceneUnderstandingCompoundRequest : VNCompoundRequest {
    VNCoreSceneUnderstandingCompoundRequestDetectorConfiguration * _detectorConfiguration;
}

+ (void)_evaluateOriginalVN5kJNH3eYuyaLxNpZr5Z7zi:(id)arg1 configurations:(id)arg2;
+ (void)_evaluateOriginalVN6Mb1ME89lyW3HpahkEygIG:(id)arg1 configurations:(id)arg2;
+ (void)_evaluateOriginalVNClassifyCityNatureImageRequest:(id)arg1 configurations:(id)arg2;
+ (void)_evaluateOriginalVNClassifyImageAestheticsRequest:(id)arg1 configurations:(id)arg2;
+ (void)_evaluateOriginalVNClassifyImageRequest:(id)arg1 configurations:(id)arg2;
+ (void)_evaluateOriginalVNClassifyJunkImageRequest:(id)arg1 configurations:(id)arg2;
+ (void)_evaluateOriginalVNCreateImageFingerprintsRequest:(id)arg1 configurations:(id)arg2;
+ (void)_evaluateOriginalVNCreateSceneprintRequest:(id)arg1 configurations:(id)arg2;
+ (void)_evaluateOriginalVNGenerateAttentionBasedSaliencyImageRequest:(id)arg1 configurations:(id)arg2;
+ (void)_evaluateOriginalVNGenerateImageFeaturePrintRequest:(id)arg1 configurations:(id)arg2;
+ (void)_evaluateOriginalVNGenerateObjectnessBasedSaliencyImageRequest:(id)arg1 configurations:(id)arg2;
+ (void)_evaluateOriginalVNRecognizeObjectsRequest:(id)arg1 configurations:(id)arg2;
+ (void)_evaluateOriginalVNSceneClassificationRequest:(id)arg1 configurations:(id)arg2;
+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id*)arg3;
+ (Class)configurationClass;

- (void).cxx_destruct;
- (bool)allowsCachingOfResults;
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (id)initWithDetectorType:(id)arg1 configuration:(id)arg2;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;

@end
