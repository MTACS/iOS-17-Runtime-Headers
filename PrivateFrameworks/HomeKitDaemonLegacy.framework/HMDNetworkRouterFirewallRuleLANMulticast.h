
@interface HMDNetworkRouterFirewallRuleLANMulticast : HMDNetworkRouterFirewallRuleLAN {
    HMFNetAddress * _ipAddress;
    unsigned short  _port;
}

@property (nonatomic, readonly) HMFNetAddress *ipAddress;
@property (nonatomic, readonly) unsigned short port;

+ (id)createWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(bool)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(bool)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(bool)arg7 ruleDictionary:(id)arg8 error:(id*)arg9;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)initWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(bool)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(bool)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(bool)arg7 ipAddress:(id)arg8 port:(unsigned short)arg9;
- (id)ipAddress;
- (bool)isEqual:(id)arg1;
- (unsigned short)port;
- (id)prettyJSONDictionary;

@end
