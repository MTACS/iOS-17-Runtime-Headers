
@protocol CompletionItemActionHandler <NSObject>

@required

- (BrowserController *)browserController;
- (void)findOnPage;
- (void)goToURL:(NSURL *)arg1;
- (void)goToURLString:(NSString *)arg1;
- (void)openURLInExternalApplication:(NSURL *)arg1;
- (void)presentDetail:(UIViewController *)arg1;
- (void)resumeSearchWithQuery:(WBSCompletionQuery *)arg1;
- (void)search:(NSString *)arg1;
- (void)searchTextCompletionAccessoryButtonTappedForCompletionItem:(id <CompletionItem>)arg1;
- (void)switchToTabWithUUID:(NSUUID *)arg1 inWindowWithUUID:(NSUUID *)arg2 forTabGroupWithUUID:(NSUUID *)arg3;

@end
