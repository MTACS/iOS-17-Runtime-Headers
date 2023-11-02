
@interface HFSimpleAggregatedCharacteristicValueSource : NSObject <HFAggregatedCharacteristicValueSource, HFLightProfileAggregatedValueSource> {
    NSSet * _allServices;
    NSSet * _characteristics;
    NSDictionary * _characteristicsByType;
    HFServiceDescriptor * _primaryServiceDescriptor;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, readonly, copy) NSSet *allServices;
@property (nonatomic, readonly, copy) NSSet *characteristics;
@property (nonatomic, readonly, copy) NSDictionary *characteristicsByType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *lightProfiles;
@property (nonatomic, readonly) HFServiceDescriptor *primaryServiceDescriptor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)allCharacteristicsForCharacteristicType:(id)arg1;
- (id)allServices;
- (void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3;
- (id)characteristics;
- (id)characteristicsByType;
- (void)commitTransactionWithReason:(id)arg1;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)fetchNaturalLightColorTemperatureForBrightness:(long long)arg1 completion:(id /* block */)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithValueSource:(id)arg1 characteristics:(id)arg2 primaryServiceDescriptor:(id)arg3;
- (id)initWithValueSource:(id)arg1 services:(id)arg2 primaryServiceDescriptor:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isNaturalLightingEnabled;
- (bool)isNaturalLightingSupported;
- (id)lightProfiles;
- (id)metadataForCharacteristicType:(id)arg1;
- (id)primaryServiceDescriptor;
- (id)readValuesForCharacteristicTypes:(id)arg1;
- (id)readValuesForServiceStateRecipe:(id)arg1;
- (id)valueSource;
- (id)writeNaturalLightEnabledState:(bool)arg1;
- (id)writeValuesForCharacteristicRecipes:(id)arg1;
- (id)writeValuesForCharacteristicTypes:(id)arg1;

@end
