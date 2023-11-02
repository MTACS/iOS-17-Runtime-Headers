
@interface ATXHomeScreenLogEngagementKeyTracker : NSObject {
    NSString * _rotationAggregationKey;
    NSString * _rotationBooleanKey;
    NSString * _rotationFinalOutcomeKey;
}

@property (nonatomic, readonly) NSString *rotationAggregationKey;
@property (nonatomic, readonly) NSString *rotationBooleanKey;
@property (nonatomic, readonly) NSString *rotationFinalOutcomeKey;

+ (id)keyTrackerForStackEngagementStatus:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)initWithRotationAggregationKey:(id)arg1 rotationBooleanKey:(id)arg2 rotationFinalOutcomeKey:(id)arg3;
- (id)rotationAggregationKey;
- (id)rotationBooleanKey;
- (id)rotationFinalOutcomeKey;

@end
