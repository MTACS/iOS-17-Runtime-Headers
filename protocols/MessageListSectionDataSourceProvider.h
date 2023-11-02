
@protocol MessageListSectionDataSourceProvider <NSObject>

@required

- (NSIndexPath *)messageListSectionDataSource:(MessageListSectionDataSource *)arg1 indexPathForItemIdentifier:(id <EMCollectionItemID>)arg2;
- (NSArray *)messageListSectionDataSource:(MessageListSectionDataSource *)arg1 indexPathsForItemIdentifiers:(NSArray *)arg2;
- (<EMCollectionItemID> *)messageListSectionDataSource:(MessageListSectionDataSource *)arg1 itemIdentifierForIndexPath:(NSIndexPath *)arg2;
- (NSArray *)messageListSectionDataSource:(MessageListSectionDataSource *)arg1 itemIdentifiersForIndexPaths:(NSArray *)arg2;
- (void)messageListSectionDataSource:(void *)arg1 performUpdateAnimated:(void *)arg2 cleanSnapshot:(void *)arg3 prepare:(void *)arg4 update:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 20: MessageListSectionDataSource *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, _TtC6MailUI34MessageListSectionDataSourceChange *, id /* block */, NSDiffableDataSourceSnapshot *, EMObjectID *, void*, id /* block */, void*, void, id /* block */, void*
- (NSDiffableDataSourceSnapshot *)snapshotForMessageListSectionDataSource:(MessageListSectionDataSource *)arg1;

@end
