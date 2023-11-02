
@protocol AAEventType

@required

+ (NSString *)eventName;

- (NSDictionary *)eventProperties;
- (id)init;

@optional

+ (AASessionGroup *)sessionGroup;
+ (long long)timestampGranularity;

@end
