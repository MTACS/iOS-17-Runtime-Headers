
@interface _EXHostSessionDriver : NSObject <_EXHostViewControllerSessionDelegate> {
    bool  _active;
    _EXHostViewControllerSession * _activeSession;
    NSObject<OS_dispatch_source> * _deactivateSessionTimer;
    NSMutableArray * _deactivatingSessions;
    <_EXHostViewControllerProtocol> * _hostViewController;
    _EXHostConfiguration * _retryProcessConfiguration;
    _EXHostViewControllerSessionConfiguration * _retrySessionConfiguration;
    _EXHostViewControllerSession * _session;
}

@property bool active;
@property (retain) _EXHostViewControllerSession *activeSession;
@property (retain) NSObject<OS_dispatch_source> *deactivateSessionTimer;
@property (retain) NSMutableArray *deactivatingSessions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property <_EXHostViewControllerProtocol> *hostViewController;
@property (retain) _EXHostConfiguration *retryProcessConfiguration;
@property (retain) _EXHostViewControllerSessionConfiguration *retrySessionConfiguration;
@property (retain) _EXHostViewControllerSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)active;
- (id)activeSession;
- (id)deactivateSessionTimer;
- (id)deactivatingSessions;
- (void)dealloc;
- (id)extensionProcess;
- (void)hostSessionDidInvalidate:(id)arg1;
- (void)hostSessionDidPrepareForHosting:(id)arg1;
- (id)hostSessionHostView:(id)arg1;
- (void)hostSessionViewControllerReady:(id)arg1;
- (id)hostViewController;
- (id)initWithHostViewController:(id)arg1;
- (void)invalidateDeactivatingSessions;
- (id)makeXPCConnectionWithError:(id*)arg1;
- (void)notifyHostViewControllerDidEndHosting:(id)arg1;
- (void)notifyHostViewControllerWillDeactivate:(id)arg1;
- (void)resume;
- (id)retryProcessConfiguration;
- (id)retrySessionConfiguration;
- (void)scheduleInvalidations;
- (id)session;
- (void)setActive:(bool)arg1;
- (void)setActiveSession:(id)arg1;
- (void)setDeactivateSessionTimer:(id)arg1;
- (void)setDeactivatingSessions:(id)arg1;
- (void)setHostViewController:(id)arg1;
- (void)setRetryProcessConfiguration:(id)arg1;
- (void)setRetrySessionConfiguration:(id)arg1;
- (void)setSession:(id)arg1;
- (bool)shouldAcceptXPCConnection:(id)arg1;
- (void)startSessionWithProcessConfiguration:(id)arg1 configuration:(id)arg2;

@end
