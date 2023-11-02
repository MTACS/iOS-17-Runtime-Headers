
@interface CKEmojiStickerChatItem : CKAssociatedStickerChatItem {
    IMEmojiSticker * _emojiSticker;
}

@property (nonatomic, readonly) IMEmojiSticker *emojiSticker;

- (void).cxx_destruct;
- (id)IMEmojiStickerChatItem;
- (Class)cellClass;
- (id)emojiSticker;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (struct CGSize { double x1; double x2; })size;
- (id)sticker;

@end
