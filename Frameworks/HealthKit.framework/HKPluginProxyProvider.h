
@interface HKPluginProxyProvider : HKProxyProvider

@property (nonatomic, readonly) NSString *pluginIdentifier;

- (void)fetchPluginProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)fetchProxyServiceEndpointFromSource:(id)arg1 serviceIdentifier:(id)arg2 endpointHandler:(id /* block */)arg3 errorHandler:(id /* block */)arg4;
- (id)initWithHealthStore:(id)arg1 pluginIdentifier:(id)arg2 exportedObject:(id)arg3;
- (id)pluginIdentifier;
- (id)proxyServiceEndpointFromSource:(id)arg1 serviceIdentifier:(id)arg2 error:(id*)arg3;

@end
