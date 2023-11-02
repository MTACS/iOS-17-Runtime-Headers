
@protocol STCoreAnalyticsEvent

@required

- (NSString *)description;
- (NSString *)name;
- (NSDictionary *)payload;

@end
