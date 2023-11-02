
@interface PUVideoListAssetActionManager : PUPhotoKitAssetActionManager {
    <PUVideoListAssetExpungeActionPerformerDelegate> * _actionPerformerDelegate;
}

@property (nonatomic) <PUVideoListAssetExpungeActionPerformerDelegate> *actionPerformerDelegate;

- (void).cxx_destruct;
- (id)actionPerformerDelegate;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2;
- (bool)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (void)setActionPerformerDelegate:(id)arg1;
- (bool)shouldEnableActionType:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2;

@end
