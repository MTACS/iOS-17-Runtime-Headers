
@interface HAP2AccessoryServerEncodingThreadBTLERequest : HAPBTLERequest {
    id  _requestedValue;
    unsigned char  _threadRequestType;
    long long  _writeOptions;
}

@property (nonatomic, readonly) bool expectsResponseBody;
@property (nonatomic, readonly) id requestedValue;
@property (nonatomic, readonly) unsigned char threadRequestType;
@property (nonatomic, readonly) long long writeOptions;

+ (id)attributeDatabaseRequest;
+ (id)executeWriteRequestForCharacteristic:(id)arg1 value:(id)arg2 options:(long long)arg3 error:(id*)arg4;
+ (id)notificationRequestForCharacteristic:(id)arg1 threadRequestType:(unsigned char)arg2 enforcePDUBodyLength:(bool)arg3;
+ (id)prepareWriteRequestForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 contextData:(id)arg4 options:(long long)arg5 error:(id*)arg6;
+ (id)readRequestForCharacteristic:(id)arg1;
+ (id)writeRequestForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 contextData:(id)arg4 options:(long long)arg5 error:(id*)arg6;

- (void).cxx_destruct;
- (bool)expectsResponseBody;
- (id)requestedValue;
- (unsigned char)threadRequestType;
- (long long)writeOptions;

@end
