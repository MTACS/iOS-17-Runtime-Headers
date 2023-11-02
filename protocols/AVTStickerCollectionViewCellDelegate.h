
@protocol AVTStickerCollectionViewCellDelegate <NSObject>

@required

- (void)stickerCellDidPeelSticker:(AVTStickerCollectionViewCell *)arg1;
- (void)stickerCellDidTapSticker:(AVTStickerCollectionViewCell *)arg1;

@optional

- (UIView *)dragPreviewContainerForLiftingStickerInStickerCell:(AVTStickerCollectionViewCell *)arg1;

@end
