
@interface PXStoryAssetActionPerformer : PXPhotoKitAssetActionPerformer {
    <PXStoryViewActionPerformer> * _storyViewActionPerformer;
}

@property (nonatomic, readonly) <PXStoryViewActionPerformer> *storyViewActionPerformer;

+ (bool)canPerformWithActionManager:(id)arg1;

- (void).cxx_destruct;
- (id)storyViewActionPerformer;

@end
