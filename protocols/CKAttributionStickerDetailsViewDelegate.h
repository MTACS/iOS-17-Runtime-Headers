
@protocol CKAttributionStickerDetailsViewDelegate <NSObject>

@required

- (void)attributionStickerDetailsView:(CKAttributionStickerDetailsView *)arg1 deleteButtonWasPressedForStickerChatItem:(CKAssociatedStickerChatItem *)arg2;
- (void)attributionStickerDetailsView:(CKAttributionStickerDetailsView *)arg1 downloadButtonWasPressedForStickerChatItem:(CKAssociatedStickerChatItem *)arg2;
- (void)attributionStickerDetailsView:(CKAttributionStickerDetailsView *)arg1 showInAppStoreButtonWasPressedForStickerChatItem:(CKAssociatedStickerChatItem *)arg2;

@end
