
@interface L2XGBRegressorInput : NSObject <MLFeatureProvider> {
    double  _L1Score;
    double  _aestheticScore;
    double  _curationScore;
    double  _freshness;
    double  _matchedFieldsCount;
    double  _matchedLocationRatio;
    double  _matchedOCRCharacterMatchRatio;
    double  _matchedOCRImportance;
    double  _matchedPeopleRatio;
    double  _matchedSceneBoundingBox;
    double  _matchedSceneConfidence;
    double  _matchedSceneLabelRatio;
    double  _matchedSceneSynonymRatio;
    double  _photosFavorited;
}

@property (nonatomic) double L1Score;
@property (nonatomic) double aestheticScore;
@property (nonatomic) double curationScore;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic) double freshness;
@property (nonatomic) double matchedFieldsCount;
@property (nonatomic) double matchedLocationRatio;
@property (nonatomic) double matchedOCRCharacterMatchRatio;
@property (nonatomic) double matchedOCRImportance;
@property (nonatomic) double matchedPeopleRatio;
@property (nonatomic) double matchedSceneBoundingBox;
@property (nonatomic) double matchedSceneConfidence;
@property (nonatomic) double matchedSceneLabelRatio;
@property (nonatomic) double matchedSceneSynonymRatio;
@property (nonatomic) double photosFavorited;

- (double)L1Score;
- (double)aestheticScore;
- (double)curationScore;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (double)freshness;
- (id)initWithL1Score:(double)arg1 freshness:(double)arg2 photosFavorited:(double)arg3 aestheticScore:(double)arg4 curationScore:(double)arg5 matchedFieldsCount:(double)arg6 matchedPeopleRatio:(double)arg7 matchedLocationRatio:(double)arg8 matchedSceneLabelRatio:(double)arg9 matchedSceneSynonymRatio:(double)arg10 matchedOCRCharacterMatchRatio:(double)arg11 matchedSceneConfidence:(double)arg12 matchedSceneBoundingBox:(double)arg13 matchedOCRImportance:(double)arg14;
- (double)matchedFieldsCount;
- (double)matchedLocationRatio;
- (double)matchedOCRCharacterMatchRatio;
- (double)matchedOCRImportance;
- (double)matchedPeopleRatio;
- (double)matchedSceneBoundingBox;
- (double)matchedSceneConfidence;
- (double)matchedSceneLabelRatio;
- (double)matchedSceneSynonymRatio;
- (double)photosFavorited;
- (void)setAestheticScore:(double)arg1;
- (void)setCurationScore:(double)arg1;
- (void)setFreshness:(double)arg1;
- (void)setL1Score:(double)arg1;
- (void)setMatchedFieldsCount:(double)arg1;
- (void)setMatchedLocationRatio:(double)arg1;
- (void)setMatchedOCRCharacterMatchRatio:(double)arg1;
- (void)setMatchedOCRImportance:(double)arg1;
- (void)setMatchedPeopleRatio:(double)arg1;
- (void)setMatchedSceneBoundingBox:(double)arg1;
- (void)setMatchedSceneConfidence:(double)arg1;
- (void)setMatchedSceneLabelRatio:(double)arg1;
- (void)setMatchedSceneSynonymRatio:(double)arg1;
- (void)setPhotosFavorited:(double)arg1;

@end
