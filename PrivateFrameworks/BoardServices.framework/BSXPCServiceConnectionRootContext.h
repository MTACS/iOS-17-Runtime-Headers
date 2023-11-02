
@interface BSXPCServiceConnectionRootContext : BSXPCServiceConnectionContext {
    _Atomic unsigned long long  __uniqueChildCounter;
    NSString * _eDesc;
    unsigned long long  _unique;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (id)endpointDescription;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isRoot;

@end
