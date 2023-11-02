
@protocol APPCMetricable

@required

- (NSString *)clientIdentifier;
- (NSString *)contentId;
- (NSString *)deviceIdentifier;
- (long long)metric;
- (NSDictionary *)properties;
- (long long)purpose;
- (NSDate *)timestamp;
- (NSString *)userIdentifier;

@end
