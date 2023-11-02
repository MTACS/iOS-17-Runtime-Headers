
@interface L2XGBRegressor : NSObject {
    MLModel * _model;
}

@property (nonatomic, readonly) MLModel *model;

+ (id)URLOfModelInThisBundle;
+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)init;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)initWithMLModel:(id)arg1;
- (id)model;
- (void)predictionFromFeatures:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)predictionFromFeatures:(id)arg1 error:(id*)arg2;
- (void)predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)predictionFromL1Score:(double)arg1 freshness:(double)arg2 photosFavorited:(double)arg3 aestheticScore:(double)arg4 curationScore:(double)arg5 matchedFieldsCount:(double)arg6 matchedPeopleRatio:(double)arg7 matchedLocationRatio:(double)arg8 matchedSceneLabelRatio:(double)arg9 matchedSceneSynonymRatio:(double)arg10 matchedOCRCharacterMatchRatio:(double)arg11 matchedSceneConfidence:(double)arg12 matchedSceneBoundingBox:(double)arg13 matchedOCRImportance:(double)arg14 error:(id*)arg15;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
