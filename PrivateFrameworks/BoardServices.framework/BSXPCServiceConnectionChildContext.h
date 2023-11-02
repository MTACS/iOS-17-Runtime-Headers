
@interface BSXPCServiceConnectionChildContext : BSXPCServiceConnectionContext {
    unsigned long long  _identifier;
    BSXPCServiceConnectionRootContext * _parent;
    bool  _remote;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (id)endpointDescription;
- (unsigned long long)hash;
- (bool)isChild;
- (bool)isClient;
- (bool)isEqual:(id)arg1;
- (bool)isNonLaunching;
- (bool)isServer;

@end
