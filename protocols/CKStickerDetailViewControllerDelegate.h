
@protocol CKStickerDetailViewControllerDelegate <NSObject>

@required

- (void)stickerDetailViewController:(CKStickerDetailViewController *)arg1 deletedStickerWithTransferGUID:(NSString *)arg2;
- (void)stickerDetailViewController:(CKStickerDetailViewController *)arg1 selectedStickerPackWithAdamID:(NSNumber *)arg2;

@end
