
@protocol CKMediaObjectAssetMenuBuilderDelegate <NSObject>

@required

- (void)menuBuilder:(CKMediaObjectAssetMenuBuilder *)arg1 copyChatItems:(NSArray *)arg2;
- (void)menuBuilder:(CKMediaObjectAssetMenuBuilder *)arg1 deleteChatItems:(NSArray *)arg2;
- (void)menuBuilder:(CKMediaObjectAssetMenuBuilder *)arg1 forwardChatItems:(NSArray *)arg2;
- (void)menuBuilder:(CKMediaObjectAssetMenuBuilder *)arg1 quickLookChatItem:(CKAttachmentMessagePartChatItem *)arg2;
- (void)menuBuilder:(CKMediaObjectAssetMenuBuilder *)arg1 replyChatItem:(CKAttachmentMessagePartChatItem *)arg2;
- (void)menuBuilder:(CKMediaObjectAssetMenuBuilder *)arg1 tapbackChatItem:(CKAttachmentMessagePartChatItem *)arg2;
- (bool)shouldHideInteractionsForMenuBuilder:(CKMediaObjectAssetMenuBuilder *)arg1;

@end
