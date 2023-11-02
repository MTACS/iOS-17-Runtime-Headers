
@interface REObjectClassLoader : REClassLoader {
    NSArray * _objects;
}

- (void).cxx_destruct;
- (void)_enumerateClassesWithBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)enumerateObjectsWithBlock:(id /* block */)arg1;
- (id)initWithObjects:(id)arg1 configuration:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
