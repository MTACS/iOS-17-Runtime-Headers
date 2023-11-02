
@protocol AVTStickerRecentsOverlayDelegate <NSObject>

@required

- (void)overlayDidTapCloseButton:(AVTStickerRecentsOverlayView *)arg1;
- (void)overlayDidTapContentView:(AVTStickerRecentsOverlayView *)arg1;
- (void)overlayDidTapContinueButton:(AVTStickerRecentsOverlayView *)arg1;

@end
