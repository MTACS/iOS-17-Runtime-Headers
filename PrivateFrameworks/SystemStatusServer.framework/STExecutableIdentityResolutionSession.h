
@interface STExecutableIdentityResolutionSession : NSObject <STExecutableIdentityBatchResolving> {
    STReferenceCountedCache * _cache;
    NSArray * _cachedIdentities;
    bool  _invalidated;
    <STExecutableIdentityResolving> * _resolver;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithResolver:(id)arg1 cache:(id)arg2;
- (void)invalidate;
- (void)resolveIdentities:(id)arg1;
- (id)resolvedIdentityForIdentity:(id)arg1;

@end
