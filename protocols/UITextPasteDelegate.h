
@protocol UITextPasteDelegate <NSObject>

@optional

- (NSAttributedString *)textPasteConfigurationSupporting:(id <UITextPasteConfigurationSupporting>)arg1 combineItemAttributedStrings:(NSArray *)arg2 forRange:(UITextRange *)arg3;
- (UITextRange *)textPasteConfigurationSupporting:(id <UITextPasteConfigurationSupporting>)arg1 performPasteOfAttributedString:(NSAttributedString *)arg2 toRange:(UITextRange *)arg3;
- (bool)textPasteConfigurationSupporting:(id <UITextPasteConfigurationSupporting>)arg1 shouldAnimatePasteOfAttributedString:(NSAttributedString *)arg2 toRange:(UITextRange *)arg3;
- (void)textPasteConfigurationSupporting:(id <UITextPasteConfigurationSupporting>)arg1 transformPasteItem:(id <UITextPasteItem>)arg2;

@end
