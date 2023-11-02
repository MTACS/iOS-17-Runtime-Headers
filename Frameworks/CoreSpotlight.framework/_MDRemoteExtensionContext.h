
@interface _MDRemoteExtensionContext : _MDExtensionContext <_MDRemoteExtensionContextProtocol> {
    CSImportExtension * _importExtension;
    CSIndexExtensionRequestHandler * _requestHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CSImportExtension *importExtension;
@property (nonatomic, retain) CSIndexExtensionRequestHandler *requestHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)getLastUpdateTimeWithCompletionHandler:(id /* block */)arg1;
- (id)handleSingleFileURLRequest:(id)arg1 providerIdentifier:(id)arg2 index:(id)arg3 error:(out id*)arg4;
- (id)hostContext;
- (id)importExtension;
- (void)performJob:(id)arg1 acknowledgementHandler:(id /* block */)arg2;
- (id)requestHandler;
- (void)setImportExtension:(id)arg1;
- (void)setRequestHandler:(id)arg1;

@end
