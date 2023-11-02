
@interface HKHealthRecordsDaemonProxyProvider : HKProxyProvider

- (void)fetchProxyServiceEndpointFromSource:(id)arg1 serviceIdentifier:(id)arg2 endpointHandler:(id /* block */)arg3 errorHandler:(id /* block */)arg4;
- (id)initWithConnection:(id)arg1 serviceIdentifier:(id)arg2 exportedObject:(id)arg3;
- (id)proxyServiceEndpointFromSource:(id)arg1 serviceIdentifier:(id)arg2 error:(id*)arg3;

@end
