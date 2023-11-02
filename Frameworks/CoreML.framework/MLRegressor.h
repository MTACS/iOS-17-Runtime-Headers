
@interface MLRegressor : MLModel <MLRegressor>

@property (nonatomic, readonly) MLModelConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) MLModelMetadata *metadata;
@property (nonatomic, readonly) MLModelDescription *modelDescription;
@property (nonatomic, readonly) unsigned long long predictionTypeForKTrace;
@property (nonatomic, readonly) bool recordsPredictionEvent;
@property (nonatomic, readonly) unsigned long long signpostID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsConcurrentSubmissions;

+ (id)predictionFromFeatures:(id)arg1 regressor:(id)arg2 options:(id)arg3 error:(id*)arg4;

- (id)initDescriptionOnlyWithSpecification:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)initWithDescription:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)regress:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)regressorResultFromOutputFeatures:(id)arg1 error:(id*)arg2;

@end
