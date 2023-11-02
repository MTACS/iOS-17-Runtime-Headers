
@interface HMDNetworkRouterFirewallRuleWAN : HMDNetworkRouterFirewallRule {
    NSArray * _icmpTypes;
    unsigned short  _portEnd;
    unsigned short  _portStart;
    unsigned long long  _purpose;
    HMDNetworkRouterFirewallRuleWANSubject * _subject;
    unsigned char  _transportProtocol;
}

@property (nonatomic, readonly) NSArray *icmpTypes;
@property (nonatomic, readonly) unsigned short portEnd;
@property (nonatomic, readonly) unsigned short portStart;
@property (nonatomic, readonly) unsigned long long purpose;
@property (nonatomic, readonly) HMDNetworkRouterFirewallRuleWANSubject *subject;
@property (nonatomic, readonly) unsigned char transportProtocol;

+ (bool)__decodeAddress:(id)arg1 subject:(id*)arg2;
+ (bool)__decodeAddressRange:(id)arg1 endValue:(id)arg2 subject:(id*)arg3;
+ (bool)__decodeAddresses:(id)arg1 subject:(id*)arg2;
+ (bool)__decodeFlags:(id)arg1 critical:(bool*)arg2;
+ (bool)__decodeHostnames:(id)arg1 subject:(id*)arg2;
+ (bool)__decodePorts:(id)arg1 portStart:(unsigned short*)arg2 portEnd:(unsigned short*)arg3;
+ (bool)__decodePurpose:(id)arg1 purpose:(unsigned long long*)arg2;
+ (bool)__decodeSubject:(id)arg1 subject:(id*)arg2;
+ (bool)__decodeType:(id)arg1 transportProtocol:(unsigned char*)arg2 error:(id*)arg3;
+ (id)__nonWildcardAddressFrom:(id)arg1 key:(id)arg2;
+ (id)createWithJSONDictionary:(id)arg1 error:(id*)arg2;
+ (id)ipAddressAny;
+ (id)ipAddressAnyIPv4;
+ (id)ipAddressAnyIPv6;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)icmpTypes;
- (id)initWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(bool)arg3 purpose:(unsigned long long)arg4 transportProtocol:(unsigned char)arg5 subject:(id)arg6 portStart:(unsigned short)arg7 portEnd:(unsigned short)arg8 icmpTypes:(id)arg9;
- (bool)isEqual:(id)arg1;
- (unsigned short)portEnd;
- (unsigned short)portStart;
- (id)prettyJSONDictionary;
- (unsigned long long)purpose;
- (id)subject;
- (unsigned char)transportProtocol;

@end
