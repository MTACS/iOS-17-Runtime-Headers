
@interface CKMediaObjectAssetMenuBuilder : NSObject {
    <CKMediaObjectAssetMenuBuilderDelegate> * _delegate;
}

@property (nonatomic) <CKMediaObjectAssetMenuBuilderDelegate> *delegate;

- (void).cxx_destruct;
- (id)_copyActionForChatItems:(id)arg1;
- (void)_copyChatItems:(id)arg1;
- (void)_deleteChatItems:(id)arg1;
- (id)_deleteMenuForChatItems:(id)arg1;
- (id)_exportActionForChatItems:(id)arg1;
- (id)_exportMenuForChatItem:(id)arg1;
- (id)_forwardActionForChatItems:(id)arg1;
- (id)_forwardAndCopyMenuForChatItems:(id)arg1;
- (void)_forwardChatItems:(id)arg1;
- (id)_openActionForChatItems:(id)arg1;
- (void)_openFile:(id)arg1;
- (void)_openFiles:(id)arg1;
- (id)_quickLookActionForChatItems:(id)arg1 cursorChatItem:(id)arg2;
- (id)_quickLookAndOpenActionsForChatItems:(id)arg1 cursorChatItem:(id)arg2;
- (id)_quickLookAndOpenMenuForChatItems:(id)arg1 cursorChatItem:(id)arg2;
- (void)_quickLookChatItem:(id)arg1;
- (id)_replyActionForChatItem:(id)arg1;
- (void)_replyToChatItem:(id)arg1;
- (id)_tapbackActionForChatItem:(id)arg1;
- (id)_tapbackAndReplyMenuForChatItems:(id)arg1;
- (void)_tapbackChatItem:(id)arg1;
- (id)contextMenuForChatItems:(id)arg1 cursorChatItem:(id)arg2 isCMM:(bool)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
