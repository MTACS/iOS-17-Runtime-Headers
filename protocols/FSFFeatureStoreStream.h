
@protocol FSFFeatureStoreStream

@required

- (bool)deleteCurrentStream;
- (bool)insert:(id <FSFFeature>)arg1 withInteractionId:(NSString *)arg2 atTime:(double)arg3;
- (NSMutableArray *)retrieve:(NSArray *)arg1;
- (NSArray *)retrieveEvents:(NSArray *)arg1 startDate:(NSDate *)arg2 endDate:(NSDate *)arg3;

@end
