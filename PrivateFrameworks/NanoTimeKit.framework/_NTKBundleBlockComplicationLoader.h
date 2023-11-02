
@interface _NTKBundleBlockComplicationLoader : NTKBundleComplicationDataSourceLoader {
    id /* block */  _block;
}

@property (nonatomic, copy) id /* block */ block;

- (void).cxx_destruct;
- (void)_loadClassesUsingBlock:(id /* block */)arg1;
- (id /* block */)block;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (void)setBlock:(id /* block */)arg1;

@end
