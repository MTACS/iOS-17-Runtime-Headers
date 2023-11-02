
@protocol APConfigurationProtocol <NSObject, APPurgeableCacheObjectP>

@required

+ (NSString *)path;

- (id)initWithConfig:(NSDictionary *)arg1 notifier:(id <APPurgeableCacheNotifierP>)arg2;

@end
