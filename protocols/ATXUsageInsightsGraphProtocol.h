
@protocol ATXUsageInsightsGraphProtocol <NSObject>

@required

- (NSString *)bundleID;
- (NSDate *)eventTime;

@optional

- (NSString *)interruptedBundleID;

@end
