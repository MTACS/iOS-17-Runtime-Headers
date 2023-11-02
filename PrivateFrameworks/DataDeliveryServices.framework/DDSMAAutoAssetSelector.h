
@interface DDSMAAutoAssetSelector : NSObject {
    MAAutoAssetSelector * _assetSelector;
}

@property (nonatomic, readonly) MAAutoAssetSelector *assetSelector;

+ (id)createWithQuery:(id)arg1;

- (void).cxx_destruct;
- (id)assetSelector;
- (id)initWithAssetType:(id)arg1 assetSpecifier:(id)arg2;

@end
