
@interface REBlockClassLoader : REClassLoader {
    id /* block */  _block;
}

- (void).cxx_destruct;
- (void)_enumerateBundleConfigurations:(id /* block */)arg1;
- (void)_enumerateClassesWithBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithBlock:(id /* block */)arg1 configuration:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
