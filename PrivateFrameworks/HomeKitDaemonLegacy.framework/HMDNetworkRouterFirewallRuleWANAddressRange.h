
@interface HMDNetworkRouterFirewallRuleWANAddressRange : HMFObject {
    HMFNetAddress * _addressEnd;
    HMFNetAddress * _addressStart;
}

@property (nonatomic, readonly) HMFNetAddress *addressEnd;
@property (nonatomic, readonly) HMFNetAddress *addressStart;

- (void).cxx_destruct;
- (id)addressEnd;
- (id)addressStart;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)initWithAddressStart:(id)arg1 addressEnd:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)prettyJSONDictionary;

@end
