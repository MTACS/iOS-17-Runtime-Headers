
@protocol CKSearchControllerDelegate <NSObject>

@required

- (UITraitCollection *)containerTraitCollectionForController:(CKSearchController *)arg1;
- (double)containerWidthForController:(CKSearchController *)arg1;
- (void)deleteMessageItem:(IMMessageItem *)arg1;
- (void)deleteTransferGUID:(NSString *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })parentMarginInsetsForSearchController:(CKSearchController *)arg1;
- (UICollectionViewCell<CKSearchResultCell> *)searchController:(CKSearchController *)arg1 cellForResult:(CKSpotlightQueryResult *)arg2;
- (CKConversation *)searchController:(CKSearchController *)arg1 conversationForChatGUID:(NSString *)arg2;
- (void)searchController:(CKSearchController *)arg1 requestsItemDeletionAtIndexPath:(NSIndexPath *)arg2;
- (void)searchController:(CKSearchController *)arg1 requestsPresentationOfAlertController:(UIAlertController *)arg2 atRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)searchController:(CKSearchController *)arg1 requestsPresentationOfShareController:(UIViewController *)arg2 atRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)searchControllerCanShowSectionHeader:(CKSearchController *)arg1;
- (void)searchControllerContentsDidChange:(CKSearchController *)arg1;
- (NSArray *)searchTokenFiltersForSearchController:(CKSearchController *)arg1;
- (bool)shouldInsetResultsForSearchController:(CKSearchController *)arg1;
- (double)widthForDeterminingAvatarVisibility;

@optional

- (NSArray *)contextMenusForConversation:(CKConversation *)arg1;
- (void)deleteChatItemWithTransferGUID:(NSString *)arg1 fromMessageItem:(IMMessageItem *)arg2;
- (NSArray *)searchControllerChatGUIDsForDetailsSearch:(CKSearchController *)arg1;

@end
