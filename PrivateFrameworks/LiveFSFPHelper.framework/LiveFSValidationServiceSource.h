
@interface LiveFSValidationServiceSource : NSObject <NSFileProviderServiceSource, NSFileProviderValidationServiceV1, NSXPCListenerDelegate> {
    LiveFSFPExtensionHelper * _fileProviderExtension;
    NSString * _itemIdentifier;
    NSHashTable * _listeners;
    NSOperationQueue * _operationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isRestricted, nonatomic, readonly) bool restricted;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithFileProviderExtension:(id)arg1 itemIdentifier:(id)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)makeListenerEndpointAndReturnError:(id*)arg1;
- (id)serviceName;
- (void)validation_allowValidation:(id /* block */)arg1;
- (void)validation_evictDocumentWithCompletionHandler:(id /* block */)arg1;
- (void)validation_shareDocumentWithCompletionHandler:(id /* block */)arg1;

@end
