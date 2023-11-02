
@protocol VNRequestSpecifierEquivalenciesRegistrar

@required

- (bool)registerRequestClass:(Class)arg1 revision:(unsigned long long)arg2 equivalencyToRevision:(unsigned long long)arg3 error:(id*)arg4;
- (bool)registerRequestClassName:(NSString *)arg1 revision:(unsigned long long)arg2 equivalencyToRequestClassName:(NSString *)arg3 revision:(unsigned long long)arg4 error:(id*)arg5;
- (bool)registerRequestClassName:(NSString *)arg1 revision:(unsigned long long)arg2 equivalencyToRevision:(unsigned long long)arg3 error:(id*)arg4;
- (bool)registerRequestSpecifier:(VNRequestSpecifier *)arg1 equivalencyToRequestSpecifier:(VNRequestSpecifier *)arg2 error:(id*)arg3;

@end
