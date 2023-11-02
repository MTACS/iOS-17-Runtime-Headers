
@protocol TBAnalyticsEvent <NSObject>

@required

- (NSDictionary *)eventDictionary;
- (NSString *)eventName;

@end
