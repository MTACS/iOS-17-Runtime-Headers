
@protocol CKAttributionViewControllerDelegate <NSObject>

@required

- (void)attributionViewController:(CKAttributionViewController *)arg1 deleteSentSticker:(CKAssociatedStickerChatItem *)arg2;
- (void)attributionViewController:(CKAttributionViewController *)arg1 downloadCustomSticker:(CKAssociatedStickerChatItem *)arg2;
- (void)attributionViewController:(CKAttributionViewController *)arg1 showStickerInStore:(CKAssociatedStickerChatItem *)arg2;

@end
