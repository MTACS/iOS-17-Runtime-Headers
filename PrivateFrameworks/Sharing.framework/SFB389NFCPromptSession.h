
@interface SFB389NFCPromptSession : NSObject {
    bool  _activateCalled;
    SFB389NFCPromptConfiguration * _config;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _errorHandler;
    bool  _invalidateCalled;
    id /* block */  _userResponseHandler;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, copy) id /* block */ userResponseHandler;

- (void).cxx_destruct;
- (void)_ensureXPCStarted;
- (id)_getRemoteObjectProxy;
- (void)activate;
- (void)dealloc;
- (id)dispatchQueue;
- (id /* block */)errorHandler;
- (id)init;
- (id)initWithInitialConfiguration:(id)arg1;
- (void)invalidate;
- (void)setDispatchQueue:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setUserResponseHandler:(id /* block */)arg1;
- (void)updateCardConfiguration:(id)arg1;
- (id /* block */)userResponseHandler;

@end
