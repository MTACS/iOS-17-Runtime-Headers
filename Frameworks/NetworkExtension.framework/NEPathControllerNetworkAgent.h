
@interface NEPathControllerNetworkAgent : NENetworkAgent {
    NSString * _advisoryAgentDomain;
    NSString * _advisoryAgentType;
    NSMutableArray * _advisoryInterfaceArray;
    id /* block */  _internalAssertHandler;
    id /* block */  _internalUnassertHandler;
    bool  _isForcedAdvisory;
    bool  _noAdvisoryTimer;
    NSMutableArray * _predictedInterfaceArray;
    bool  _preferAdvisory;
    bool  _weakAdvisory;
    bool  updateClientsImmediately;
}

@property (retain) NSString *advisoryAgentDomain;
@property (retain) NSString *advisoryAgentType;
@property (retain) NSMutableArray *advisoryInterfaceArray;
@property (nonatomic) bool isForcedAdvisory;
@property bool noAdvisoryTimer;
@property (retain) NSMutableArray *predictedInterfaceArray;
@property bool preferAdvisory;
@property bool weakAdvisory;

+ (id)agentFromData:(id)arg1;
+ (id)agentType;

- (void).cxx_destruct;
- (id)advisoryAgentDomain;
- (id)advisoryAgentType;
- (id)advisoryInterfaceArray;
- (bool)assertAgentWithOptions:(id)arg1;
- (id)copyAgentData;
- (id)initWithAdvisoryAgentDomain:(id)arg1 agentType:(id)arg2 advisoryMode:(unsigned long long)arg3;
- (id)initWithAdvisoryInterface:(id)arg1 advisoryMode:(unsigned long long)arg2;
- (bool)isForcedAdvisory;
- (bool)noAdvisoryTimer;
- (id)predictedInterfaceArray;
- (bool)preferAdvisory;
- (void)setAdvisoryAgentDomain:(id)arg1;
- (void)setAdvisoryAgentType:(id)arg1;
- (void)setAdvisoryInterfaceArray:(id)arg1;
- (void)setAssertHandler:(id /* block */)arg1;
- (void)setIsForcedAdvisory:(bool)arg1;
- (void)setNoAdvisoryTimer:(bool)arg1;
- (void)setPredictedInterfaceArray:(id)arg1;
- (void)setPreferAdvisory:(bool)arg1;
- (void)setUnassertHandler:(id /* block */)arg1;
- (void)setUpdateClientsImmediately:(bool)arg1;
- (void)setWeakAdvisory:(bool)arg1;
- (void)unassertAgentWithOptions:(id)arg1;
- (bool)updateClientsImmediately;
- (bool)weakAdvisory;

@end
