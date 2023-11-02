
@protocol PXStoryMutableFeedViewModel

@required

- (<PXFeedViewActionPerformer> *)actionPerformer;
- (<PXAssetCollectionActionPerformerDelegate> *)assetCollectionActionPerformerDelegate;
- (bool)isActive;
- (NSObject<PXAnonymousViewController> *)presentingViewController;
- (void)setActionPerformer:(id <PXFeedViewActionPerformer>)arg1;
- (void)setAssetCollectionActionPerformerDelegate:(id <PXAssetCollectionActionPerformerDelegate>)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setPresentingViewController:(NSObject<PXAnonymousViewController> *)arg1;
- (void)setSubtitle:(NSString *)arg1;
- (NSString *)subtitle;

@end
