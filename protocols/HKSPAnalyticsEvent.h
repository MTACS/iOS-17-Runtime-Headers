
@protocol HKSPAnalyticsEvent <NSObject>

@required

- (NSString *)eventName;
- (NSDictionary *)eventPayload;

@optional

- (NSArray *)keysRequiringIHAGating;

@end
