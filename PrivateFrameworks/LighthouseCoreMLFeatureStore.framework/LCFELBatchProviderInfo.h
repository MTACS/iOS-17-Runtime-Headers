
@interface LCFELBatchProviderInfo : NSObject {
    NSUUID * _contextId;
    NSUUID * _eventId;
    NSNumber * _featureCount;
    NSString * _featureStoreKey;
    NSArray * _negativeFeatureStatistics;
    NSArray * _positiveFeatureStatistics;
    NSNumber * _timeRange;
    NSDictionary * _totalFeatureStatistics;
}

@property (nonatomic, readonly) NSUUID *contextId;
@property (nonatomic, readonly) NSUUID *eventId;
@property (nonatomic, readonly) NSNumber *featureCount;
@property (nonatomic, readonly) NSString *featureStoreKey;
@property (nonatomic, readonly) NSArray *negativeFeatureStatistics;
@property (nonatomic, readonly) NSArray *positiveFeatureStatistics;
@property (nonatomic, readonly) NSNumber *timeRange;
@property (nonatomic, readonly) NSDictionary *totalFeatureStatistics;

+ (id)meanOf:(id)arg1;
+ (id)standardDeviationOf:(id)arg1;

- (void).cxx_destruct;
- (id)contextId;
- (id)eventId;
- (id)featureCount;
- (id)featureStoreKey;
- (id)init:(id)arg1 labelFeatureName:(id)arg2;
- (id)negativeFeatureStatistics;
- (id)positiveFeatureStatistics;
- (id)timeRange;
- (id)totalFeatureStatistics;

@end
