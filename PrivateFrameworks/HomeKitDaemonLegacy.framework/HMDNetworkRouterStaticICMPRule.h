
@interface HMDNetworkRouterStaticICMPRule : NSObject <HAPTLVProtocol, HMDNetworkRouterLANRule, NSCopying> {
    HMDNetworkRouterIPAddress * _destinationIPAddress;
    HMDNetworkRouterRuleDirection * _direction;
    HMDNetworkRouterICMPTypeList * _icmpTypeList;
    HMDNetworkRouterLANIdentifierList * _lanIdentifierList;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HMDNetworkRouterIPAddress *destinationIPAddress;
@property (nonatomic, retain) HMDNetworkRouterRuleDirection *direction;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDNetworkRouterICMPTypeList *icmpTypeList;
@property (nonatomic, retain) HMDNetworkRouterLANIdentifierList *lanIdentifierList;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;
+ (id)ruleFromFirewallRuleLAN:(id)arg1;

- (void).cxx_destruct;
- (void)addTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationIPAddress;
- (id)direction;
- (id)icmpTypeList;
- (id)init;
- (id)initWithDirection:(id)arg1 lanIdentifierList:(id)arg2 destinationIPAddress:(id)arg3 icmpTypeList:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)lanIdentifierList;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setDestinationIPAddress:(id)arg1;
- (void)setDirection:(id)arg1;
- (void)setIcmpTypeList:(id)arg1;
- (void)setLanIdentifierList:(id)arg1;

@end
