
@protocol VUILanguageAwareStringHandling <NSObject>

@optional

- (NSAttributedString *)makeLanguageAwareAttributedString:(NSAttributedString *)arg1 defaultParagraphStyle:(NSParagraphStyle *)arg2;
- (NSString *)makeLanguageAwareString:(NSString *)arg1;

@end
