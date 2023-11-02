
@protocol BCSMeasurementFactoryProtocol <NSObject>

@required

- (BCSTimingMeasurement *)businessLinkChoppedFetchTimingMeasurementForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSTimingMeasurement *)businessLinkFetchByHashTimingMeasurementForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSFlagMeasurement *)configCacheHitMeasurementForConfigType:(long long)arg1;
- (BCSTimingMeasurement *)configCloudKitFetchAndDecodeTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (BCSTimingMeasurement *)configCloudKitFetchTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (BCSTimingMeasurement *)configResolutionTimingMeasurementForConfigType:(long long)arg1;
- (BCSFlagMeasurement *)itemCacheHitMeasurementForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSTimingMeasurement *)itemCloudKitFetchAndDecodeTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (BCSTimingMeasurement *)itemCloudKitFetchTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (BCSTimingMeasurement *)itemFetchTimingMeasurementForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSTimingMeasurement *)itemIsRegisteredTimingMeasurementForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSTimingMeasurement *)itemResolutionTimingMeasurementForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSTimingMeasurement *)megashardCloudKitFetchAndDecodeTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (BCSTimingMeasurement *)megashardCloudKitFetchTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (BCSFlagMeasurement *)shardCacheHitMeasurementForShardIdentifier:(id <BCSShardItemIdentifying>)arg1;
- (BCSTimingMeasurement *)shardCloudKitFetchAndDecodeTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (BCSTimingMeasurement *)shardCloudKitFetchTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (BCSTimingMeasurement *)shardResolutionTimingMeasurementForShardIdentifier:(id <BCSShardItemIdentifying>)arg1;

@end
