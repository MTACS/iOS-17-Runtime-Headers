
@interface UIKeyboardEmojiKeyView : UIKBKeyView <UIKeyboardEmojiCategoryUpdate> {
    UIKeyboardEmojiKeyDisplayController<UIKeyboardEmojiCategoryUpdateDelegate> * emojiKeyManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIKeyboardEmojiKeyDisplayController<UIKeyboardEmojiCategoryUpdateDelegate> *emojiKeyManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)emojiKeyManager;
- (void)setEmojiKeyManager:(id)arg1;
- (void)updateToCategory:(long long)arg1;
- (long long)updateToCategoryWithOffsetPercentage:(double)arg1;

@end
