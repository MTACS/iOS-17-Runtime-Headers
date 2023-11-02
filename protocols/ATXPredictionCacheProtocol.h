
@protocol ATXPredictionCacheProtocol <NSObject>

@required

- (long long)confidenceCategoryForPredictionAtIndex:(unsigned long long)arg1;
- (NSDate *)date;
- (id)identifierForPredictionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfPredictionsWithConfidence:(long long)arg1;

@end
