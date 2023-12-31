
@protocol HFAggregatedCharacteristicValueSource <HFCharacteristicValueOperationBatching, NAIdentifiable, NSCopying>

@required

- (NSSet *)allCharacteristicsForCharacteristicType:(NSString *)arg1;
- (NSSet *)allServices;
- (id)copyWithValueSource:(id <HFCharacteristicValueSource>)arg1;
- (HMCharacteristicMetadata *)metadataForCharacteristicType:(NSString *)arg1;
- (HFServiceDescriptor *)primaryServiceDescriptor;
- (NAFuture *)readValuesForCharacteristicTypes:(NSSet *)arg1;
- (NAFuture *)readValuesForServiceStateRecipe:(HFServiceStateRecipe *)arg1;
- (<HFCharacteristicValueSource> *)valueSource;
- (NAFuture *)writeValuesForCharacteristicRecipes:(NSDictionary *)arg1;
- (NAFuture *)writeValuesForCharacteristicTypes:(NSDictionary *)arg1;

@end
