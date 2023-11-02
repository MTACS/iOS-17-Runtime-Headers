
@interface HFOverrideCharacteristicValueSource : NSObject <HFCharacteristicValueSource, HFLightProfileValueSource> {
    <HFCharacteristicValueSource> * _originalValueSource;
    <HFOverrideCharacteristicValueProvider> * _overrideValueProvider;
}

@property (nonatomic, readonly) <HFCharacteristicOperationContextProviding> *contextProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *originalValueSource;
@property (nonatomic) <HFOverrideCharacteristicValueProvider> *overrideValueProvider;
@property (readonly) Class superclass;

+ (id)na_identity;

- (void).cxx_destruct;
- (void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3;
- (id)cachedErrorForWriteToCharacteristic:(id)arg1;
- (id)cachedValueForCharacteristic:(id)arg1;
- (void)commitTransactionWithReason:(id)arg1;
- (id)contextProvider;
- (void)fetchNaturalLightColorTemperatureForBrightness:(long long)arg1 lightProfile:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)hash;
- (id)initWithOriginalValueSource:(id)arg1 overrideValueProvider:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isNaturalLightingEnabledForProfile:(id)arg1;
- (bool)isNaturalLightingSupportedForProfile:(id)arg1;
- (id)originalValueSource;
- (id)overrideValueProvider;
- (id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2;
- (id)readValuesForCharacteristics:(id)arg1;
- (void)setOverrideValueProvider:(id)arg1;
- (id)writeNaturalLightEnabledState:(bool)arg1 forProfile:(id)arg2;
- (id)writeValuesForCharacteristics:(id)arg1;

@end
