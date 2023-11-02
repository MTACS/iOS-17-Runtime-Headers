
@interface _PSRuleRankingMLModel : NSObject {
    MLModelConfiguration * _adaptableModelConfiguration;
    NSString * _adaptedModelRecipeVersion;
    _PSBehaviorRuleFeatureExtraction * _feaExtHandle;
    bool  _isAdaptedMLModelOK;
    bool  _isAdaptedModel;
    NSDictionary * _metadata;
    MLModel * _mlModel;
    NSDictionary * _psConfigForAdaptableModel;
    double  _scoreThreshold;
    NSArray * _scores;
}

@property (nonatomic, retain) MLModelConfiguration *adaptableModelConfiguration;
@property (retain) NSString *adaptedModelRecipeVersion;
@property (retain) _PSBehaviorRuleFeatureExtraction *feaExtHandle;
@property (nonatomic) bool isAdaptedMLModelOK;
@property bool isAdaptedModel;
@property (retain) NSDictionary *metadata;
@property (retain) MLModel *mlModel;
@property (retain) NSDictionary *psConfigForAdaptableModel;
@property double scoreThreshold;
@property (nonatomic, retain) NSArray *scores;

- (void).cxx_destruct;
- (id)adaptableModelConfiguration;
- (id)adaptedModelRecipeVersion;
- (id)extractAdaptedModelRecipeID;
- (id)feaExtHandle;
- (id)getAdaptedModelVersion;
- (id)giveModelDescription;
- (id)initWithAdaptableModelConfig:(id)arg1 isAdaptedMLModelOK:(bool)arg2 scoreThreshold:(double)arg3;
- (id)initWithMLModel:(id)arg1 scoreThreshold:(double)arg2 isAdaptedModel:(bool)arg3 psConfigForAdaptableModel:(id)arg4 isAdaptedMLModelOK:(bool)arg5;
- (bool)isAdaptedMLModelOK;
- (bool)isAdaptedModel;
- (bool)isAdaptedModelCreated;
- (bool)isAdaptedModelUsed;
- (void)loadDefaultRuleMinerMLModel;
- (id)metadata;
- (id)mlModel;
- (id)psConfigForAdaptableModel;
- (id)rankRules:(id)arg1 contextItems:(id)arg2;
- (double)scoreThreshold;
- (id)scores;
- (id)scoresOnRules:(id)arg1 contextItems:(id)arg2;
- (void)setAdaptableModelConfiguration:(id)arg1;
- (void)setAdaptedModelRecipeVersion:(id)arg1;
- (void)setFeaExtHandle:(id)arg1;
- (void)setIsAdaptedMLModelOK:(bool)arg1;
- (void)setIsAdaptedModel:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMlModel:(id)arg1;
- (void)setPsConfigForAdaptableModel:(id)arg1;
- (void)setScoreThreshold:(double)arg1;
- (void)setScores:(id)arg1;

@end
