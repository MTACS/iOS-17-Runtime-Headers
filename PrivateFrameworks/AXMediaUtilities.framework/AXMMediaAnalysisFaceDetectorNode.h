
@interface AXMMediaAnalysisFaceDetectorNode : AXMEvaluationNode {
    AXMVisionFaceNameHelper * __faceNameHelper;
}

@property (nonatomic, retain) AXMVisionFaceNameHelper *_faceNameHelper;

+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (void)_addFaceDetectionFeaturesToContext:(id)arg1 fromResults:(id)arg2;
- (id)_faceNameHelper;
- (id)_faceResultForUUID:(id)arg1 inFaceDictionary:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluate:(id)arg1 metrics:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)requiresVisionFramework;
- (void)set_faceNameHelper:(id)arg1;

@end
