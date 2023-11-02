
@protocol ICCloudServerListenerEndpointProviding <NSObject>

@required

- (NSXPCListenerEndpoint *)listenerEndpointForService:(long long)arg1 error:(id*)arg2;
- (void)notifyDeviceSetupFinishedWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
