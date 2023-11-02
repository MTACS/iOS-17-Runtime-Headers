
@interface PHAssetAestheticProperties : PHAssetPropertySet {
    float  _failureScore;
    float  _harmoniousColorScore;
    float  _immersivenessScore;
    float  _interestingSubjectScore;
    float  _intrusiveObjectPresenceScore;
    float  _livelyColorScore;
    float  _lowLight;
    float  _noiseScore;
    float  _pleasantCameraTiltScore;
    float  _pleasantCompositionScore;
    float  _pleasantLightingScore;
    float  _pleasantPatternScore;
    float  _pleasantPerspectiveScore;
    float  _pleasantPostProcessingScore;
    float  _pleasantReflectionsScore;
    float  _pleasantSymmetryScore;
    float  _sharplyFocusedSubjectScore;
    float  _tastefullyBlurredScore;
    float  _wellChosenSubjectScore;
    float  _wellFramedSubjectScore;
    float  _wellTimedShotScore;
}

@property (nonatomic, readonly) float failureScore;
@property (nonatomic, readonly) float harmoniousColorScore;
@property (nonatomic, readonly) float immersivenessScore;
@property (nonatomic, readonly) float interestingSubjectScore;
@property (nonatomic, readonly) float intrusiveObjectPresenceScore;
@property (nonatomic, readonly) float livelyColorScore;
@property (nonatomic, readonly) float lowLight;
@property (nonatomic, readonly) float noiseScore;
@property (nonatomic, readonly) float pleasantCameraTiltScore;
@property (nonatomic, readonly) float pleasantCompositionScore;
@property (nonatomic, readonly) float pleasantLightingScore;
@property (nonatomic, readonly) float pleasantPatternScore;
@property (nonatomic, readonly) float pleasantPerspectiveScore;
@property (nonatomic, readonly) float pleasantPostProcessingScore;
@property (nonatomic, readonly) float pleasantReflectionsScore;
@property (nonatomic, readonly) float pleasantSymmetryScore;
@property (nonatomic, readonly) float sharplyFocusedSubjectScore;
@property (nonatomic, readonly) float tastefullyBlurredScore;
@property (nonatomic, readonly) float wellChosenSubjectScore;
@property (nonatomic, readonly) float wellFramedSubjectScore;
@property (nonatomic, readonly) float wellTimedShotScore;

+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;

- (float)failureScore;
- (float)harmoniousColorScore;
- (float)immersivenessScore;
- (void)initWithDefaultValues;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (float)interestingSubjectScore;
- (float)intrusiveObjectPresenceScore;
- (float)livelyColorScore;
- (float)lowLight;
- (float)noiseScore;
- (float)pleasantCameraTiltScore;
- (float)pleasantCompositionScore;
- (float)pleasantLightingScore;
- (float)pleasantPatternScore;
- (float)pleasantPerspectiveScore;
- (float)pleasantPostProcessingScore;
- (float)pleasantReflectionsScore;
- (float)pleasantSymmetryScore;
- (float)sharplyFocusedSubjectScore;
- (float)tastefullyBlurredScore;
- (float)wellChosenSubjectScore;
- (float)wellFramedSubjectScore;
- (float)wellTimedShotScore;

@end
