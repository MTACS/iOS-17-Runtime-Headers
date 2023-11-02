
@interface DiagCollectionServiceImpl : NSObject <NSXPCListenerDelegate> {
    ABCAdministrator * _administrator;
    DiagnosticExtensionController * deController;
    NSObject<OS_dispatch_queue> * queue;
}

@property (nonatomic) ABCAdministrator *administrator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)administrator;
- (bool)assertEntitlement:(id)arg1 entitlement:(id)arg2;
- (void)collectPayloadsWithIdentifier:(id)arg1 diagnosticExtensions:(id)arg2 reply:(id /* block */)arg3;
- (void)collectPayloadsWithIdentifier:(id)arg1 diagnosticExtensionsWithParameters:(id)arg2 reply:(id /* block */)arg3;
- (id)diagnosticExtensionController;
- (id)initWithQueue:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setAdministrator:(id)arg1;
- (void)shutdown;

@end
