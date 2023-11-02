
@interface HAP2TLVParamServiceSignature : NSObject <HAPTLVProtocol, NSCopying> {
    HAP2TLVParamCharacteristicList * _characteristicList;
    HAPTLVUnsignedNumberValue * _instanceID;
    NSData * _linkedServices;
    HAP2TLVServicePropertiesWrapper * _properties;
    NSData * _serviceType;
}

@property (nonatomic, retain) HAP2TLVParamCharacteristicList *characteristicList;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *instanceID;
@property (nonatomic, retain) NSData *linkedServices;
@property (nonatomic, retain) HAP2TLVServicePropertiesWrapper *properties;
@property (nonatomic, retain) NSData *serviceType;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)characteristicList;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithInstanceID:(id)arg1 serviceType:(id)arg2 properties:(id)arg3 linkedServices:(id)arg4 characteristicList:(id)arg5;
- (id)instanceID;
- (bool)isEqual:(id)arg1;
- (id)linkedServices;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)properties;
- (id)serializeWithError:(id*)arg1;
- (id)serviceType;
- (void)setCharacteristicList:(id)arg1;
- (void)setInstanceID:(id)arg1;
- (void)setLinkedServices:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setServiceType:(id)arg1;

@end
