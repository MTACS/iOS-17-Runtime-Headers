
@protocol MessageListSectionDataSourceDelegate <NSObject>

@required

- (EFPromise *)initialLoadCompletedPromiseForMessageListSectionDataSource:(MessageListSectionDataSource *)arg1;
- (void)messageListSectionDataSource:(MessageListSectionDataSource *)arg1 addMessagesToStackWithItemIDs:(NSArray *)arg2;
- (void)messageListSectionDataSource:(MessageListSectionDataSource *)arg1 deletedMessagesWithItemIdentifiers:(NSArray *)arg2;
- (void)messageListSectionDataSource:(MessageListSectionDataSource *)arg1 didAddMessagesWithItemIdentifiers:(NSArray *)arg2;
- (void)messageListSectionDataSource:(MessageListSectionDataSource *)arg1 handleRowSelectionAfterMovingMessagesWithItemIdentifiers:(NSArray *)arg2;
- (void)messageListSectionDataSource:(MessageListSectionDataSource *)arg1 updatedOldestItemsForMailboxes:(NSDictionary *)arg2;
- (void)messageListSectionDataSource:(MessageListSectionDataSource *)arg1 willAddMessagesWithItemIdentifiers:(NSArray *)arg2;
- (void)showBlankCellAlertForMessageListSectionDataSource:(MessageListSectionDataSource *)arg1 itemID:(id <EMCollectionItemID>)arg2 indexPath:(NSIndexPath *)arg3 reason:(NSString *)arg4;

@optional

- (void)messageListSectionDataSource:(MessageListSectionDataSource *)arg1 collectionFinishedSearching:(EMCollection *)arg2 remote:(bool)arg3;

@end
