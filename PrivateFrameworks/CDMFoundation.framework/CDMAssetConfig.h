
@interface CDMAssetConfig : NSObject {
    NSMutableDictionary * _assetConfigs;
}

- (void).cxx_destruct;
- (void)addAssetConfigItem:(id)arg1 forKey:(id)arg2;
- (id)getAssetConfigItemForKey:(id)arg1;
- (id)getAssetConfigItems;
- (bool)hasAssetConfigItems;
- (id)init;

@end
