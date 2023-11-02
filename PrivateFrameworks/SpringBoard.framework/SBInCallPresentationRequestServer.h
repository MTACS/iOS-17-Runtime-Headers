
@interface SBInCallPresentationRequestServer : NSObject <BSInvalidatable, BSServiceConnectionListenerDelegate, SBSInCallPresentationClientToServerInterface> {
    FBServiceClientAuthenticator * _clientAuthenticator;
    BSServiceConnectionListener * _connectionListener;
    <SBInCallPresentationRequestServerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _targets;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBInCallPresentationRequestServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activate;
- (id)delegate;
- (id)init;
- (void)invalidate;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (oneway void)presentWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
