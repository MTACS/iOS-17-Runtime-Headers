
@protocol ATXPredictionScoreLogger <NSObject>

@required

- (void)logInputDict:(ATXScoreDict *)arg1 subscores:(ATXScoreDict *)arg2 forBundleId:(NSString *)arg3;
- (void)logInputs:(NSDictionary *)arg1 subscores:(NSDictionary *)arg2 forBundleId:(NSString *)arg3;
- (void)logStageScores:(NSArray *)arg1 forStageType:(long long)arg2;
- (void)setAssetVersion:(unsigned long long)arg1;
- (void)setCacheAge:(double)arg1;
- (void)setConsumerSubType:(unsigned char)arg1;
- (void)setPredictionClass:(NSString *)arg1;

@end
