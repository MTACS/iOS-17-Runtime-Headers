
@protocol AVTStickerSheetControllerDelegate <NSObject>

@required

- (void)stickerSheetController:(id <AVTStickerSheetController>)arg1 didFinishRenderingStickersForRecord:(id <AVTAvatarRecord>)arg2;
- (void)stickerSheetController:(id <AVTStickerSheetController>)arg1 didInteractWithStickerItem:(AVTUIStickerItem *)arg2 atIndex:(long long)arg3 byPeeling:(bool)arg4;
- (void)stickerSheetController:(id <AVTStickerSheetController>)arg1 didScrollToContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)stickerSheetController:(id <AVTStickerSheetController>)arg1 scrollView:(UIScrollView *)arg2 willEndDraggingWithTargetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;

@optional

- (MSSticker *)stickerSheetController:(id <AVTStickerSheetController>)arg1 requestsStickerForFileURL:(NSURL *)arg2 localizedDescription:(NSString *)arg3 forItemWithIdentifier:(NSString *)arg4;

@end
