
@protocol HAP2EncodedCharacteristicEvent <NSObject>

@required

- (NSData *)encodedContextData;
- (<HAP2AccessoryCharacteristicEncodedData> *)encodedValueData;
- (NSNumber *)instanceID;

@end
