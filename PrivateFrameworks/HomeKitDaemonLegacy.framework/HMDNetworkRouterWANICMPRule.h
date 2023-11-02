
@interface HMDNetworkRouterWANICMPRule : NSObject <HAPTLVProtocol, HMDNetworkRouterWANRule, NSCopying> {
    NSString * _hostDNSName;
    HMDNetworkRouterIPAddress * _hostIPEnd;
    HMDNetworkRouterIPAddress * _hostIPStart;
    HMDNetworkRouterICMPTypeList * _icmpTypes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *hostDNSName;
@property (nonatomic, retain) HMDNetworkRouterIPAddress *hostIPEnd;
@property (nonatomic, retain) HMDNetworkRouterIPAddress *hostIPStart;
@property (nonatomic, retain) HMDNetworkRouterICMPTypeList *icmpTypes;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)addTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)hostDNSName;
- (id)hostIPEnd;
- (id)hostIPStart;
- (id)icmpTypes;
- (id)init;
- (id)initWithHostDNSName:(id)arg1 hostIPStart:(id)arg2 hostIPEnd:(id)arg3 icmpTypes:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setHostDNSName:(id)arg1;
- (void)setHostIPEnd:(id)arg1;
- (void)setHostIPStart:(id)arg1;
- (void)setIcmpTypes:(id)arg1;

@end
