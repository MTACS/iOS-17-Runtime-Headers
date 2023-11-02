
@interface MSUDataAccessorSymbolicPathResolver : NSObject {
    NSMutableDictionary * _overrides;
}

+ (id)resolvedSymbol:(id)arg1 error:(id*)arg2;
+ (id)symbolicPathResolver;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)overrideSymbol:(id)arg1 resolvedPath:(id)arg2;
- (id)resolve:(id)arg1 error:(id*)arg2;

@end
