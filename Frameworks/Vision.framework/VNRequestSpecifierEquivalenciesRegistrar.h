
@interface VNRequestSpecifierEquivalenciesRegistrar : NSObject <VNRequestSpecifierEquivalenciesRegistrar> {
    NSMutableDictionary * _equivalenciesLookup;
}

- (void).cxx_destruct;
- (id)equivalenciesForRequestSpecifier:(id)arg1;
- (id)init;
- (bool)isRequestSpecifier:(id)arg1 equivalentToRequestSpecifier:(id)arg2;
- (bool)registerRequestClass:(Class)arg1 revision:(unsigned long long)arg2 equivalencyToRevision:(unsigned long long)arg3 error:(id*)arg4;
- (bool)registerRequestClassName:(id)arg1 revision:(unsigned long long)arg2 equivalencyToRequestClassName:(id)arg3 revision:(unsigned long long)arg4 error:(id*)arg5;
- (bool)registerRequestClassName:(id)arg1 revision:(unsigned long long)arg2 equivalencyToRevision:(unsigned long long)arg3 error:(id*)arg4;
- (bool)registerRequestSpecifier:(id)arg1 equivalencyToRequestSpecifier:(id)arg2 error:(id*)arg3;

@end
