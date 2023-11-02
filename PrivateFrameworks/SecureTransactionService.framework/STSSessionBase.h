
@interface STSSessionBase : NSObject <NFSecureElementManagerSessionDelegate, NFSessionDelegate> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSObject<OS_dispatch_semaphore> * _controlSessionSem;
    bool  _controlSessionSuspended;
    <STSSessionBaseDelegate> * _delegate;
    STSHandler * _handler;
    bool  _hasStartedWithDelegate;
    NSObject<NFSession> * _initiatingSession;
    NFSecureElementManagerSession * _masterSESession;
    STSHardwareManagerWrapper * _nfHwManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sessionUpdateLock;
    id /* block */  _theStartCallback;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <STSSessionBaseDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) STSHandler *handler;
@property (nonatomic, readonly) bool hasStartedWithDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<NFSession> *initiatingSession;
@property (nonatomic, retain) NFSecureElementManagerSession *masterSESession;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ theStartCallback;

- (void).cxx_destruct;
- (void)_tearDownOnQueue:(bool)arg1 completion:(id /* block */)arg2;
- (id)activateChildSession;
- (id)callbackQueue;
- (id)canStartSession;
- (id)createHandlerForCredential:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)endSessionWithCompletion:(id /* block */)arg1;
- (void)fireSessionDidEndUnexpectedlyEventWithStatus:(unsigned long long)arg1;
- (void)handleSessionResumed:(id)arg1;
- (void)handleSessionSuspended:(id)arg1 withToken:(id)arg2;
- (id)handler;
- (bool)hasStartedWithDelegate;
- (id)init;
- (id)initiatingSession;
- (id)masterSESession;
- (id)nfHardwareManager;
- (void)secureElementManagerSessionDidEndUnexpectedly:(id)arg1;
- (id)setActiveCredential:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHandler:(id)arg1;
- (void)setInitiatingSession:(id)arg1;
- (void)setMasterSESession:(id)arg1;
- (void)setTheStartCallback:(id /* block */)arg1;
- (void)startWithDelegate:(id)arg1 isFirstInQueue:(bool*)arg2;
- (void)startWithDelegate:(id)arg1 isFirstInQueue:(bool*)arg2 completion:(id /* block */)arg3;
- (id /* block */)theStartCallback;
- (id)waitForControlSessionToBeReady:(int)arg1;

@end
