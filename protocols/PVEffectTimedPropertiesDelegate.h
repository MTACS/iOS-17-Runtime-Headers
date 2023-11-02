
@protocol PVEffectTimedPropertiesDelegate <NSObject>

@required

- (NSDictionary *)effect:(PVEffect *)arg1 timedPropertiesForGroup:(NSString *)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 userContext:(NSDictionary *)arg4;
- (NSArray *)supportedTimedPropertyGroupsForEffect:(PVEffect *)arg1;

@optional

- (void)effect:(PVEffect *)arg1 didStopRequestingTimedProperties:(NSDictionary *)arg2;
- (void)effect:(PVEffect *)arg1 willStartRequestingTimedProperties:(NSDictionary *)arg2;

@end
