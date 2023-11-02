
@interface STAttributedEntityResolutionSession : NSObject <STAttributedEntityBatchResolving> {
    STReferenceCountedCache * _cache;
    NSArray * _cachedEntities;
    <STAttributedEntityResolving> * _entityResolver;
    <STExecutableIdentityBatchResolving> * _identityResolver;
    bool  _invalidated;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEntityResolver:(id)arg1 identityResolver:(id)arg2 cache:(id)arg3;
- (void)invalidate;
- (void)resolveEntities:(id)arg1;
- (id)resolveEntity:(id)arg1;

@end
