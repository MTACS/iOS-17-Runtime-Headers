
@interface MSUUpdateBrainAssetLoader : MSUUpdateBrainLoader {
    MAAsset * _updateAsset;
}

@property (nonatomic, retain) MAAsset *updateAsset;

// Image: /System/Library/PrivateFrameworks/MobileSoftwareUpdate.framework/MobileSoftwareUpdate

- (void)adjustMAOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)adjustOptions:(id)arg1 completion:(id /* block */)arg2;
- (bool)cancel:(id*)arg1;
- (void)dealloc;
- (id)initWithUpdateAsset:(id)arg1;
- (void)loadUpdateBrainWithMAOptions:(id)arg1 clientOptionsFromPolicy:(id)arg2 progressHandler:(id /* block */)arg3;
- (void)loadUpdateBrainWithMAOptions:(id)arg1 progressHandler:(id /* block */)arg2;
- (void)loadUpdateBrainWithOptions:(id)arg1 progressHandler:(id /* block */)arg2;
- (bool)purgeUpdateBrains:(id*)arg1;
- (long long)requiredDiskSpace:(id*)arg1;
- (void)setUpdateAsset:(id)arg1;
- (id)updateAsset;

// Image: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore

- (void)SUCoreBorder_loadUpdateBrainWithMAOptions:(id)arg1 clientOptionsFromPolicy:(id)arg2 progressHandler:(id /* block */)arg3;

@end
