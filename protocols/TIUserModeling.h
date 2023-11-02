
@protocol TIUserModeling <NSObject>

@required

- (void)addDoubleToTransientCounter:(double)arg1 forKey:(NSString *)arg2 andCandidateLength:(int)arg3 andContext:(TIAnalyticsMetricsContext *)arg4;
- (void)addIntegerToTransientCounter:(int)arg1 forKey:(NSString *)arg2 andCandidateLength:(int)arg3 andContext:(TIAnalyticsMetricsContext *)arg4;
- (void)addToDurableCounter:(int)arg1 forKey:(NSString *)arg2;
- (NSArray *)contexts;
- (void)resetDurableCounterForKey:(NSString *)arg1;
- (TIUserModelValues *)valuesFromContext:(TIAnalyticsMetricsContext *)arg1;

@end
