
@interface CHSingletonMLModel : NSObject {
    MLModel * _model;
    NSString * _modelKey;
    long long  _modelUseCount;
}

@property (nonatomic, readonly) MLModelConfiguration *configuration;
@property (nonatomic, readonly) MLModelDescription *modelDescription;
@property (nonatomic, readonly) NSString *modelKey;

+ (id)modelWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
+ (void)releaseModelWithKey:(id)arg1;

- (void).cxx_destruct;
- (id)configuration;
- (id)model;
- (id)modelDescription;
- (id)modelKey;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (long long)usageCount;

@end
