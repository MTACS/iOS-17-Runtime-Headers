
@protocol STKMSStickerViewDelegate

@required

- (bool)canHandleTap;
- (void)handleLongPress:(STKMSStickerView *)arg1 recognizer:(UILongPressGestureRecognizer *)arg2;
- (void)handleTap:(STKMSStickerView *)arg1 recognizer:(UITapGestureRecognizer *)arg2;
- (void)handleWillDrag:(STKMSStickerView *)arg1;
- (void)handleWillTap:(STKMSStickerView *)arg1;

@end
