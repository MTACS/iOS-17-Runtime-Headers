
@protocol SKAnalyticsEventProtocol

@required

- (bool)canCreatePayload;
- (NSDictionary *)createPayload;
- (NSString *)eventName;

@end
