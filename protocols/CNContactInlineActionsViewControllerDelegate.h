
@protocol CNContactInlineActionsViewControllerDelegate <NSObject>

@optional

- (void)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 willPerformActionOfType:(NSString *)arg2;
- (CNUIGeminiDataSource *)geminiDataSource;

@end
