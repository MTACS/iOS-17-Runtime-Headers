
@interface USXPCRemoteObjectProxy : NSObject

+ (void)proxyFromConnection:(id)arg1 withRetryCount:(unsigned long long)arg2 proxyHandler:(id /* block */)arg3;
+ (void)synchronousProxyFromConnection:(id)arg1 withRetryCount:(unsigned long long)arg2 proxyHandler:(id /* block */)arg3;

@end
