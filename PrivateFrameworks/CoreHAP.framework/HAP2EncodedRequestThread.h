
@interface HAP2EncodedRequestThread : HAP2LoggingObject <HAP2EncodedRequest> {
    HAP2AccessoryServerEncodingThreadBTLERequest * _btleRequest;
    bool  _enforcePDUBodyLength;
}

@property (nonatomic, readonly) HAP2AccessoryServerEncodingThreadBTLERequest *btleRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEncrypted, nonatomic, readonly) bool encrypted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

+ (unsigned char)btleRequestTypeFromHAP2RequestType:(unsigned long long)arg1;
+ (unsigned long long)hap2RequestTypeFromBTLERequestType:(unsigned char)arg1;

- (void).cxx_destruct;
- (id)btleRequest;
- (id)initWithBTLERequest:(id)arg1 enforcePDUBodyLength:(bool)arg2;
- (bool)isEncrypted;
- (id)serialize;
- (unsigned long long)type;

@end
