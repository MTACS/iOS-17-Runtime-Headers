
@interface ASTMaterializedConnection : NSObject <ASTConnection> {
    bool  _allowsCellularAccess;
    <ASTConnectionStatusDelegate> * _delegate;
    id /* block */  _didReceiveResponse;
    ASTIdentity * _identity;
    long long  _networkDisconnectedRetryCount;
    NSMutableURLRequest * _request;
    bool  _retryOnNetworkDisconnected;
    unsigned long long  _rootOfTrust;
    NSString * _sessionId;
    NSString * _signature;
    long long  _state;
    double  _timeout;
}

@property (nonatomic, readonly) NSString *accept;
@property (nonatomic) bool allowsCellularAccess;
@property (nonatomic, readonly) NSString *contentType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASTConnectionStatusDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didReceiveResponse;
@property (nonatomic, readonly) NSString *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) ASTIdentity *identity;
@property (nonatomic, readonly) NSString *method;
@property (nonatomic) long long networkDisconnectedRetryCount;
@property (nonatomic, readonly) NSMutableURLRequest *request;
@property (nonatomic) bool retryOnNetworkDisconnected;
@property (nonatomic, readonly) unsigned long long rootOfTrust;
@property (nonatomic, copy) NSString *sessionId;
@property (nonatomic, copy) NSString *signature;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic) double timeout;

- (void).cxx_destruct;
- (id)_acceptLanguage;
- (unsigned long long)_rootOfTrust;
- (id)accept;
- (void)addBody:(id)arg1 gzip:(bool)arg2;
- (bool)allowsCellularAccess;
- (id)contentType;
- (id)delegate;
- (id /* block */)didReceiveResponse;
- (id)endpoint;
- (id)identity;
- (id)init;
- (id)method;
- (long long)networkDisconnectedRetryCount;
- (id)request;
- (bool)retryOnNetworkDisconnected;
- (unsigned long long)rootOfTrust;
- (id)sessionId;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidReceiveResponse:(id /* block */)arg1;
- (void)setIdentity:(id)arg1;
- (void)setNetworkDisconnectedRetryCount:(long long)arg1;
- (void)setRetryOnNetworkDisconnected:(bool)arg1;
- (void)setSessionId:(id)arg1;
- (void)setSignature:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTimeout:(double)arg1;
- (id)signature;
- (long long)state;
- (double)timeout;

@end
