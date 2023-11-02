
@protocol TRIDateProviding

@required

- (NSDate *)lastFetchDateWithType:(unsigned char)arg1 container:(int)arg2 teamId:(NSString *)arg3;
- (void)setLastFetchDate:(NSDate *)arg1 type:(unsigned char)arg2 container:(int)arg3 teamId:(NSString *)arg4;

@end
