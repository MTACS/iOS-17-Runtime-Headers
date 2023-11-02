
@interface CARSetupPromptDirector : NSObject <BSInvalidatable> {
    NSXPCConnection * _connection;
    <CARSetupPromptPresenting> * _presenter;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CARSetupPromptPresenting> *presenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleConnectionReset;
- (void)_presenterIsReady;
- (void)_servicePerform:(id /* block */)arg1;
- (void)_setupConnection;
- (void)_synchronous_servicePerform:(id /* block */)arg1;
- (id)connection;
- (void)dealloc;
- (id)initWithPresenter:(id)arg1;
- (void)invalidate;
- (id)presenter;
- (void)presenterDidDismiss;
- (void)setConnection:(id)arg1;

@end
