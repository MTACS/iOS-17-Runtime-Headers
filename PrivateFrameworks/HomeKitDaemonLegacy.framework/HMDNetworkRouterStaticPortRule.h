
@interface HMDNetworkRouterStaticPortRule : NSObject <HAPTLVProtocol, HMDNetworkRouterLANRule, NSCopying> {
    HMDNetworkRouterIPAddress * _destinationIPAddress;
    HAPTLVUnsignedNumberValue * _destinationPortEnd;
    HAPTLVUnsignedNumberValue * _destinationPortStart;
    HMDNetworkRouterRuleDirection * _direction;
    HMDNetworkRouterLANIdentifierList * _lanIdentifierList;
    HMDNetworkRouterProtocol * _protocol;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HMDNetworkRouterIPAddress *destinationIPAddress;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *destinationPortEnd;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *destinationPortStart;
@property (nonatomic, retain) HMDNetworkRouterRuleDirection *direction;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDNetworkRouterLANIdentifierList *lanIdentifierList;
@property (nonatomic, retain) HMDNetworkRouterProtocol *protocol;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;
+ (id)ruleFromFirewallRuleLAN:(id)arg1;

- (void).cxx_destruct;
- (void)addTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationIPAddress;
- (id)destinationPortEnd;
- (id)destinationPortStart;
- (id)direction;
- (id)init;
- (id)initWithDirection:(id)arg1 lanIdentifierList:(id)arg2 protocol:(id)arg3 destinationIPAddress:(id)arg4 destinationPortStart:(id)arg5 destinationPortEnd:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)lanIdentifierList;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)protocol;
- (id)serializeWithError:(id*)arg1;
- (void)setDestinationIPAddress:(id)arg1;
- (void)setDestinationPortEnd:(id)arg1;
- (void)setDestinationPortStart:(id)arg1;
- (void)setDirection:(id)arg1;
- (void)setLanIdentifierList:(id)arg1;
- (void)setProtocol:(id)arg1;

@end
