
@interface AKLoginPresenter : NSObject <AKLoginPresenterHostInterfaceProtocol, NSXPCListenerDelegate> {
    id /* block */  _presentationCompletion;
    NSXPCListener * _remoteListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ presentationCompletion;
@property (nonatomic, retain) NSXPCListener *remoteListener;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callCompletionWithResults:(id)arg1 password:(id)arg2 additionalData:(id)arg3 error:(id)arg4;
- (void)authenticationRequestFinishedWithResults:(id)arg1 password:(id)arg2 additionalData:(id)arg3 error:(id)arg4;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)presentOOPLoginUIWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)presentationCompletion;
- (id)remoteListener;
- (void)setPresentationCompletion:(id /* block */)arg1;
- (void)setRemoteListener:(id)arg1;

@end
