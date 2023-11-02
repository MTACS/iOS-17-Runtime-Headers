
@protocol UIKeyboardMediaHostProtocol <NSObject>

@required

- (void)dismissCard;
- (void)draggedStickerToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)pasteImageAtFileHandle:(NSFileHandle *)arg1;
- (void)presentCard;
- (void)requestInsertionPointCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGPoint { double x1; double x2; }, void*
- (void)stageStickerWithFileHandle:(NSFileHandle *)arg1 url:(NSString *)arg2 accessibilityLabel:(NSString *)arg3;

@end
