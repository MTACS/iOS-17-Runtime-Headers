
@interface PXImportImageCache : NSObject {
    NSObject<OS_dispatch_queue> * _cacheTableQueue;
    NSMutableDictionary * _caches;
    unsigned short  _imageFormat;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)accessImageTableForIdentifier:(id)arg1 withChangeBlock:(id /* block */)arg2;
- (id)cacheTableForIdentifier:(id)arg1;
- (void)configureWithFormat:(unsigned short)arg1;
- (id)imageForIdentifier:(id)arg1;
- (void)imageForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)imageForModel:(id)arg1 ofSize:(unsigned long long)arg2 allowLowerResolutions:(bool)arg3 completion:(id /* block */)arg4;
- (id)imageForModel:(id)arg1 ofSize:(unsigned long long)arg2 allowLowerResolutions:(bool)arg3 foundSize:(unsigned long long*)arg4;
- (id)init;
- (void)removeCacheForIdentifiers:(id)arg1;
- (void)setImage:(id)arg1 forIdentifier:(id)arg2;
- (void)setImage:(id)arg1 forIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)tearDown;

@end
