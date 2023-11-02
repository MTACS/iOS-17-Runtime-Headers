
@interface MLPredictionEventMetric : NSObject <CUTCoreAnalyticsMetric> {
    NSString * _bundleIdentifier;
    long long  _featuresPredictionCountSoFar;
    double  _featuresPredictionDuration;
    NSNumber * _firstPartyExecutable;
    NSString * _modelName;
    NSNumber * _modelType;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) long long featuresPredictionCountSoFar;
@property (nonatomic, readonly) double featuresPredictionDuration;
@property (nonatomic, readonly) NSNumber *firstPartyExecutable;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *modelName;
@property (nonatomic, readonly) NSNumber *modelType;
@property (readonly) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)dictionaryRepresentation;
- (long long)featuresPredictionCountSoFar;
- (double)featuresPredictionDuration;
- (id)firstPartyExecutable;
- (id)initWithBundleIdentifier:(id)arg1 modelName:(id)arg2 firstPartyExecutable:(id)arg3 modelType:(id)arg4 featuresPredictionDuration:(double)arg5 featuresPredictionCountSoFar:(long long)arg6;
- (id)modelName;
- (id)modelType;
- (id)name;

@end
