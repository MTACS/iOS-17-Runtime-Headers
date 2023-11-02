
@interface RUIServerHookHandler : NSObject <RUIServerHookDelegate> {
    <RUIServerHookHandlerDelegate> * _delegate;
    NSMutableArray * _hookIdentifiers;
    RemoteUIController * _remoteUIController;
    NSArray * _serverHooks;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUIServerHookHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *serverHooks;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleResponseForHook:(id)arg1 success:(bool)arg2 error:(id)arg3 attributes:(id)arg4 objectModel:(id)arg5 completion:(id /* block */)arg6;
- (void)_rebuildServerHookHandlers;
- (id)_refreshRequestWithInfo:(id)arg1 initiatingObjectModel:(id)arg2 attributes:(id)arg3;
- (void)_reloadUIWithInfo:(id)arg1 attributes:(id)arg2 initiatingObjectModel:(id)arg3 completion:(id /* block */)arg4;
- (id)_responseDataForResult:(bool)arg1 withError:(id)arg2;
- (id)currentPresenter;
- (id)delegate;
- (void)dismissObjectModelsAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithRemoteUIController:(id)arg1;
- (id)initWithRemoteUIController:(id)arg1 hooks:(id)arg2;
- (bool)isUserCancelError:(id)arg1;
- (id)presentationContextForHook:(id)arg1;
- (void)processObjectModel:(id)arg1 isModal:(bool)arg2;
- (void)processObjectModel:(id)arg1 isModal:(bool)arg2 completion:(id /* block */)arg3;
- (void)processServerResponse:(id)arg1;
- (void)refreshWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)serverHooks;
- (void)setDelegate:(id)arg1;
- (void)setServerHooks:(id)arg1;

@end
