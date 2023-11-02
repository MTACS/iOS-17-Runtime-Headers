
@interface CPSAuthenticationSession : NSObject <CPSAuthenticationServiceClientInterface> {
    bool  _activateCalled;
    id /* block */  _deviceAcceptedNotificationHandler;
    id /* block */  _deviceStartedAuthenticationHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateDone;
    CPSAuthenticationRequest * _request;
    NSXPCConnection * _serviceConnection;
    id /* block */  _sessionCompletionHandler;
    id /* block */  _sessionFailedHandler;
    id /* block */  _sessionFinishedHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ deviceAcceptedNotificationHandler;
@property (nonatomic, copy) id /* block */ deviceStartedAuthenticationHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPSAuthenticationRequest *request;
@property (nonatomic, copy) id /* block */ sessionCompletionHandler;
@property (nonatomic, copy) id /* block */ sessionFailedHandler;
@property (nonatomic, copy) id /* block */ sessionFinishedHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)authenticationSessionDeviceStartedAuthentication:(id)arg1;
- (void)authenticationSessionDeviceTappedNotification:(id)arg1;
- (void)authenticationSessionDidFailWithError:(id)arg1;
- (void)authenticationSessionDidFinishWithResponse:(id)arg1;
- (void)cancel;
- (id /* block */)deviceAcceptedNotificationHandler;
- (id /* block */)deviceStartedAuthenticationHandler;
- (id)initWithRequest:(id)arg1;
- (id)request;
- (id /* block */)sessionCompletionHandler;
- (id /* block */)sessionFailedHandler;
- (id /* block */)sessionFinishedHandler;
- (void)setDeviceAcceptedNotificationHandler:(id /* block */)arg1;
- (void)setDeviceStartedAuthenticationHandler:(id /* block */)arg1;
- (void)setSessionCompletionHandler:(id /* block */)arg1;
- (void)setSessionFailedHandler:(id /* block */)arg1;
- (void)setSessionFinishedHandler:(id /* block */)arg1;
- (void)start;

@end
