
@interface MPTCPConverterProxyClient : NSObject

+ (id)getServerConnection;
+ (void)startProxyToMPTCPConverterProxyWithCompletionHandler:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)stopProxyToMPTCPConverterProxyWithCompletionHandler:(id)arg1 completionHandler:(id /* block */)arg2;

@end
