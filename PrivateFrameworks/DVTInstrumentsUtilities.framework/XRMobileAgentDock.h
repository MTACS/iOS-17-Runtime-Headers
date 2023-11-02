
@interface XRMobileAgentDock : NSObject <XRMobileAgentStop> {
    bool  _abandoned;
    bool  _agentExecuted;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _cond;
    XRMobileAgent * _dockedAgent;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _mutex;
    NSMutableArray * _waitingAgents;
}

@property (nonatomic, readonly) int agentStopDiagnosticsTypeCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) XRMobileAgent *dockedAgent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)abandon;
- (void)dealloc;
- (id)dockedAgent;
- (void)executeDockedAgent;
- (id)init;
- (void)receiveMobileAgent:(id)arg1;
- (void)releaseDockedAgent;
- (void)setDockedAgent:(id)arg1;
- (bool)waitForAgentToDock;

@end
