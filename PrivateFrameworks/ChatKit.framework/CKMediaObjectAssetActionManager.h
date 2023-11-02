
@interface CKMediaObjectAssetActionManager : PXAssetActionManager <CKMediaObjectAssetMenuBuilderDelegate> {
    <CKMediaObjectAssetActionHelper> * _chatActionHelper;
    CKMessagePartChatItem * _chatItem;
    CKMediaObjectAssetMenuBuilder * _menuBuilder;
    NSMutableDictionary * _performerClassByType;
}

@property (nonatomic, readonly) UIMenu *actionContextMenu;
@property (nonatomic, readonly) <CKMediaObjectAssetActionHelper> *chatActionHelper;
@property (nonatomic, readonly) CKMessagePartChatItem *chatItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *performerClassByType;
@property (nonatomic, readonly) bool shouldHideInteractions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (SEL)_barButtonSelectorByActionType:(id)arg1;
- (id)_currentlySelectedChatItemsOutCursorItem:(id*)arg1;
- (void)_handleAddToLibraryBarButtonItem:(id)arg1;
- (void)_handleDeleteBarButtonItem:(id)arg1;
- (void)_handlePreviewAction:(id)arg1 actionType:(id)arg2;
- (void)_handleReplyBarButtonItem:(id)arg1;
- (void)_keyCommandCopy:(id)arg1;
- (void)_keyCommandDelete:(id)arg1;
- (void)_keyCommandQuickLook:(id)arg1;
- (void)_keyCommandReply:(id)arg1;
- (void)_keyCommandSelectAll:(id)arg1;
- (void)_keyCommandTapback:(id)arg1;
- (void)_runDeleteActionPerformer;
- (id)_selectionSnapshotForPerformerClass:(Class)arg1;
- (id)actionContextMenu;
- (id)actionKeyCommands;
- (id)actionPerformerForActionType:(id)arg1;
- (id)barButtonItemForActionType:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canPerformActionType:(id)arg1;
- (id)chatActionHelper;
- (id)chatItem;
- (id)contextMenu;
- (id)contextMenuForChatItems:(id)arg1 cursorChatItem:(id)arg2 isCMM:(bool)arg3;
- (void)executeActionForActionType:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)initWithChatItem:(id)arg1 presentedFromInlineReply:(bool)arg2 chatActionHelper:(id)arg3 selectionManager:(id)arg4;
- (void)menuBuilder:(id)arg1 copyChatItems:(id)arg2;
- (void)menuBuilder:(id)arg1 deleteChatItems:(id)arg2;
- (void)menuBuilder:(id)arg1 forwardChatItems:(id)arg2;
- (void)menuBuilder:(id)arg1 quickLookChatItem:(id)arg2;
- (void)menuBuilder:(id)arg1 replyChatItem:(id)arg2;
- (void)menuBuilder:(id)arg1 tapbackChatItem:(id)arg2;
- (id)performerClassByType;
- (id)previewActionForActionType:(id)arg1;
- (id)previewActionForActionType:(id)arg1 image:(id)arg2;
- (bool)shouldHideInteractions;
- (bool)shouldHideInteractionsForMenuBuilder:(id)arg1;
- (bool)supportsActionType:(id)arg1;
- (bool)supportsContextMenu;

@end
