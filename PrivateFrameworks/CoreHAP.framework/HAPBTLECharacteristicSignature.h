
@interface HAPBTLECharacteristicSignature : HMFObject {
    bool  _authenticated;
    HAPCharacteristicMetadata * _characteristicMetadata;
    unsigned long long  _characteristicProperties;
    NSUUID * _characteristicType;
    NSNumber * _serviceInstanceID;
    NSUUID * _serviceType;
}

@property (getter=isAuthenticated, nonatomic, readonly) bool authenticated;
@property (nonatomic, readonly) HAPCharacteristicMetadata *characteristicMetadata;
@property (nonatomic, readonly) unsigned long long characteristicProperties;
@property (nonatomic, readonly, copy) NSUUID *characteristicType;
@property (nonatomic, readonly, copy) NSNumber *serviceInstanceID;
@property (nonatomic, readonly, copy) NSUUID *serviceType;

- (void).cxx_destruct;
- (id)characteristicMetadata;
- (unsigned long long)characteristicProperties;
- (id)characteristicType;
- (id)initWithCharacteristicType:(id)arg1 serviceInstanceID:(id)arg2 serviceType:(id)arg3 characteristicProperties:(unsigned long long)arg4 characteristicMetadata:(id)arg5 authenticated:(bool)arg6;
- (bool)isAuthenticated;
- (id)serviceInstanceID;
- (id)serviceType;

@end
