
@interface ATXHomeScreenLogSystemEventRotationSessionEngagementKeyTracker : NSObject {
    NSString * _proactiveStatusAggregationKey;
    NSString * _proactiveStatusBooleanKey;
    NSString * _statusAggregationKey;
    NSString * _userScrollFinalOutcomeKey;
    NSString * _userScrollStatusBooleanKey;
}

@property (nonatomic, readonly) NSString *proactiveStatusAggregationKey;
@property (nonatomic, readonly) NSString *proactiveStatusBooleanKey;
@property (nonatomic, readonly) NSString *statusAggregationKey;
@property (nonatomic, readonly) NSString *userScrollFinalOutcomeKey;
@property (nonatomic, readonly) NSString *userScrollStatusBooleanKey;

+ (id)keyTrackerForRotationSessionStackEngagementStatus:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)initWithStatusAggregationKey:(id)arg1 proactiveStatusAggregationKey:(id)arg2 proactiveStatusBooleanKey:(id)arg3 userScrollStatusBooleanKey:(id)arg4 userScrollFinalOutcomeKey:(id)arg5;
- (id)proactiveStatusAggregationKey;
- (id)proactiveStatusBooleanKey;
- (id)statusAggregationKey;
- (id)userScrollFinalOutcomeKey;
- (id)userScrollStatusBooleanKey;

@end
