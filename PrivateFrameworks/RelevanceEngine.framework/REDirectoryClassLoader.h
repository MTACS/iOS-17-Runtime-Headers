
@interface REDirectoryClassLoader : REClassLoader {
    NSString * _key;
    NSArray * _urls;
}

- (void).cxx_destruct;
- (void)_enumerateBundleConfigurations:(id /* block */)arg1;
- (void)_enumerateBundles:(id /* block */)arg1;
- (void)_enumerateClassesWithBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithDirectories:(id)arg1 dataSourceKey:(id)arg2 configuration:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
