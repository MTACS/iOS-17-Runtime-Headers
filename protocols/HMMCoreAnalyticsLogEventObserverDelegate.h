
@protocol HMMCoreAnalyticsLogEventObserverDelegate <NSObject>

@required

- (void)addAggregatedHomeDimensionsToEventDictionary:(NSMutableDictionary *)arg1;
- (void)addCommonDimensionsToEventDictionary:(NSMutableDictionary *)arg1;
- (void)addDimensionsForAccessoryIdentifier:(NSString *)arg1 toEventDictionary:(NSMutableDictionary *)arg2;
- (void)addDimensionsForHome:(NSUUID *)arg1 toEventDictionary:(NSMutableDictionary *)arg2;

@end
