
@interface PUOneUpPhotosSharingTransitionContext : PUPhotosSharingTransitionContext {
    PUAssetReference * _currentAssetReference;
}

@property (nonatomic, retain) PUAssetReference *currentAssetReference;

- (void).cxx_destruct;
- (id)currentAssetReference;
- (id)keyAssetIndexPath;
- (void)setCurrentAssetReference:(id)arg1;

@end
