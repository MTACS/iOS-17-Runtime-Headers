
@interface GDEntityResolutionTextClient : NSObject {
    GDXPCEntityResolutionService * xpcClient;
}

- (void).cxx_destruct;
- (id)generateMentionsForQuery:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)resolveEntitiesForRequest:(id)arg1 error:(id*)arg2;
- (bool)warmupForMode:(long long)arg1 error:(id*)arg2;

@end
