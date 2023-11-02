
@interface _PSFamilyMLModel : NSObject {
    NSObject<OS_xpc_object> * _activity;
    _PASLazyResult * _extractor;
    NSDictionary * _models;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *activity;
@property (nonatomic, readonly) NSDictionary *models;

- (void).cxx_destruct;
- (id)activity;
- (void)commonInit;
- (id)defaultModelForPrediction;
- (id)defaultPredictionForInputFeatures:(id)arg1;
- (id)ensemblePredictionForInputFeatures:(id)arg1;
- (id)familiesPredictionForContacts:(id)arg1 withMaxSuggestion:(long long)arg2;
- (id)familyProbability:(id)arg1;
- (id)getFeatureDictForContact:(id)arg1;
- (id)getModelWithModelName:(id)arg1;
- (id)getPredictionFromModel:(id)arg1 withInputFeatures:(id)arg2;
- (id)init;
- (id)initWithActivity:(id)arg1;
- (id)initWithModels:(id)arg1;
- (void)initializeModels;
- (bool)isFamilyContact:(id)arg1;
- (id)loadModelFromUrlResource:(id)arg1;
- (id)models;
- (id)predictionForContact:(id)arg1;
- (id)predictionForContact:(id)arg1 featureDict:(id)arg2;

@end
