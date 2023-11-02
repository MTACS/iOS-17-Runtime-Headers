
@interface HMDNetworkRouterMulticastBridgingRule : NSObject <HAPTLVProtocol, HMDNetworkRouterLANRule, NSCopying> {
    HMDNetworkRouterIPAddress * _destinationIPAddress;
    HAPTLVUnsignedNumberValue * _destinationPort;
    HMDNetworkRouterRuleDirection * _direction;
    HMDNetworkRouterLANIdentifierList * _lanIdentifierList;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HMDNetworkRouterIPAddress *destinationIPAddress;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *destinationPort;
@property (nonatomic, retain) HMDNetworkRouterRuleDirection *direction;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDNetworkRouterLANIdentifierList *lanIdentifierList;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;
+ (id)ruleFromFirewallRuleLAN:(id)arg1;

- (void).cxx_destruct;
- (void)addTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationIPAddress;
- (id)destinationPort;
- (id)direction;
- (id)init;
- (id)initWithDirection:(id)arg1 lanIdentifierList:(id)arg2 destinationIPAddress:(id)arg3 destinationPort:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)lanIdentifierList;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setDestinationIPAddress:(id)arg1;
- (void)setDestinationPort:(id)arg1;
- (void)setDirection:(id)arg1;
- (void)setLanIdentifierList:(id)arg1;

@end
