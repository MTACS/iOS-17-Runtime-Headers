
@interface PXSharedLibrarySharingSuggestionsFeedActionPerformer : NSObject <PXFeedActionPerformer> {
    PXPhotoKitAssetCollectionActionManager * _assetCollectionActionManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contextMenuForObjectReference:(id)arg1 inDataSource:(id)arg2 suggestedActions:(id)arg3 fromViewController:(id)arg4;
- (id)createSeeAllViewControllerForPhotoLibrary:(id)arg1;
- (bool)handlePrimaryActionOnItemAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1 inDataSource:(id)arg2 fromViewController:(id)arg3;
- (bool)navigateToObjectReference:(id)arg1 originalSource:(id)arg2 fromViewController:(id)arg3 animated:(bool)arg4 willPresentHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;

@end
