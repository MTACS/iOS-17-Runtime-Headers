
@interface CPSAnalytics : NSObject

@property (nonatomic, readonly) bool shouldRecordAnalyticsEvents;

+ (id)sharedInstance;

- (void)_sendCoreAnalyticsEvent:(id)arg1 withDictionary:(id)arg2;
- (void)audioAppMetadataThrottledWithBundleIdentifier:(id)arg1;
- (void)navigationStartedWithBundleIdentifier:(id)arg1;
- (bool)shouldRecordAnalyticsEvents;

@end
