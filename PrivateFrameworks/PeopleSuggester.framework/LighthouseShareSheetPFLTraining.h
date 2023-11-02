
@interface LighthouseShareSheetPFLTraining : NSObject {
    NSString * _configBoltTaskIDSpecification;
    NSString * _configDepthSpecification;
    NSString * _configTreeSpecification;
    FidesPHSEvaluatorDataSource * _dataSource;
    NSMutableArray * _featureMatricesForAllShareEvents;
    NSMutableDictionary * _featureNameDict;
    _DKKnowledgeStore * _knowledgeStore;
    NSDictionary * _processDataReturnDict;
    NSDictionary * _selectedFeaturesConfig;
}

@property (nonatomic, retain) NSString *configBoltTaskIDSpecification;
@property (nonatomic, retain) NSString *configDepthSpecification;
@property (nonatomic, retain) NSString *configTreeSpecification;
@property (nonatomic, retain) FidesPHSEvaluatorDataSource *dataSource;
@property (nonatomic, retain) NSMutableArray *featureMatricesForAllShareEvents;
@property (nonatomic, retain) NSMutableDictionary *featureNameDict;
@property (nonatomic, retain) _DKKnowledgeStore *knowledgeStore;
@property (nonatomic, retain) NSDictionary *processDataReturnDict;
@property (nonatomic, retain) NSDictionary *selectedFeaturesConfig;

+ (void)initialize;
+ (id)processDataForStore:(id)arg1 recipeInfo:(id)arg2;
+ (id)processDataForStore:(id)arg1 taskParameters:(id)arg2;
+ (id)taskResultFromDict:(id)arg1;

- (void).cxx_destruct;
- (id)configBoltTaskIDSpecification;
- (id)configDepthSpecification;
- (id)configTreeSpecification;
- (id)createDataSourceForDodMLRecipe:(id)arg1 error:(id*)arg2;
- (id)createDataSourceForRecipe:(id)arg1 error:(id*)arg2;
- (id)createMLFeatureProviderArrayFromSingleShareEventData:(id)arg1;
- (id)dataSource;
- (id)evaluateMetricsWithModelURL:(id)arg1;
- (id)featureMatricesForAllShareEvents;
- (id)featureNameDict;
- (id)generateResultsDictionayWithModelURL:(id)arg1 error:(id*)arg2;
- (id)knowledgeStore;
- (void)processDataForMetricEvaluationForStore:(id)arg1;
- (id)processDataReturnDict;
- (id)runTask:(id)arg1 knowledgeStore:(id)arg2 error:(id*)arg3;
- (id)runWithRecipeInfo:(id)arg1 knowledgeStore:(id)arg2 error:(id*)arg3;
- (id)selectedFeaturesConfig;
- (void)setConfigBoltTaskIDSpecification:(id)arg1;
- (void)setConfigDepthSpecification:(id)arg1;
- (void)setConfigTreeSpecification:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setFeatureMatricesForAllShareEvents:(id)arg1;
- (void)setFeatureNameDict:(id)arg1;
- (void)setKnowledgeStore:(id)arg1;
- (void)setProcessDataReturnDict:(id)arg1;
- (void)setSelectedFeaturesConfig:(id)arg1;
- (float)sigmoid:(float)arg1;

@end
