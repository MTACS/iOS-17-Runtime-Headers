
@interface DiagCollectionClient : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSString * destinationDirectory;
}

- (void).cxx_destruct;
- (void)collectDEPayloadsWithIdentifier:(id)arg1 diagnosticExtensionsWithParameters:(id)arg2 queue:(id)arg3 reply:(id /* block */)arg4;
- (unsigned int)currentLoginUserID;
- (id)init;
- (id)initWithDestinationDirectory:(id)arg1;
- (void)moveDiagnosticFilesToDestination:(id)arg1 reply:(id /* block */)arg2;
- (id)setupXPCInterface;

@end
