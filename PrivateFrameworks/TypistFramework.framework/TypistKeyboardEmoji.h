
@interface TypistKeyboardEmoji : TypistKeyboard

+ (id)findEmojiScrollView;
+ (void)resetSelectedCategory;
+ (bool)scrollEmojiKeyboard;

- (id)generateKeystrokeStream:(id)arg1;
- (id)init:(id)arg1 options:(id)arg2;
- (void)preprocessing;

@end
