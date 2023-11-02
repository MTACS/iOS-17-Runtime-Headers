
@interface PUStoryAssetPickerHelper : NSObject <PHPickerViewControllerDelegate> {
    PHAssetCollection * _assetCollection;
    <PXDisplayAssetCollection> * _containerCollection;
    <PUStoryAssetPickerHelperDelegate> * _delegate;
    PXLoadingStatusManager * _loadingStatusManager;
    UIViewController * _pickerViewController;
    bool  _preselectedAssetsHaveDefaultSortOrder;
    NSOrderedSet * _preselectedOIDs;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) <PXDisplayAssetCollection> *containerCollection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUStoryAssetPickerHelperDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXLoadingStatusManager *loadingStatusManager;
@property (nonatomic, readonly) UIViewController *pickerViewController;
@property (nonatomic, readonly) bool preselectedAssetsHaveDefaultSortOrder;
@property (nonatomic, readonly) NSOrderedSet *preselectedOIDs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handlePickedAssets:(id)arg1;
- (id)assetCollection;
- (id)containerCollection;
- (id)delegate;
- (id)initWithContainerAssetCollection:(id)arg1 preselectedAssets:(id)arg2;
- (id)loadingStatusManager;
- (void)picker:(id)arg1 didFinishPicking:(id)arg2;
- (id)pickerViewController;
- (bool)preselectedAssetsHaveDefaultSortOrder;
- (id)preselectedOIDs;
- (void)setDelegate:(id)arg1;

@end
