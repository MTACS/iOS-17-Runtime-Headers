
@protocol NEFilterDataExtensionProviderProtocol <NEFilterExtensionProviderProtocol>

@required

- (void)fetchProviderConnectionWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, void*
- (void)handleRulesChanged;
- (void)provideRemediationMap:(NSDictionary *)arg1;
- (void)provideURLAppendStringMap:(NSDictionary *)arg1;
- (void)providerControlSocketFileHandle:(NSFileHandle *)arg1;
- (void)report:(NEFilterReport *)arg1;

@end
