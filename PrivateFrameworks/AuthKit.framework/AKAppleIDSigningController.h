
@interface AKAppleIDSigningController : NSObject {
    AKAppleIDAuthenticationController * _authenticationController;
    NSXPCConnection * _connection;
    NSString * _initialURLKey;
    bool  _isProxy;
    NSXPCListenerEndpoint * _listenerEndpoint;
    bool  _shouldSendAbsintheHeader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _signerLock;
    NSObject<OS_dispatch_queue> * _signingQueue;
}

@property (nonatomic, retain) AKAppleIDAuthenticationController *authenticationController;
@property (nonatomic, retain) NSString *initialURLKey;
@property (nonatomic) bool isProxy;
@property (nonatomic) bool shouldSendAbsintheHeader;

- (void).cxx_destruct;
- (void)_additionalAbsintheHeadersForRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_additionalAttestationHeadersForRequest:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)_connection;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (id)_parseDERCertificatesFromChain:(id)arg1 error:(id*)arg2;
- (void)absintheSignatureForData:(id)arg1 completion:(id /* block */)arg2;
- (void)attestationDataForRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)authenticationController;
- (void)dealloc;
- (id)init;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (id)initialURLKey;
- (bool)isProxy;
- (void)setAuthenticationController:(id)arg1;
- (void)setInitialURLKey:(id)arg1;
- (void)setIsProxy:(bool)arg1;
- (void)setShouldSendAbsintheHeader:(bool)arg1;
- (bool)shouldSendAbsintheHeader;
- (void)signWithBAAHeaders:(id)arg1 completion:(id /* block */)arg2;
- (void)signaturesForData:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)signingHeadersForRequest:(id)arg1 completion:(id /* block */)arg2;

@end
