
@protocol BWCoreAnalyticsPayload <NSObject>

@required

- (NSDictionary *)eventDictionary;
- (NSString *)eventName;
- (void)reset;

@end
