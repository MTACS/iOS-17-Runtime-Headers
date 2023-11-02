
@interface IDSStunConnectionDataController : NSObject {
    NSMutableDictionary * _tokenToConnectionData;
    NSMutableDictionary * _tokenToDeliveryStatus;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)candidatesFromData:(id)arg1 token:(id)arg2;
- (id)dataFromCandidates:(id)arg1 token:(id)arg2 remoteDeviceVersion:(unsigned int)arg3;
- (unsigned long long)deliveryStatus:(id)arg1;
- (void)removeData:(id)arg1;
- (void)setDeliveryStatus:(id)arg1 status:(unsigned long long)arg2;

@end
