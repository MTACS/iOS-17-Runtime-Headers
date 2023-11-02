
@interface RBAssertionCollection : NSObject {
    NSMutableDictionary * _assertionsByIdentifier;
    NSMutableDictionary * _assertionsByOriginator;
    NSMutableDictionary * _assertionsByTargetProcessIdentity;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _lock;
    NSMutableSet * _processAssertions;
    NSMutableSet * _resolvedIdentifiers;
    NSMutableSet * _systemAssertions;
}

- (void).cxx_destruct;
- (void)addAssertion:(id)arg1;
- (id)allAssertions;
- (unsigned long long)assertionCountForOriginator:(id)arg1;
- (unsigned long long)assertionCountForTargetProcessIdentity:(id)arg1;
- (id)assertionWithIdentifier:(id)arg1;
- (id)assertionsForOriginator:(id)arg1;
- (id)assertionsForTarget:(id)arg1;
- (id)assertionsForTargetIdentity:(id)arg1;
- (unsigned long long)count;
- (void)enumerateAssertionsForOriginator:(id)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateAssertionsForProcessTargetsWithBlock:(id /* block */)arg1;
- (void)enumerateAssertionsForSystemTargetWithBlock:(id /* block */)arg1;
- (void)enumerateAssertionsForTargetProcessIdentity:(id)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateAssertionsWithBlock:(id /* block */)arg1;
- (bool)hasAssertion:(id)arg1;
- (bool)hasAssertionsForOriginator:(id)arg1;
- (bool)hasAssertionsForOriginator:(id)arg1 exceedingCount:(unsigned long long)arg2;
- (bool)hasResolvedAssertion:(id)arg1;
- (id)init;
- (void)noteResolvedAssertion:(id)arg1;
- (void)removeAssertion:(id)arg1;

@end
