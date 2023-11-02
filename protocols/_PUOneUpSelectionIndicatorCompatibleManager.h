
@protocol _PUOneUpSelectionIndicatorCompatibleManager <NSObject>

@required

- (bool)pu_isAssetReferenceSelected:(PUAssetReference *)arg1;
- (void)pu_registerSelectionIndicatorObserver:(PUOneUpSelectionIndicatorTileViewController *)arg1;
- (void)pu_unregisterSelectionIndicatorObserver:(PUOneUpSelectionIndicatorTileViewController *)arg1;

@end
