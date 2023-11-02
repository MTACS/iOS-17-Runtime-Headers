
@interface BCSMetricFactory : NSObject <BCSMetricFactoryProtocol> {
    <BCSMeasurementFactoryProtocol> * _measurementFactory;
    NSArray * _postProcessingMetricHandlers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <BCSMeasurementFactoryProtocol> *measurementFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)businessCallerFetchMetricForItemIdentifier:(id)arg1;
- (id)businessLinkFetchMetricForItemIdentifier:(id)arg1;
- (id)businessLinkHashFetchMetricForItemIdentifier:(id)arg1;
- (id)businessLinkRegisteredMetricForItemIdentifier:(id)arg1;
- (id)chatSuggestFetchMetricForItemIdentifier:(id)arg1;
- (id)chatSuggestRegisteredMetricForItemIdentifier:(id)arg1;
- (id)configResolutionMetricForConfigType:(long long)arg1;
- (id)initWithMeasurementFactory:(id)arg1;
- (id)itemResolutionMetricForItemIdentifier:(id)arg1;
- (id)measurementFactory;
- (id)megashardFetchMetricForType:(long long)arg1;
- (id)shardResolutionMetricForShardIdentifier:(id)arg1;

@end
