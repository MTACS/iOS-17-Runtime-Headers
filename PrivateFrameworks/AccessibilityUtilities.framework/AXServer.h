
@interface AXServer : NSObject {
    NSMutableArray * _actionHandlers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _actionHandlersLock;
    AXDispatchTimer * _assertionRetryTimer;
    NSMutableArray * _assertionWorkBacklog;
    NSObject<OS_dispatch_queue> * _assertionWorkQueue;
    AXIPCClient * _client;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _clientLock;
    AXIPCServer * _server;
    NSString * _serverIdentifier;
    bool  _shouldRegisterClientCallbackSourceOnMainRunloop;
}

@property (nonatomic, retain) NSMutableArray *actionHandlers;
@property (nonatomic, retain) AXDispatchTimer *assertionRetryTimer;
@property (nonatomic, retain) NSMutableArray *assertionWorkBacklog;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *assertionWorkQueue;
@property (nonatomic, retain) AXIPCClient *client;
@property (nonatomic, retain) AXIPCServer *server;
@property (nonatomic, copy) NSString *serverIdentifier;
@property (nonatomic) bool shouldRegisterClientCallbackSourceOnMainRunloop;

- (void).cxx_destruct;
- (int)_actionResultKey;
- (bool)_connectIfNecessary;
- (bool)_connectServerIfNecessary;
- (void)_didConnectToClient;
- (void)_didConnectToServer;
- (void)_ensureAssertionsHaveBeenProcessedWithCompletion:(id /* block */)arg1;
- (id)_handleActionResult:(id)arg1;
- (void)_initializeAssertionBookkeeping;
- (void)_processAssertionBacklog;
- (void)_registerActionHandler:(id /* block */)arg1 withIdentifierCallback:(id /* block */)arg2 retryInterval:(double)arg3 registrationMessageKey:(int)arg4;
- (void)_removeActionHandler:(id)arg1 registrationMessageKey:(int)arg2;
- (id)_sendMessage:(id)arg1 error:(id*)arg2;
- (id)_serviceName;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (void)acquireAssertionWithType:(id)arg1 identifier:(id)arg2;
- (id)actionHandlers;
- (id)assertionRetryTimer;
- (id)assertionWorkBacklog;
- (id)assertionWorkQueue;
- (id)client;
- (void)dealloc;
- (id)init;
- (void)relinquishAssertionWithType:(id)arg1 identifier:(id)arg2;
- (void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 boolResultHandler:(id /* block */)arg3;
- (void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 handler:(id /* block */)arg3;
- (void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 objectResultHandler:(id /* block */)arg3;
- (id)sendMessage:(id)arg1;
- (void)sendSimpleMessage:(id)arg1;
- (bool)sendSimpleMessage:(id)arg1 enqueueError:(id*)arg2;
- (id)sendSimpleMessageWithObjectResult:(id)arg1;
- (bool)sendSimpleMessageWithResult:(id)arg1;
- (id)server;
- (id)serverIdentifier;
- (void)setActionHandlers:(id)arg1;
- (void)setAssertionRetryTimer:(id)arg1;
- (void)setAssertionWorkBacklog:(id)arg1;
- (void)setAssertionWorkQueue:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setServer:(id)arg1;
- (void)setServerIdentifier:(id)arg1;
- (void)setShouldRegisterClientCallbackSourceOnMainRunloop:(bool)arg1;
- (bool)shouldRegisterClientCallbackSourceOnMainRunloop;

@end
