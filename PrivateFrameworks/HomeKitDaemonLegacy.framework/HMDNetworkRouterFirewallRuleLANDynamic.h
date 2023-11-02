
@interface HMDNetworkRouterFirewallRuleLANDynamic : HMDNetworkRouterFirewallRuleLAN {
    bool  _advertisingOnly;
    unsigned char  _advertisingProtocol;
    NSString * _serviceType;
    unsigned char  _transportProtocol;
}

@property (getter=isAdvertisingOnly, nonatomic, readonly) bool advertisingOnly;
@property (nonatomic, readonly) unsigned char advertisingProtocol;
@property (nonatomic, readonly) NSString *serviceType;
@property (nonatomic, readonly) unsigned char transportProtocol;

+ (id)__advertisingProtocolToString:(unsigned char)arg1;
+ (bool)__decodeAdvertisingProtocol:(id)arg1 advertisingProtocol:(unsigned char*)arg2 error:(id*)arg3;
+ (bool)__decodeFlags:(id)arg1 advertisingOnly:(bool*)arg2 error:(id*)arg3;
+ (bool)__decodeServiceType:(id)arg1 serviceType:(id*)arg2 error:(id*)arg3;
+ (id)createWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(bool)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(bool)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(bool)arg7 ruleDictionary:(id)arg8 error:(id*)arg9;

- (void).cxx_destruct;
- (unsigned char)advertisingProtocol;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)initWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(bool)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(bool)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(bool)arg7 transportProtocol:(unsigned char)arg8 advertisingProtocol:(unsigned char)arg9 advertisingOnly:(bool)arg10 serviceType:(id)arg11;
- (bool)isAdvertisingOnly;
- (bool)isEqual:(id)arg1;
- (id)prettyJSONDictionary;
- (id)serviceType;
- (unsigned char)transportProtocol;

@end
