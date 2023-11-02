
@interface HFNullValueSource : NSObject <HFCharacteristicValueSource, HFLightProfileValueSource, HFMediaValueSource>

@property (nonatomic, readonly) <HFCharacteristicOperationContextProviding> *contextProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)na_identity;

- (void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3;
- (id)cachedPlaybackStateWriteErrorForRouteID:(id)arg1;
- (id)cachedValueForCharacteristic:(id)arg1;
- (void)clearCachedPlaybackStateWriteErrorWithReason:(id)arg1 notifyDelegates:(bool)arg2;
- (void)commitTransactionWithReason:(id)arg1;
- (void)fetchNaturalLightColorTemperatureForBrightness:(long long)arg1 lightProfile:(id)arg2 completion:(id /* block */)arg3;
- (bool)hasPendingWritesForRouteID:(id)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isNaturalLightingEnabledForProfile:(id)arg1;
- (bool)isNaturalLightingSupportedForProfile:(id)arg1;
- (long long)lastPlaybackStateForProfileForRouteID:(id)arg1;
- (id)mediaProfileContainerForRouteID:(id)arg1;
- (id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2;
- (id)readValuesForCharacteristics:(id)arg1;
- (id)writeNaturalLightEnabledState:(bool)arg1 forProfile:(id)arg2;
- (id)writePlaybackState:(long long)arg1 playbackArchive:(id)arg2 forRouteID:(id)arg3;
- (id)writeValuesForCharacteristics:(id)arg1;

@end
