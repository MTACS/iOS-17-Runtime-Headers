
@protocol UITextPasteSessionDelegate <NSObject>

@optional

- (void)textPasteSessionDidEndPasting:(id <UITextPasteSession>)arg1;
- (void)textPasteSessionDidRevealPasteResult:(id <UITextPasteSession>)arg1;
- (void)textPasteSessionWillBeginPasting:(id <UITextPasteSession>)arg1;
- (void)textPasteSessionWillHidePasteResult:(id <UITextPasteSession>)arg1;

@end
