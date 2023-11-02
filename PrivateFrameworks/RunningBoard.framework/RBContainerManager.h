
@interface RBContainerManager : NSObject <RBContainerManaging> {
    RBPersonaManager * _personaManager;
    struct container_query_s { } * _queryForApps;
    struct container_query_s { } * _queryForPlugins;
    struct OptionalUID { 
        bool set; 
        unsigned int uid; 
    }  _queryUID;
}

- (void).cxx_destruct;
- (id)_allowedContainerOverrideIdentifiers;
- (void)_clearCache;
- (void)_fetchCache:(id)arg1;
- (struct OptionalUID { bool x1; unsigned int x2; })_fetchCacheUIDChoice:(id)arg1;
- (id)_lookupContainerPathForIdentity:(id)arg1 context:(id)arg2 persona:(id)arg3 containerIdentifier:(id)arg4 retry:(bool)arg5 error:(id*)arg6;
- (void)_probeCache:(const void*)arg1 withContainerIdentifier:(id)arg2 persona:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_probeCacheSubqueryIterationEvaluate:(struct container_object_s { }*)arg1 withAccummulatedState:(struct ProbeCacheSubqueryIterationAccumulatedState { id x1; id x2; unsigned long long x3; }*)arg2;
- (id)_retryLookupAfterCacheMissForIdentity:(id)arg1 context:(id)arg2 persona:(id)arg3 containerIdentifier:(id)arg4;
- (id)_sandboxContainerURLForExtensionContext:(id)arg1 containerOverrideIdentifier:(id)arg2;
- (id)containerPathForIdentity:(id)arg1 context:(id)arg2 persona:(id)arg3 error:(id*)arg4;
- (bool)containerRequiredForServiceDict:(id)arg1;
- (void)dealloc;
- (id)initWithPersonaManager:(id)arg1;
- (id)sandboxContainerURLForExtensionContext:(id)arg1 containerOverrideIdentifier:(id)arg2;

@end
