
@interface HMDNetworkRouterDynamicPortRule : NSObject <HAPTLVProtocol, HMDNetworkRouterLANRule, NSCopying> {
    HMDNetworkRouterAdvertisementProtocol * _advertisementProtocol;
    HMDNetworkRouterRuleDirection * _direction;
    HAPTLVUnsignedNumberValue * _flags;
    HMDNetworkRouterLANIdentifierList * _lanIdentifierList;
    HMDNetworkRouterProtocol * _protocol;
    HMDNetworkRouterServiceType * _serviceType;
}

@property (nonatomic, retain) HMDNetworkRouterAdvertisementProtocol *advertisementProtocol;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HMDNetworkRouterRuleDirection *direction;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *flags;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDNetworkRouterLANIdentifierList *lanIdentifierList;
@property (nonatomic, retain) HMDNetworkRouterProtocol *protocol;
@property (nonatomic, retain) HMDNetworkRouterServiceType *serviceType;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;
+ (id)ruleForHAP;
+ (id)ruleFromFirewallRuleLAN:(id)arg1;

- (void).cxx_destruct;
- (void)addTo:(id)arg1;
- (id)advertisementProtocol;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)direction;
- (id)flags;
- (id)init;
- (id)initWithDirection:(id)arg1 lanIdentifierList:(id)arg2 protocol:(id)arg3 advertisementProtocol:(id)arg4 flags:(id)arg5 serviceType:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)lanIdentifierList;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)protocol;
- (id)serializeWithError:(id*)arg1;
- (id)serviceType;
- (void)setAdvertisementProtocol:(id)arg1;
- (void)setDirection:(id)arg1;
- (void)setFlags:(id)arg1;
- (void)setLanIdentifierList:(id)arg1;
- (void)setProtocol:(id)arg1;
- (void)setServiceType:(id)arg1;

@end
