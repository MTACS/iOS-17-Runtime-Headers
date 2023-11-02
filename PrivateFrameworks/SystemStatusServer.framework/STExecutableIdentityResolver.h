
@interface STExecutableIdentityResolver : NSObject <STExecutableIdentityResolving> {
    STReferenceCountedCache * _cache;
}

+ (id)responsibleIdentityForAuditToken:(struct { unsigned int x1[8]; })arg1;

- (void).cxx_destruct;
- (id)beginBatchResolutionSession;
- (id)init;
- (id)resolvedIdentityForIdentity:(id)arg1;

@end
