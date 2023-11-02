
@interface NEPolicyResult : NSObject <NEPrettyDescription> {
    NSUUID * _agentUUID;
    unsigned int  _controlUnit;
    unsigned int  _dropFlags;
    unsigned int  _effectiveType;
    NSString * _interfaceName;
    unsigned int  _passFlags;
    long long  _resultType;
    NSArray * _routeRules;
    long long  _secondaryResultType;
    unsigned int  _serviceData;
    unsigned int  _skipOrder;
}

@property long long resultType;

+ (id)allowUnentitled;
+ (id)divertSocketToControlUnit:(unsigned int)arg1;
+ (id)drop;
+ (id)dropWithFlags:(unsigned int)arg1;
+ (id)filterWithControlUnit:(unsigned int)arg1;
+ (id)netAgentUUID:(id)arg1;
+ (id)pass;
+ (id)passWithFlags:(unsigned int)arg1;
+ (id)prohibitFilters;
+ (id)removeNetworkAgentUUID:(id)arg1;
+ (id)routeRules:(id)arg1;
+ (id)scopeSocketToInterfaceName:(id)arg1;
+ (id)scopeToDirectInterface;
+ (id)scopedNetworkAgent:(id)arg1;
+ (id)skipWithOrder:(unsigned int)arg1;
+ (id)tunnelIPToInterfaceName:(id)arg1 secondaryResultType:(long long)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)init;
- (long long)resultType;
- (void)setResultType:(long long)arg1;

@end
