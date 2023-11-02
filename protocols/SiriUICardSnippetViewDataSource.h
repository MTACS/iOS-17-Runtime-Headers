
@protocol SiriUICardSnippetViewDataSource <NSObject>

@required

- (NSLocale *)localeForCardSnippetView:(SiriUICardSnippetView *)arg1;
- (double)preferredContentHeight;
- (SiriUISashItem *)sashItemForCardSnippetView:(SiriUICardSnippetView *)arg1;

@end
