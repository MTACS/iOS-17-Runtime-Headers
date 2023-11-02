
@interface DKDiagnosticServiceRequest : NSObject <DKExtensionHostAdapterDelegate> {
    bool  _completed;
    id /* block */  _completion;
    NSXPCConnection * _connection;
    DKDiagnosticHostContext * _context;
    id  _hostServicesDelegate;
}

@property (nonatomic) bool completed;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) DKDiagnosticHostContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) id hostServicesDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completeWithDiagnosticResult:(id)arg1 error:(id)arg2;
- (void)cancelExtensionRequest;
- (void)completeWithPayload:(id)arg1 completion:(id /* block */)arg2;
- (bool)completed;
- (id /* block */)completion;
- (id)connection;
- (id)context;
- (void)didFailStart;
- (void)didInterrupt;
- (void)didInvalidate;
- (id)hostServicesDelegate;
- (id)initWithHostServicesDelegate:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setConnection:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setHostServicesDelegate:(id)arg1;

@end
