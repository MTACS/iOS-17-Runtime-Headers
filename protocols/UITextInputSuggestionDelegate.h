
@protocol UITextInputSuggestionDelegate <UITextInputDelegate>

@required

- (void)handleWebViewCredentialsSaveForWebsiteURL:(NSURL *)arg1 user:(NSString *)arg2 password:(NSString *)arg3 passwordIsAutoGenerated:(bool)arg4;
- (void)setSuggestions:(NSArray *)arg1;

@end
