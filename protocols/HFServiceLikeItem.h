
@protocol HFServiceLikeItem <HFHomeKitItemProtocol, HFHomeVendor, HFServiceVendor, NSCopying, HFNamingComponentCreating>

@required

- (id)copyWithValueSource:(id <HFCharacteristicValueSource>)arg1;
- (<HFCharacteristicValueSource> *)valueSource;

@end
