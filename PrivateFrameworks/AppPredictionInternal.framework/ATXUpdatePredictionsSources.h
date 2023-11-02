
@interface ATXUpdatePredictionsSources : NSObject <ATXUpdatePredictionsDelegate> {
    ATXTimeBucketedRateLimiter * _rateLimiter;
    NSArray * _updateSources;
}

@property (nonatomic, retain) ATXTimeBucketedRateLimiter *rateLimiter;
@property (nonatomic, retain) NSArray *updateSources;

- (void).cxx_destruct;
- (void)forceUpdatePredictionsImmediatelyWithReason:(unsigned long long)arg1;
- (void)forwardUpdatePredictionsDefaultIntervalWithReason:(unsigned long long)arg1;
- (void)forwardUpdatePredictionsImmediatelyWithReason:(unsigned long long)arg1;
- (id)init;
- (id)initWithUpdateSources:(id)arg1 rateLimiter:(id)arg2;
- (id)rateLimiter;
- (void)setRateLimiter:(id)arg1;
- (void)setUpdateSources:(id)arg1;
- (void)tryUpdatePredictionsDefaultIntervalWithReason:(unsigned long long)arg1;
- (void)tryUpdatePredictionsImmediatelyWithReason:(unsigned long long)arg1;
- (id)updateSources;

@end
