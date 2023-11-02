
@interface GTURLAccessProviderXPCProxy : NSObject <GTURLAccessProvider> {
    <GTXPCConnection> * _connection;
    NSSet * _ignoreMethods;
}

- (void).cxx_destruct;
- (void)copyIdentifier:(id)arg1 toDevice:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithConnection:(id)arg1 remoteProperties:(id)arg2;
- (id)makeURL:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)securityScopedURLFromSandboxID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)transferIdentifier:(id)arg1 toDevice:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)urlForPath:(id)arg1;

@end
