
@interface AFUIServiceSession : NSObject <AFUIModalUIDelegate, AFUIPresenter> {
    NSXPCConnection * _connection;
    AFUIPanel * _panel;
    BSProcessHandle * _remoteProcess;
    NSObject<OS_dispatch_queue> * _sessionQueue;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AFUIPanel *panel;
@property (nonatomic, readonly) BSProcessHandle *remoteProcess;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sessionQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_applicationIdentifierFromConnection:(id)arg1;
- (id)_documentTraitsByAddingClientPropertiesFromConnection:(id)arg1 toDocumentTraits:(id)arg2;
- (void)authenticationDidEndWithCompletion:(id /* block */)arg1;
- (void)authenticationWillBeginWithCompletion:(id /* block */)arg1;
- (id)connection;
- (void)contactsUIDidEndWithCompletion:(id /* block */)arg1;
- (void)contactsUIWillBeginWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)displayForDocumentTraits:(id)arg1 documentState:(id)arg2 textOperationsHandler:(id /* block */)arg3;
- (void)documentStateChanged:(id)arg1;
- (void)hide;
- (id)initWithSessionQueue:(id)arg1 connection:(id)arg2 remoteProcess:(id)arg3;
- (id)panel;
- (id)remoteProcess;
- (id)sessionQueue;
- (void)setPanel:(id)arg1;

@end
