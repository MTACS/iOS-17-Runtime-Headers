
@interface LCFELFeatureImportanceAnalysisResult : NSObject {
    NSNumber * _correlationCoefficient;
    NSNumber * _featureCount;
    NSNumber * _featureImportance;
    NSString * _featureName;
}

@property (nonatomic, readonly) NSNumber *correlationCoefficient;
@property (nonatomic, readonly) NSNumber *featureCount;
@property (nonatomic, readonly) NSNumber *featureImportance;
@property (nonatomic, readonly) NSString *featureName;

- (void).cxx_destruct;
- (id)correlationCoefficient;
- (id)featureCount;
- (id)featureImportance;
- (id)featureName;
- (id)init:(id)arg1 featureCount:(id)arg2 correlationCoefficient:(id)arg3 featureImportance:(id)arg4;

@end
