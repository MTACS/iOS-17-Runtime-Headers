
@interface HDHeartbeatSeriesQueryServer : HDQueryServer

+ (Class)queryClass;
+ (id)requiredEntitlements;

- (void)_queue_start;

@end
