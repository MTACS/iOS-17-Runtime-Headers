
@interface _LSQueryContext : NSObject {
    id  _resolver;
}

@property (readonly) <_LSQueryResolving> *_resolver;

+ (id)defaultContext;
+ (void)setSimulateLimitedMappingForXCTests:(bool)arg1;
+ (bool)simulateLimitedMappingForXCTests;

- (void).cxx_destruct;
- (id)_init;
- (id)_resolveQueries:(id)arg1 XPCConnection:(id)arg2 error:(id*)arg3;
- (id)_resolver;
- (void)clearCaches;
- (id)debugDescription;
- (void)enumerateResolvedResultsOfQuery:(id)arg1 withBlock:(id /* block */)arg2;
- (id)init;
- (id)resolveQueries:(id)arg1 error:(id*)arg2;

@end
