
@interface HMDNetworkRouterFirewallRuleLAN : HMDNetworkRouterFirewallRule {
    bool  _allowInterAccessoryConnections;
    unsigned char  _direction;
    unsigned long long  _purpose;
    bool  _requiredForHAPFunctionality;
}

@property (getter=areConnectionsWithOtherAccessoriesAllowed, nonatomic, readonly) bool allowInterAccessoryConnections;
@property (nonatomic, readonly) unsigned char direction;
@property (nonatomic, readonly) unsigned long long purpose;
@property (getter=isRequiredForHAPFunctionality, nonatomic, readonly) bool requiredForHAPFunctionality;

+ (bool)__decodeDirection:(id)arg1 direction:(unsigned char*)arg2 error:(id*)arg3;
+ (bool)__decodeFlags:(id)arg1 critical:(bool*)arg2 allowInterAccessoryConnections:(bool*)arg3 requiredForHAPFunctionality:(bool*)arg4 error:(id*)arg5;
+ (bool)__decodePurpose:(id)arg1 purpose:(unsigned long long*)arg2 error:(id*)arg3;
+ (bool)__decodeTransportProtocolFromJSONDictionary:(id)arg1 key:(id)arg2 transportProtocol:(unsigned char*)arg3 error:(id*)arg4;
+ (bool)__decodeType:(id)arg1 type:(unsigned char*)arg2 error:(id*)arg3;
+ (id)createWithJSONDictionary:(id)arg1 error:(id*)arg2;
+ (id)createWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(bool)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(bool)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(bool)arg7 ruleDictionary:(id)arg8 error:(id*)arg9;

- (bool)areConnectionsWithOtherAccessoriesAllowed;
- (id)attributeDescriptions;
- (unsigned char)direction;
- (unsigned long long)hash;
- (id)initWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(bool)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(bool)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(bool)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isRequiredForHAPFunctionality;
- (id)prettyJSONDictionary;
- (unsigned long long)purpose;

@end
