
@protocol WBSBrowserTabCompletionProviderSource <NSObject>

@required

- (WBSBrowserTabCompletionInfo *)selectedTabInfoForBrowserTabCompletionProvider:(WBSBrowserTabCompletionProvider *)arg1;
- (NSArray *)tabInfosForBrowserTabCompletionProvider:(WBSBrowserTabCompletionProvider *)arg1;

@end
