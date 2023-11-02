
@protocol PPConnectionsLocationSource <NSObject>

@required

- (NSString *)identifier;
- (NSArray *)locationItemsWithCriteria:(PPConnectionsCriteria *)arg1 earliest:(NSDate *)arg2 latest:(NSDate *)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 explanationSet:(PPQuickTypeExplanationSet *)arg6;

@end
