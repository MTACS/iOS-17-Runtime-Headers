
@protocol HAP2AccessoryServerEncoding <NSObject>

@required

- (<HAP2AccessoryCharacteristicEncodableBodyValue> *)decodeBodyData:(id <HAP2AccessoryCharacteristicEncodedData>)arg1 format:(unsigned long long)arg2 error:(id*)arg3;
- (NSData *)encodeBodyValue:(id <HAP2AccessoryCharacteristicEncodableBodyValue>)arg1 format:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)encodingFeatures;
- (NSArray *)eventsForData:(NSData *)arg1 error:(id*)arg2;
- (<HAP2EncodedCharacteristicRequest> *)executeWriteRequestForCharacteristics:(NSArray *)arg1 error:(id*)arg2;
- (NSArray *)groupingsForReadRequestsForCharacteristics:(NSArray *)arg1;
- (NSArray *)groupingsForWriteRequestsForCharacteristics:(NSArray *)arg1;
- (NSArray *)notificationRequestsForCharacteristics:(NSArray *)arg1 type:(unsigned long long)arg2 error:(id*)arg3;
- (<HAP2EncodedCharacteristicRequest> *)prepareWriteRequestForCharacteristics:(NSArray *)arg1 ttl:(double)arg2 error:(id*)arg3;
- (<HAP2EncodedRequest> *)readRequestForAttributeDatabaseWithEncryption:(bool)arg1 error:(id*)arg2;
- (<HAP2EncodedCharacteristicRequest> *)readRequestForCharacteristics:(NSArray *)arg1 shouldEncrypt:(bool)arg2 error:(id*)arg3;
- (<HAP2EncodedRequest> *)requestToAddPairing:(HAPPairingIdentity *)arg1 characteristic:(HAPCharacteristic *)arg2 error:(id*)arg3;
- (<HAP2EncodedRequest> *)requestToListPairingsWithCharacteristic:(HAPCharacteristic *)arg1 error:(id*)arg2;
- (<HAP2EncodedRequest> *)requestToRemovePairing:(HAPPairingIdentity *)arg1 characteristic:(HAPCharacteristic *)arg2 error:(id*)arg3;
- (<HAP2EncodedResponse> *)responseForRequest:(id <HAP2EncodedRequest>)arg1 bodyData:(NSData *)arg2 error:(id*)arg3;
- (<HAP2EncodedRequest> *)unpairedIdentifyRequestWithError:(id*)arg1;
- (<HAP2EncodedCharacteristicRequest> *)writeRequestForCharacteristics:(NSArray *)arg1 shouldEncrypt:(bool)arg2 error:(id*)arg3;

@end
