
@protocol PXUIAssetBadgeViewDelegate <NSObject>

@optional

- (void)assetBadgeView:(void *)arg1 dismissAnyPresentedViewControllerWithCompletion:(void *)arg2; // needs 2 arg types, found 6: PXUIAssetBadgeView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (UIMenu *)assetBadgeView:(PXUIAssetBadgeView *)arg1 menuForBadges:(unsigned long long)arg2;
- (void)assetBadgeView:(PXUIAssetBadgeView *)arg1 userDidSelectBadges:(unsigned long long)arg2;

@end
