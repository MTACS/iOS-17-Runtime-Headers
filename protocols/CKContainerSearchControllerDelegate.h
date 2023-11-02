
@protocol CKContainerSearchControllerDelegate

@required

- (NSArray *)contextMenusForConversation:(CKConversation *)arg1;
- (UISearchBar *)searchBarForSearchViewController:(CKSearchViewController *)arg1;
- (CKConversation *)searchController:(CKSearchViewController *)arg1 conversationForChatGUID:(NSString *)arg2;
- (void)searchController:(CKSearchViewController *)arg1 didSelectItem:(NSString *)arg2 inChat:(NSString *)arg3;
- (void)searchControllerDidBeginDragging:(CKSearchViewController *)arg1;
- (void)searchViewController:(CKSearchViewController *)arg1 requestsPushOfSearchController:(CKSearchViewController *)arg2;
- (bool)shouldInsetResultsForSearchController:(CKSearchController *)arg1;

@end
