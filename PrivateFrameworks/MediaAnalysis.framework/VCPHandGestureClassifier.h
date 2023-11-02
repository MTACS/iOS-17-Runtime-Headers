
@interface VCPHandGestureClassifier : NSObject {
    VCPCoreMLFeatureProviderGestureVideo * _featureProvider;
    VCPCoreMLRequest * _gestureCoreMLRequest;
    float  _minHandSize;
    VCPHandGestureMitigator * _mitigator;
}

+ (float)enableFlip;
+ (id)twoHandGestureTypes;

- (void).cxx_destruct;
- (id)existingGroupIDs;
- (id)init;
- (id)initWithMinHandSize:(float)arg1;
- (int)processLeftHand:(id)arg1 rightHand:(id)arg2 results:(id)arg3 resultsFlip:(id)arg4 faceRects:(id)arg5;
- (int)processPerson:(int)arg1 withObservations:(id)arg2 andFaceRects:(id)arg3;
- (void)reset;
- (int)rotationInDegrees;
- (void)setHandGestureForHand:(id)arg1 withResult:(id)arg2 andMapping:(id)arg3;
- (void)setRotationInDegrees:(int)arg1;

@end
