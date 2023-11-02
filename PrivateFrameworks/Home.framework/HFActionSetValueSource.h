
@interface HFActionSetValueSource : NSObject <HFCharacteristicValueSource, HFLightProfileValueSource, HFMediaValueSource> {
    HMActionSet * _actionSet;
    HFItemBuilder<HFActionSetBuilderProtocol> * _actionSetBuilder;
    <HFActionSetValueSourceDelegate> * _delegate;
}

@property (nonatomic, retain) HMActionSet *actionSet;
@property (nonatomic, retain) HFItemBuilder<HFActionSetBuilderProtocol> *actionSetBuilder;
@property (nonatomic, readonly) <HFCharacteristicOperationContextProviding> *contextProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HFActionSetValueSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)_actionForCharacteristic:(id)arg1;
- (id)_existingActionBuilderForCharacteristic:(id)arg1;
- (id)_existingActionBuilderForLightProfile:(id)arg1;
- (id)_existingActionBuilderForMediaProfile:(id)arg1;
- (bool)_isCurrentStateCharacteristic:(id)arg1;
- (id)_targetValueForCharacteristic:(id)arg1;
- (id)_valueForCurrentStateCharacteristic:(id)arg1;
- (id)actionSet;
- (id)actionSetBuilder;
- (void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3;
- (id)cachedPlaybackStateWriteErrorForRouteID:(id)arg1;
- (id)cachedValueForCharacteristic:(id)arg1;
- (void)clearCachedPlaybackStateWriteErrorWithReason:(id)arg1 notifyDelegates:(bool)arg2;
- (void)commitTransactionWithReason:(id)arg1;
- (id)delegate;
- (void)fetchNaturalLightColorTemperatureForBrightness:(long long)arg1 lightProfile:(id)arg2 completion:(id /* block */)arg3;
- (bool)hasPendingWritesForRouteID:(id)arg1;
- (unsigned long long)hash;
- (id)initWithActionSet:(id)arg1;
- (id)initWithActionSetBuilder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isNaturalLightingEnabledForProfile:(id)arg1;
- (bool)isNaturalLightingSupportedForProfile:(id)arg1;
- (long long)lastPlaybackStateForProfileForRouteID:(id)arg1;
- (id)mediaProfileContainerForRouteID:(id)arg1;
- (void)mediaValueUpdated:(id)arg1 playbackState:(long long)arg2 playbackArchive:(id)arg3;
- (id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2;
- (id)readValuesForCharacteristics:(id)arg1;
- (void)setActionSet:(id)arg1;
- (void)setActionSetBuilder:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)writeNaturalLightEnabledState:(bool)arg1 forProfile:(id)arg2;
- (id)writePlaybackState:(long long)arg1 playbackArchive:(id)arg2 forRouteID:(id)arg3;
- (id)writeValuesForCharacteristics:(id)arg1;

@end
