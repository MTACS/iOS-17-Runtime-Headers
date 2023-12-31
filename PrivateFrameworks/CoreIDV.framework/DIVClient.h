
@interface DIVClient : NSObject <DIVerificationClientSideProtocol> {
    DIVerificationSessionContext * _context;
    NSMutableSet * _disconnectionCallbacks;
    bool  _isDisconnected;
    <DIVerificationServerSideProtocol> * _remoteObjectProxy;
    NSXPCConnection * _serverConnection;
    unsigned long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)concludeVerification:(id)arg1;
- (void)configure:(id)arg1 completion:(id /* block */)arg2;
- (void)confirmVerificationCompletedWithFeedback:(id)arg1;
- (id)createDaemonDisconnectedError;
- (void)dealloc;
- (void)getVerificationResultWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)invalidate;
- (void)performVerificationWithAttributes:(id)arg1 completion:(id /* block */)arg2;
- (void)shareVerificationResultWithOptions:(id)arg1 completion:(id /* block */)arg2;

@end
