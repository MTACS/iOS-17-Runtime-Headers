
@interface BWFaceSegmentsWithLandmarksInferenceConfiguration : BWLandmarksInferenceConfiguration {
    bool  _detectFacesInFullSizeInput;
    bool  _includesInvalidContent;
    bool  _skipFaceLandmarkDetection;
    bool  _skipFoodAndDrinkDetection;
    bool  _skipSkinToneClassification;
}

@property (nonatomic) bool detectFacesInFullSizeInput;
@property (nonatomic) bool includesInvalidContent;
@property (nonatomic) bool skipFaceLandmarkDetection;
@property (nonatomic) bool skipFoodAndDrinkDetection;
@property (nonatomic) bool skipSkinToneClassification;

+ (id)configuration;

- (bool)detectFacesInFullSizeInput;
- (bool)includesInvalidContent;
- (id)initWithInferenceType:(int)arg1;
- (void)setDetectFacesInFullSizeInput:(bool)arg1;
- (void)setIncludesInvalidContent:(bool)arg1;
- (void)setSkipFaceLandmarkDetection:(bool)arg1;
- (void)setSkipFoodAndDrinkDetection:(bool)arg1;
- (void)setSkipSkinToneClassification:(bool)arg1;
- (bool)skipFaceLandmarkDetection;
- (bool)skipFoodAndDrinkDetection;
- (bool)skipSkinToneClassification;

@end
