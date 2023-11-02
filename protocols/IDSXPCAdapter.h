
@protocol IDSXPCAdapter <NSObject>

@required

- (<IDSXPCConnectionProtocol> *)createServiceConnectionWithServiceName:(void *)arg1 invalidationHandler:(void *)arg2 terminationHandler:(void *)arg3 peerEventHandler:(void *)arg4 peerQueue:(void *)arg5; // needs 5 arg types, found 19: const char *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, NSObject<OS_xpc_object> *, NSObject<OS_xpc_object> *, void*, NSObject<OS_dispatch_queue> *
- (<IDSXPCConnectionProtocol> *)createSim2HostServiceConnectionWithServiceName:(void *)arg1 invalidationHandler:(void *)arg2 terminationHandler:(void *)arg3 peerEventHandler:(void *)arg4 peerQueue:(void *)arg5; // needs 5 arg types, found 19: const char *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, NSObject<OS_xpc_object> *, NSObject<OS_xpc_object> *, void*, NSObject<OS_dispatch_queue> *

@end
