
@interface PUAssetExplorerReviewScreenMarkupActionPerformer : PUAssetExplorerReviewScreenActionPerformer {
    <PUPhotoMarkupViewControllerObserver> * _markupObserver;
    <PUReviewAssetProvider> * _reviewAssetProvider;
}

@property (nonatomic) <PUPhotoMarkupViewControllerObserver> *markupObserver;
@property (nonatomic, retain) <PUReviewAssetProvider> *reviewAssetProvider;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void).cxx_destruct;
- (void)_presentMarkupViewControllerForReviewAsset:(id)arg1;
- (id)markupObserver;
- (void)performUserInteractionTask;
- (id)reviewAssetProvider;
- (void)setMarkupObserver:(id)arg1;
- (void)setReviewAssetProvider:(id)arg1;

@end
