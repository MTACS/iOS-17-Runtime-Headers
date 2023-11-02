
@interface HAP2EncodedCharacteristicRequestThread : HAP2LoggingObject <HAP2EncodedCharacteristicRequest> {
    bool  _enforcePDUBodyLength;
    NSArray * _internalCharacteristics;
    unsigned long long  _requestType;
}

@property (nonatomic, readonly) NSArray *btleRequests;
@property (nonatomic, readonly) NSArray *characteristics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEncrypted, nonatomic, readonly) bool encrypted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)btleRequests;
- (id)characteristics;
- (id)initWithBTLERequests:(id)arg1 requestType:(unsigned long long)arg2 enforcePDUBodyLength:(bool)arg3;
- (bool)isEncrypted;
- (id)serialize;
- (unsigned long long)type;

@end
