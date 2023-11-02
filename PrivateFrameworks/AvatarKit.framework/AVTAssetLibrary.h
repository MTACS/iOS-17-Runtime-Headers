
@interface AVTAssetLibrary : NSObject {
    NSMutableArray * _assets;
    NSMutableDictionary * _assetsByName;
}

+ (id)sharedAssetLibrary;

- (void).cxx_destruct;
- (id)assetWithType:(long long)arg1 identifier:(id)arg2;
- (void)reload;

@end
