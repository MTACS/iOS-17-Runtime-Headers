
@interface PISemanticEnhanceAdjustmentController : PIAdjustmentController

@property (nonatomic, readonly, copy) NSArray *boundingBoxes;
@property (nonatomic) double intensity;
@property (nonatomic, readonly) long long scene;
@property (nonatomic, readonly) double sceneConfidence;

+ (id)boundingBoxesKey;
+ (id)faceBoundingBoxesKey;
+ (id)genericLandscapeSceneLabel;
+ (id)intensityKey;
+ (id)platedFoodSceneLabel;
+ (id)sceneConfidenceKey;
+ (id)sceneLabelKey;
+ (id)sunriseSunsetSceneLabel;

- (id)boundingBoxes;
- (double)intensity;
- (bool)isSettingEqual:(id)arg1 forKey:(id)arg2;
- (long long)scene;
- (double)sceneConfidence;
- (void)setBoundingBoxesFromObservations:(id)arg1 orientation:(long long)arg2;
- (void)setFaceBoundingBoxesFromObservations:(id)arg1 orientation:(long long)arg2;
- (void)setIntensity:(double)arg1;
- (void)setScene:(long long)arg1 confidence:(double)arg2;

@end
