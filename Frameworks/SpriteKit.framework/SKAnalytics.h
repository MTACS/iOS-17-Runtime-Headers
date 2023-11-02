
@interface SKAnalytics : NSObject {
    NSString * _bundleID;
}

+ (id)instance;

- (void).cxx_destruct;
- (id)getBundleID;
- (void)sendAnalyticsDataWithKey:(id)arg1;

@end
