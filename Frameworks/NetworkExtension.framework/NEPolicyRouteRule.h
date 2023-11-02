
@interface NEPolicyRouteRule : NSObject <NEPrettyDescription> {
    long long  _action;
    unsigned int  _controlUnit;
    unsigned int  _effectiveType;
    NSString * _interfaceName;
    NSUUID * _matchNetworkAgent;
    NSUUID * _networkAgentUUID;
    long long  _type;
}

@property unsigned int controlUnit;
@property unsigned int effectiveType;
@property (retain) NSUUID *networkAgentUUID;

+ (id)routeRuleWithAction:(long long)arg1 forInterfaceName:(id)arg2;
+ (id)routeRuleWithAction:(long long)arg1 forNetworkAgent:(id)arg2;
+ (id)routeRuleWithAction:(long long)arg1 forType:(long long)arg2;

- (void).cxx_destruct;
- (unsigned int)controlUnit;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (unsigned int)effectiveType;
- (id)init;
- (id)networkAgentUUID;
- (void)setControlUnit:(unsigned int)arg1;
- (void)setEffectiveType:(unsigned int)arg1;
- (void)setNetworkAgentUUID:(id)arg1;

@end
