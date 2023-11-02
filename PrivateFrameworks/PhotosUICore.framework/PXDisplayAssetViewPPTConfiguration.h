
@interface PXDisplayAssetViewPPTConfiguration : NSObject {
    id /* block */  _assetViewFactory;
    <PXDisplayAssetFetchResult> * _assets;
    NSString * _label;
}

@property (nonatomic, readonly) id /* block */ assetViewFactory;
@property (nonatomic, readonly) <PXDisplayAssetFetchResult> *assets;
@property (nonatomic, readonly) NSString *label;

+ (id)defaultConfigurations;
+ (id)defaultPhotoLibrary;

- (void).cxx_destruct;
- (id /* block */)assetViewFactory;
- (id)assets;
- (id)init;
- (id)initWithAssetViewFactory:(id /* block */)arg1 label:(id)arg2 assets:(id)arg3 label:(id)arg4;
- (id)initWithAssetViewFactory:(id /* block */)arg1 label:(id)arg2 photoLibraryAssetsWithPlaybackStyleFilter:(long long)arg3;
- (id)label;

@end
