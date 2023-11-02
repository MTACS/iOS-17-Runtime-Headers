
@interface STXPCRemoteObjectProxy : NSObject

+ (void)_proxyFromConnection:(id)arg1 withRetryCount:(unsigned long long)arg2 proxyHandler:(id /* block */)arg3;
+ (void)_synchronousProxyFromConnection:(id)arg1 withRetryCount:(unsigned long long)arg2 proxyHandler:(id /* block */)arg3;
+ (void)proxyFromConnection:(id)arg1 proxyHandler:(id /* block */)arg2;
+ (void)synchronousProxyFromConnection:(id)arg1 proxyHandler:(id /* block */)arg2;

@end
