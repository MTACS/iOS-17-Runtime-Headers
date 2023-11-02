
@protocol BCSMetricFactoryProtocol <NSObject>

@required

- (BCSBusinessCallerFetchMetric *)businessCallerFetchMetricForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSBusinessLinkFetchMetric *)businessLinkFetchMetricForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSBusinessLinkHashFetchMetric *)businessLinkHashFetchMetricForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSBusinessLinkRegisteredMetric *)businessLinkRegisteredMetricForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSChatSuggestFetchMetric *)chatSuggestFetchMetricForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSChatSuggestRegisteredMetric *)chatSuggestRegisteredMetricForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSConfigResolutionMetric *)configResolutionMetricForConfigType:(long long)arg1;
- (BCSItemResolutionMetric *)itemResolutionMetricForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (<BCSMeasurementFactoryProtocol> *)measurementFactory;
- (BCSMegashardFetchMetric *)megashardFetchMetricForType:(long long)arg1;
- (BCSShardResolutionMetric *)shardResolutionMetricForShardIdentifier:(id <BCSShardItemIdentifying>)arg1;

@end
