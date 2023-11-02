
@interface PUAssetExplorerReviewScreenFunEffectsActionPerformer : PUAssetExplorerReviewScreenActionPerformer {
    <PUFunEffectsViewControllerObserver> * _funEffectsObserver;
    <PUReviewAssetProvider> * _reviewAssetProvider;
    PUReviewScreenBarsModel * _reviewBarsModel;
}

@property (nonatomic) <PUFunEffectsViewControllerObserver> *funEffectsObserver;
@property (nonatomic, retain) <PUReviewAssetProvider> *reviewAssetProvider;
@property (nonatomic, retain) PUReviewScreenBarsModel *reviewBarsModel;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void).cxx_destruct;
- (void)_presentFunEffectsViewControllerForAsset:(id)arg1;
- (id)funEffectsObserver;
- (void)performUserInteractionTask;
- (id)reviewAssetProvider;
- (id)reviewBarsModel;
- (void)setFunEffectsObserver:(id)arg1;
- (void)setReviewAssetProvider:(id)arg1;
- (void)setReviewBarsModel:(id)arg1;

@end
