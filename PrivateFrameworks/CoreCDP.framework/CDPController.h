
@interface CDPController : NSObject {
    <CDPAuthProvider> * _authProvider;
    CDPContext * _context;
    CDPDaemonConnection * _daemonConn;
    <CDPStateUIProvider> * _uiProvider;
    CDPStateUIProviderProxy * _uiProviderProxy;
}

@property (nonatomic, retain) <CDPAuthProvider> *authProvider;
@property (nonatomic, readonly) CDPContext *context;
@property (nonatomic, retain) CDPDaemonConnection *daemonConn;
@property (nonatomic, retain) <CDPStateUIProvider> *uiProvider;
@property (nonatomic, retain) CDPStateUIProviderProxy *uiProviderProxy;

- (void).cxx_destruct;
- (id)authProvider;
- (id)context;
- (id)daemonConn;
- (void)dealloc;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)initWithXpcEndpoint:(id)arg1 context:(id)arg2;
- (void)invalidate;
- (void)setAuthProvider:(id)arg1;
- (void)setDaemonConn:(id)arg1;
- (void)setUiProvider:(id)arg1;
- (void)setUiProviderProxy:(id)arg1;
- (id)uiProvider;
- (id)uiProviderProxy;

@end
