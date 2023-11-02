
@protocol MKFCharacteristicPublicExtensions

@required

- (NSDictionary *)pr_dictionaryRepresentation;
- (HMDCharacteristicMetadata *)pr_hapMetadata;
- (void)pr_updateWithDictionary:(NSDictionary *)arg1;
- (void)pr_updateWithHAPMetadata:(HMDCharacteristicMetadata *)arg1;

@end
