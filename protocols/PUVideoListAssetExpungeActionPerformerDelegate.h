
@protocol PUVideoListAssetExpungeActionPerformerDelegate <NSObject>

@required

- (void)actionPerformer:(PUAssetActionPerformer *)arg1 excludeAssetsFromDataSource:(NSArray *)arg2;
- (void)actionPerformer:(PUAssetActionPerformer *)arg1 stopExcludingAssetsFromDataSource:(NSArray *)arg2;

@end
