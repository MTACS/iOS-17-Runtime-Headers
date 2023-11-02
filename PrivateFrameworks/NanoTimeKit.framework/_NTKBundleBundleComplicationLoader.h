
@interface _NTKBundleBundleComplicationLoader : NTKBundleComplicationDataSourceLoader {
    NSArray * _urls;
}

@property (nonatomic, retain) NSArray *urls;

- (void).cxx_destruct;
- (void)_enumerateBundles:(id /* block */)arg1;
- (void)_loadClassesUsingBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (void)setUrls:(id)arg1;
- (id)urls;

@end
