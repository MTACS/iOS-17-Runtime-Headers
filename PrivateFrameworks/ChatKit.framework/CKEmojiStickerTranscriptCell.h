
@interface CKEmojiStickerTranscriptCell : CKAssociatedStickerTranscriptCell {
    CKEmojiStickerLabel * _labelView;
}

@property (nonatomic, retain) IMEmojiSticker *emojiSticker;
@property (nonatomic, readonly) CKEmojiStickerLabel *labelView;

- (void).cxx_destruct;
- (void)animateToVisible:(bool)arg1 completion:(id /* block */)arg2;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;
- (id)emojiSticker;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)labelView;
- (void)performHide:(id /* block */)arg1;
- (void)performReveal:(id /* block */)arg1;
- (void)prepareForReuse;
- (void)setEmojiSticker:(id)arg1;
- (void)setSticker:(id)arg1;

@end
