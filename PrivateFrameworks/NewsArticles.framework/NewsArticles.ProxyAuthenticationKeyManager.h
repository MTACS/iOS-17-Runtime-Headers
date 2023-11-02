
@interface NewsArticles.ProxyAuthenticationKeyManager : NSObject <SXProxyAuthenticationKeyProvider> {
    void configurationManager;
    void deduper;
    void endpointConnection;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  key;
    void lock;
    void session;
}

- (void).cxx_destruct;
- (id)init;
- (void)requestAuthenticationKeyWithCompletion:(id /* block */)arg1;

@end
