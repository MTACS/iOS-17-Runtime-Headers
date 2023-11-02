
@interface CHPluginHelper : NSObject {
    NSXPCConnection * _connection;
    NSXPCInterface * _interface;
}

- (void).cxx_destruct;
- (id)init;
- (void)recentCallsWithLimitingTypes:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (id)recentCallsWithLimitingTypes:(unsigned int)arg1 error:(id*)arg2;
- (void)unreadCallCountWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)unreadCallCountWithError:(id*)arg1;

@end
