
@interface HMDNetworkRouterClientStatusIdentifier : NSObject <HAPTLVProtocol, NSCopying> {
    HAPTLVUnsignedNumberValue * _clientIdentifier;
    HMDNetworkRouterIPAddress * _ipAddress;
    NSData * _macAddress;
}

@property (nonatomic, retain) HAPTLVUnsignedNumberValue *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDNetworkRouterIPAddress *ipAddress;
@property (nonatomic, retain) NSData *macAddress;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithClientIdentifier:(id)arg1 macAddress:(id)arg2 ipAddress:(id)arg3;
- (id)ipAddress;
- (bool)isEqual:(id)arg1;
- (id)macAddress;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setIpAddress:(id)arg1;
- (void)setMacAddress:(id)arg1;

@end
