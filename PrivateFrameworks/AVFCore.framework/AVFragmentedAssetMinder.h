
@interface AVFragmentedAssetMinder : NSObject {
    AVFragmentedAssetMinderInternal * _fragmentedAssetMinder;
}

@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic) double mindingInterval;

+ (id)fragmentedAssetMinderWithAsset:(id)arg1 mindingInterval:(double)arg2;

- (void)_setMindingInterval:(double)arg1 removeAllAssets:(bool)arg2;
- (bool)_throwsWhenAlreadyMindedAssetIsAdded;
- (void)addFragmentedAsset:(id)arg1;
- (id)assets;
- (void)dealloc;
- (id)init;
- (id)initWithAsset:(id)arg1 mindingInterval:(double)arg2;
- (double)mindingInterval;
- (void)removeFragmentedAsset:(id)arg1;
- (void)setMindingInterval:(double)arg1;

@end
