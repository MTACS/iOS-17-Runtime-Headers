
@interface HMDNetworkRouterClientStatus : NSObject <HAPTLVProtocol, NSCopying> {
    HAPTLVUnsignedNumberValue * _clientIdentifier;
    HMDNetworkRouterIPAddressList * _ipAddressList;
    HAPTLVUnsignedNumberValue * _lanIdentifier;
    NSData * _macAddress;
    NSString * _name;
    HAPTLVSignedNumberValue * _rssi;
}

@property (nonatomic, retain) HAPTLVUnsignedNumberValue *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDNetworkRouterIPAddressList *ipAddressList;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *lanIdentifier;
@property (nonatomic, retain) NSData *macAddress;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) HAPTLVSignedNumberValue *rssi;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithClientIdentifier:(id)arg1 macAddress:(id)arg2 ipAddressList:(id)arg3 lanIdentifier:(id)arg4 name:(id)arg5 rssi:(id)arg6;
- (id)ipAddressList;
- (bool)isEqual:(id)arg1;
- (id)lanIdentifier;
- (id)macAddress;
- (id)name;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)rssi;
- (id)serializeWithError:(id*)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setIpAddressList:(id)arg1;
- (void)setLanIdentifier:(id)arg1;
- (void)setMacAddress:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRssi:(id)arg1;

@end
