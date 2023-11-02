
@interface OSLogCurrentProcessEnumerator : OSLogEnumerator {
    NSXPCConnection * _connectionToService;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithOptions:(unsigned long long)arg1 predicate:(id)arg2 position:(id)arg3;
- (id)nextObject;

@end
