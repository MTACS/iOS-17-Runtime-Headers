
@protocol EMRemoteProxyGenerator <NSObject>

@required

- (<NSXPCProxyCreating> *)generateProxyForProtocol:(Protocol *)arg1 error:(id*)arg2;

@end
