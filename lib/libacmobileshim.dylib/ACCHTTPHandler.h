
@interface ACCHTTPHandler : NSObject {
    <ACCAuthContextProtocol> * _context;
    id /* block */  _finalizeBlock;
    bool  _shouldIgnoreInvalidDSPublicKey;
    bool  _shouldIgnoreInvalidToken;
    <ACFHTTPTransportProtocol> * _transport;
}

@property (nonatomic, retain) <ACCAuthContextProtocol> *context;
@property (nonatomic, copy) id /* block */ finalizeBlock;
@property (nonatomic, readonly) NSDictionary *httpRequestDictionary;
@property (nonatomic, readonly) NSString *iForgotURL;
@property (nonatomic, readonly) bool isCanceled;
@property (nonatomic, readonly) NSDictionary *requestBody;
@property (nonatomic, readonly) NSDictionary *requestHeader;
@property (nonatomic, readonly) NSArray *serverAttemptsDelays;
@property (nonatomic, readonly) NSArray *serverHosts;
@property bool shouldIgnoreInvalidDSPublicKey;
@property bool shouldIgnoreInvalidToken;
@property (nonatomic, retain) <ACFHTTPTransportProtocol> *transport;

+ (id)handlerWithContext:(id)arg1;

- (void)cancelRequest;
- (id)context;
- (id)convertErrorToACMError:(id)arg1;
- (void)dealloc;
- (id /* block */)finalizeBlock;
- (id)httpRequestDictionary;
- (id)iForgotString;
- (id)iForgotURL;
- (id)initWithContext:(id)arg1;
- (bool)installCertificateWithString:(id)arg1 version:(id)arg2 forRealm:(id)arg3;
- (id)invalidPublicKeyErrorForReponse:(id)arg1 error:(id)arg2;
- (bool)isCanceled;
- (bool)isConnectionError:(id)arg1;
- (bool)isUknownServerError:(id)arg1;
- (void)performRequestWithCompletionBlock:(id /* block */)arg1;
- (id)realm;
- (id)requestBody;
- (id)requestHeader;
- (id)responseWithData:(id)arg1 error:(id*)arg2;
- (id)serverAttemptsDelays;
- (id)serverHosts;
- (void)setContext:(id)arg1;
- (void)setFinalizeBlock:(id /* block */)arg1;
- (void)setShouldIgnoreInvalidDSPublicKey:(bool)arg1;
- (void)setShouldIgnoreInvalidToken:(bool)arg1;
- (void)setTransport:(id)arg1;
- (bool)shouldIgnoreInvalidDSPublicKey;
- (bool)shouldIgnoreInvalidToken;
- (bool)shouldReturnResponse:(id)arg1 orReportError:(id*)arg2;
- (bool)shouldTryOtherServers:(id)arg1 error:(id)arg2;
- (id)transport;
- (void)uninstallPublicKeyForRealm:(id)arg1;
- (bool)updatePublicKeyWithResponse:(id)arg1;
- (void)updateTransport;

@end
