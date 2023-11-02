
@interface AFUIClientSession : NSObject <AFUIPresenter> {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;

- (void).cxx_destruct;
- (void)_configureNSXPCConnection:(id)arg1 withMachName:(id)arg2;
- (void)_initializeBSServiceConnection;
- (id)_presenter;
- (id)connection;
- (void)dealloc;
- (void)displayForDocumentTraits:(id)arg1 documentState:(id)arg2 textOperationsHandler:(id /* block */)arg3;
- (void)documentStateChanged:(id)arg1;
- (void)hide;
- (id)init;
- (void)setConnection:(id)arg1;

@end
