
@interface NSPFlowDivert : NEAppProxyProviderContainer {
    NSPConfiguration * _configuration;
    NEFlowDivertFileHandle * _flowDivertControlHandle;
    NEPolicySession * _policySession;
    bool  _shouldResetPolicies;
    bool  _started;
}

@property (nonatomic, retain) NSPConfiguration *configuration;
@property (nonatomic, retain) NEFlowDivertFileHandle *flowDivertControlHandle;
@property (retain) NEPolicySession *policySession;
@property bool shouldResetPolicies;
@property bool started;

- (void).cxx_destruct;
- (void)addPoliciesForAgent:(id)arg1 conditions:(id)arg2;
- (void)addPoliciesForDivertDNSOnly:(id)arg1 domainConditions:(id)arg2 divertResult:(id)arg3;
- (void)addPolicy:(id)arg1;
- (id)configuration;
- (id)createFlowDivertSocketHandle;
- (id)createPolicySession;
- (void)destroyFlowDivertSocketHandles;
- (void)destroyPolicySession;
- (void)didFailWithError:(id)arg1;
- (void)didStartWithError:(id)arg1;
- (id)flowDivertControlHandle;
- (id)getAgentResults:(id)arg1;
- (id)getAgentResultsForSelf;
- (id)getEffectiveAppRules:(id)arg1;
- (id)getExecutableConditions:(id)arg1;
- (id)initWithDelegate:(id)arg1 providerClass:(Class)arg2 configuration:(id)arg3;
- (id)policySession;
- (bool)resetPolicies:(bool)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setFlowDivertControlHandle:(id)arg1;
- (void)setPolicySession:(id)arg1;
- (void)setShouldResetPolicies:(bool)arg1;
- (void)setStarted:(bool)arg1;
- (bool)shouldResetPolicies;
- (void)startWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)started;
- (void)stop;
- (void)teardown;

@end
