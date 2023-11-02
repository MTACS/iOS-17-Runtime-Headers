
@protocol ATRestoreAssetLinkDelegate <NSObject>

@required

- (void)restoreAssetLinkDidCancelRestore:(ATRestoreAssetLink *)arg1;
- (void)restoreAssetLinkNetworkPolicyDidChange:(ATRestoreAssetLink *)arg1;

@end
