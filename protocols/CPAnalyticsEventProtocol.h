
@protocol CPAnalyticsEventProtocol <NSObject>

@required

- (NSDictionary *)copyRawPayload;
- (NSString *)name;
- (NSObject *)propertyForKey:(NSString *)arg1;
- (NSDate *)timestamp;

@end
