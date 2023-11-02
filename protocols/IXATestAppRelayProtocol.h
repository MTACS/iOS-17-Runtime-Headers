
@protocol IXATestAppRelayProtocol

@required

- (void)fetchEndpointForServiceName:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, void*
- (void)registerEndpoint:(void *)arg1 forServiceName:(void *)arg2 withEntitlement:(void *)arg3 canReplace:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSXPCListenerEndpoint *, NSString *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)unregisterEndpointForServiceName:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
