
@interface _MXAssetStorage : NSObject {
    NSMutableDictionary * _fetchBlocks;
    NSMutableSet * _loadingKeys;
    NSObject<OS_dispatch_queue> * _lock;
    NSMutableDictionary * _storage;
}

- (void).cxx_destruct;
- (void)fetchAssetForKey:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)loadAssetForKey:(id)arg1 withBlock:(id /* block */)arg2;
- (void)setAsset:(id)arg1 forKey:(id)arg2;

@end
