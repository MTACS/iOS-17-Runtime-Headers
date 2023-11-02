
@interface REGroupClassLoader : REClassLoader {
    NSOrderedSet * _loaders;
}

- (void).cxx_destruct;
- (void)_enumerateBundleConfigurations:(id /* block */)arg1;
- (void)_enumerateClassesWithBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)enumerateObjectsWithBlock:(id /* block */)arg1;
- (id)initWithLoaders:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
