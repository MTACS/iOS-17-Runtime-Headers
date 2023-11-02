
@interface _NTKBundleAggregateComplicationLoader : NTKBundleComplicationDataSourceLoader {
    NSOrderedSet * _loaders;
}

@property (nonatomic, copy) NSOrderedSet *loaders;

- (void).cxx_destruct;
- (void)_loadClassesUsingBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)loaders;
- (void)setLoaders:(id)arg1;

@end
