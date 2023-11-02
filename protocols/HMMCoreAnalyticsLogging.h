
@protocol HMMCoreAnalyticsLogging <NSObject>

@required

- (NSDictionary *)coreAnalyticsEventDictionary;
- (NSString *)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;

@optional

+ (bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

- (NSString *)accessoryIdentifier;
- (NSUUID *)homeUUID;
- (NSUUID *)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;

@end
