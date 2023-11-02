
@interface HAP2AccessoryServerEncodingThread : HAP2LoggingObject <HAP2AccessoryServerEncoding> {
    NSString * _accessoryDescription;
    unsigned long long  _encodingFeatures;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long encodingFeatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_parseShortFormUUID:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_parseCharacteristicMetadata:(id)arg1 error:(id*)arg2;
- (id)_parseCharacteristicResponsesWithBodyData:(id)arg1 request:(id)arg2 error:(id*)arg3;
- (id)_parseCharacteristics:(id)arg1 error:(id*)arg2;
- (id)_parseServiceList:(id)arg1 error:(id*)arg2;
- (id)_parseTopLevelAttributeDatabaseFromData:(id)arg1 error:(id*)arg2;
- (id)decodeBodyData:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3;
- (id)description;
- (id)encodeBodyValue:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)encodingFeatures;
- (id)eventsForData:(id)arg1 error:(id*)arg2;
- (id)executeWriteRequestForCharacteristics:(id)arg1 error:(id*)arg2;
- (id)groupingsForReadRequestsForCharacteristics:(id)arg1;
- (id)groupingsForWriteRequestsForCharacteristics:(id)arg1;
- (id)initWithEncodingFeatures:(unsigned long long)arg1 accessoryDescription:(id)arg2;
- (id)notificationRequestsForCharacteristics:(id)arg1 type:(unsigned long long)arg2 error:(id*)arg3;
- (id)prepareWriteRequestForCharacteristics:(id)arg1 ttl:(double)arg2 error:(id*)arg3;
- (id)readRequestForAttributeDatabaseWithEncryption:(bool)arg1 error:(id*)arg2;
- (id)readRequestForCharacteristics:(id)arg1 shouldEncrypt:(bool)arg2 error:(id*)arg3;
- (id)requestToAddPairing:(id)arg1 characteristic:(id)arg2 error:(id*)arg3;
- (id)requestToListPairingsWithCharacteristic:(id)arg1 error:(id*)arg2;
- (id)requestToRemovePairing:(id)arg1 characteristic:(id)arg2 error:(id*)arg3;
- (id)responseForRequest:(id)arg1 bodyData:(id)arg2 error:(id*)arg3;
- (id)unpairedIdentifyRequestWithError:(id*)arg1;
- (id)writeRequestForCharacteristics:(id)arg1 shouldEncrypt:(bool)arg2 error:(id*)arg3;

@end
