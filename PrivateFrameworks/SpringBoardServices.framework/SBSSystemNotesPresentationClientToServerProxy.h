
@interface SBSSystemNotesPresentationClientToServerProxy : NSObject <BSInvalidatable, SBSSystemNotesPresentationClientToServerInterface> {
    BSServiceConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    <SBSSystemNotesPresentationServerToClientInterface> * _delegate;
    SBSSystemNotesPresentationConfiguration * _requestedConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBSSystemNotesPresentationServerToClientInterface> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupAndActivateConnection;
- (oneway void)activateConfiguration:(id)arg1;
- (id)delegate;
- (void)invalidate;
- (oneway void)presentWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
