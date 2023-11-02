
@interface HMDNetworkRouterFirewallRuleLANStatic : HMDNetworkRouterFirewallRuleLAN {
    NSArray * _icmpTypes;
    HMFNetAddress * _ipAddress;
    unsigned short  _portEnd;
    unsigned short  _portStart;
    unsigned char  _transportProtocol;
}

@property (nonatomic, readonly) NSArray *icmpTypes;
@property (nonatomic, readonly) HMFNetAddress *ipAddress;
@property (nonatomic, readonly) unsigned short portEnd;
@property (nonatomic, readonly) unsigned short portStart;
@property (nonatomic, readonly) unsigned char transportProtocol;

+ (id)createWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(bool)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(bool)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(bool)arg7 ruleDictionary:(id)arg8 error:(id*)arg9;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)icmpTypes;
- (id)initWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(bool)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(bool)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(bool)arg7 transportProtocol:(unsigned char)arg8 ipAddress:(id)arg9 portStart:(unsigned short)arg10 portEnd:(unsigned short)arg11 icmpTypes:(id)arg12;
- (id)ipAddress;
- (bool)isEqual:(id)arg1;
- (unsigned short)portEnd;
- (unsigned short)portStart;
- (id)prettyJSONDictionary;
- (unsigned char)transportProtocol;

@end
