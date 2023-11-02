
@interface BWLandmarksInferenceConfiguration : BWVisionInferenceConfiguration {
    bool  _alwaysExecuteForRedEyeReduction;
    NSNumber * _cascadeStepCount;
    bool  _clampToLargestMaximumNumberOfFaces;
    bool  _considerISPRectsIfVisionFails;
    unsigned long long  _constellationPointCount;
    bool  _detectLandmarksInFullSizeInput;
    bool  _detectsBlinking;
    struct { 
        unsigned short major; 
        unsigned short minor; 
        unsigned short patch; 
    }  _landmarksInferenceVersion;
    unsigned long long  _maximumNumberOfFaces;
    bool  _refinesLeftEyeLandmarks;
    bool  _refinesMouthLandmarks;
    bool  _refinesRightEyeLandmarks;
}

@property (nonatomic) bool alwaysExecuteForRedEyeReduction;
@property (nonatomic, retain) NSNumber *cascadeStepCount;
@property (nonatomic) bool clampToLargestMaximumNumberOfFaces;
@property (nonatomic) bool considerISPRectsIfVisionFails;
@property (nonatomic) unsigned long long constellationPointCount;
@property (nonatomic) bool detectLandmarksInFullSizeInput;
@property (nonatomic) bool detectsBlinking;
@property (nonatomic) struct { unsigned short x1; unsigned short x2; unsigned short x3; } landmarksInferenceVersion;
@property (nonatomic) unsigned long long maximumNumberOfFaces;
@property (nonatomic) bool refinesLeftEyeLandmarks;
@property (nonatomic) bool refinesMouthLandmarks;
@property (nonatomic) bool refinesRightEyeLandmarks;

+ (id)configuration;
+ (void)initialize;
+ (bool)isPortraitPrewarmingRequired;
+ (unsigned long long)portraitMaximumNumberOfFaces;

- (bool)alwaysExecuteForRedEyeReduction;
- (id)cascadeStepCount;
- (bool)clampToLargestMaximumNumberOfFaces;
- (bool)considerISPRectsIfVisionFails;
- (unsigned long long)constellationPointCount;
- (void)dealloc;
- (bool)detectLandmarksInFullSizeInput;
- (bool)detectsBlinking;
- (id)initWithInferenceType:(int)arg1;
- (struct { unsigned short x1; unsigned short x2; unsigned short x3; })landmarksInferenceVersion;
- (unsigned long long)maximumNumberOfFaces;
- (bool)refinesLeftEyeLandmarks;
- (bool)refinesMouthLandmarks;
- (bool)refinesRightEyeLandmarks;
- (void)setAlwaysExecuteForRedEyeReduction:(bool)arg1;
- (void)setCascadeStepCount:(id)arg1;
- (void)setClampToLargestMaximumNumberOfFaces:(bool)arg1;
- (void)setConsiderISPRectsIfVisionFails:(bool)arg1;
- (void)setConstellationPointCount:(unsigned long long)arg1;
- (void)setDetectLandmarksInFullSizeInput:(bool)arg1;
- (void)setDetectsBlinking:(bool)arg1;
- (void)setLandmarksInferenceVersion:(struct { unsigned short x1; unsigned short x2; unsigned short x3; })arg1;
- (void)setMaximumNumberOfFaces:(unsigned long long)arg1;
- (void)setRefinesLeftEyeLandmarks:(bool)arg1;
- (void)setRefinesMouthLandmarks:(bool)arg1;
- (void)setRefinesRightEyeLandmarks:(bool)arg1;

@end
