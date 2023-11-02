
@protocol BMAccessServer <BMAccessServiceBase>

@required

- (void)requestAccessToResource:(void *)arg1 withMode:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 10: BMResourceSpecifier *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSString *, NSError *, void*
- (void)requestBiomeEndpoint:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, NSError *, void*
- (void)requestBiomeEndpointForAppScopedService:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, NSError *, void*

@end
