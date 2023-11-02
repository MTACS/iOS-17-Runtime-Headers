
@interface HMDNetworkRouterWANPortRule : NSObject <HAPTLVProtocol, HMDNetworkRouterWANRule, NSCopying> {
    NSString * _hostDNSName;
    HMDNetworkRouterIPAddress * _hostIPEnd;
    HMDNetworkRouterIPAddress * _hostIPStart;
    HAPTLVUnsignedNumberValue * _hostPortEnd;
    HAPTLVUnsignedNumberValue * _hostPortStart;
    HMDNetworkRouterProtocol * _protocol;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *hostDNSName;
@property (nonatomic, retain) HMDNetworkRouterIPAddress *hostIPEnd;
@property (nonatomic, retain) HMDNetworkRouterIPAddress *hostIPStart;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *hostPortEnd;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *hostPortStart;
@property (nonatomic, retain) HMDNetworkRouterProtocol *protocol;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)addTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)hostDNSName;
- (id)hostIPEnd;
- (id)hostIPStart;
- (id)hostPortEnd;
- (id)hostPortStart;
- (id)init;
- (id)initWithProtocol:(id)arg1 hostDNSName:(id)arg2 hostIPStart:(id)arg3 hostIPEnd:(id)arg4 hostPortStart:(id)arg5 hostPortEnd:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)protocol;
- (id)serializeWithError:(id*)arg1;
- (void)setHostDNSName:(id)arg1;
- (void)setHostIPEnd:(id)arg1;
- (void)setHostIPStart:(id)arg1;
- (void)setHostPortEnd:(id)arg1;
- (void)setHostPortStart:(id)arg1;
- (void)setProtocol:(id)arg1;

@end
