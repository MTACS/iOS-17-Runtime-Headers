
@interface CKCMMAssetActionManager : PXPhotoKitAssetActionManager {
    CKMediaObjectAssetActionManager * _messagesAssetActionManager;
    id  _photosAssetActionManager;
    bool  _presentedFromInlineReply;
    PXCMMSession * _session;
}

@property (nonatomic, retain) CKMediaObjectAssetActionManager *messagesAssetActionManager;
@property (nonatomic, retain) id photosAssetActionManager;
@property (nonatomic) bool presentedFromInlineReply;
@property (nonatomic, retain) PXCMMSession *session;

+ (id)assetActionManagerWithCMMSession:(id)arg1 chatItem:(id)arg2 presentedFromInlineReply:(bool)arg3 chatActionHelper:(id)arg4 performerDelegate:(id)arg5;

- (void).cxx_destruct;
- (id)_destinationActionManagerForActionType:(id)arg1;
- (void)_propagateObjectReference:(id)arg1;
- (void)_propagatePerformerDelegate:(id)arg1;
- (id)actionPerformerForActionType:(id)arg1;
- (id)barButtonItemForActionType:(id)arg1;
- (bool)canPerformActionType:(id)arg1;
- (void)executeActionForActionType:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)messagesAssetActionManager;
- (id)photosAssetActionManager;
- (unsigned long long)presentationSource;
- (bool)presentedFromInlineReply;
- (id)previewActionForActionType:(id)arg1 image:(id)arg2;
- (id)session;
- (void)setAdditionalPropertiesFromActionManager:(id)arg1;
- (void)setMessagesAssetActionManager:(id)arg1;
- (void)setObjectReference:(id)arg1;
- (void)setPerformerDelegate:(id)arg1;
- (void)setPhotosAssetActionManager:(id)arg1;
- (void)setPresentedFromInlineReply:(bool)arg1;
- (void)setSession:(id)arg1;
- (bool)shouldEnableActionType:(id)arg1 onAsset:(id)arg2;
- (bool)supportsActionType:(id)arg1;

@end
