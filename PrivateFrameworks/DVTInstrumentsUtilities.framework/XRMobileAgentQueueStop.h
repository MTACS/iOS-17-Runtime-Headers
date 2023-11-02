
@interface XRMobileAgentQueueStop : NSObject <XRMobileAgentStop> {
    int  _diagnosticID;
    NSObject<OS_dispatch_queue> * _executionQueue;
    NSObject<OS_dispatch_queue> * _funnelQueue;
    bool  _holdIsPossible;
}

@property (nonatomic, readonly) int agentStopDiagnosticsTypeCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)backgroundQueueStop;
+ (void)initialize;
+ (id)mainQueueStop;
+ (id)userInitiatedQueueStop;
+ (id)userInteractiveQueueStop;
+ (id)utilityQueueStop;

- (void).cxx_destruct;
- (void)_escortAgentToExit:(id)arg1 withTicket:(id)arg2;
- (void)_executeAgent:(id)arg1;
- (void)_executeWelcomeForAgent:(id)arg1;
- (id)_funnelQueue;
- (bool)_holdReceivedAgent:(id)arg1 ticket:(id)arg2;
- (void)_prepareAgentToExecute:(id)arg1 withTicket:(id)arg2;
- (void)_runAgentEpilogue:(id)arg1;
- (void)_runAgentPrologue:(id)arg1;
- (void)_welcomeAgent:(id)arg1;
- (void)_welcomeAgent:(id)arg1 followedByAgents:(id)arg2;
- (void)_welcomeAgents:(id)arg1;
- (int)agentStopDiagnosticsTypeCode;
- (id)init;
- (id)initWithDispatchQueue:(id)arg1;
- (id)initWithDispatchQueue:(id)arg1 funnelTarget:(id)arg2;
- (id)initWithMainQueue;
- (void)receiveMobileAgent:(id)arg1;

@end
