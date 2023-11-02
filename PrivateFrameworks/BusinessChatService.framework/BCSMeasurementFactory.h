
@interface BCSMeasurementFactory : NSObject <BCSMeasurementFactoryProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)businessLinkChoppedFetchTimingMeasurementForItemIdentifier:(id)arg1;
- (id)businessLinkFetchByHashTimingMeasurementForItemIdentifier:(id)arg1;
- (id)configCacheHitMeasurementForConfigType:(long long)arg1;
- (id)configCloudKitFetchAndDecodeTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (id)configCloudKitFetchTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (id)configResolutionTimingMeasurementForConfigType:(long long)arg1;
- (id)itemCacheHitMeasurementForItemIdentifier:(id)arg1;
- (id)itemCloudKitFetchAndDecodeTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (id)itemCloudKitFetchTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (id)itemFetchTimingMeasurementForItemIdentifier:(id)arg1;
- (id)itemIsRegisteredTimingMeasurementForItemIdentifier:(id)arg1;
- (id)itemResolutionTimingMeasurementForItemIdentifier:(id)arg1;
- (id)megashardCloudKitFetchAndDecodeTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (id)megashardCloudKitFetchTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (id)shardCacheHitMeasurementForShardIdentifier:(id)arg1;
- (id)shardCloudKitFetchAndDecodeTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (id)shardCloudKitFetchTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (id)shardResolutionTimingMeasurementForShardIdentifier:(id)arg1;

@end
